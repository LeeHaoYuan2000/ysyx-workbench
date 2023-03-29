/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "sdb.h"

#define NR_WP 32

// typedef struct watchpoint {
//   int NO;
//   struct watchpoint *next;
//   char expr[128];
//   int val;
//   int old_val;
//   bool changed;
// } WP;

 static WP wp_pool[NR_WP] = {};
static WP *head;
static WP *free_;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }
  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp(){//get a new watchpointe node

  WP* WP_buf;
  if(free_ == NULL){
    printf("there no avaliable watchpoint\n");
    return NULL;
  }
  else {
    WP_buf = free_;
    free_ = free_->next;
  }

  return WP_buf;
}

void addWPHead(WP* addWP){
    addWP->next = head;
    head = addWP;
}

void deleteWP(int n){
  WP* WP_buf;
  WP_buf = head;
  if(n<32 && n >=0){

    while(WP_buf->NO != n){
      WP_buf = WP_buf->next;
    }
    free_wp(WP_buf);
  }

  else{
    printf("Please input the right number\n");
  }
}

void free_wp(WP *wp){
  WP* head_buf = head;
  if(head_buf == NULL)
  {
    printf("There no watchpoints are in use\n");
  }
  else{
    if(head_buf == wp){
      head = wp->next;
      wp->next = free_;
      free_ = wp;
    }
    else {
      while(head_buf->next != wp && head_buf->next != NULL){
        head_buf = head_buf->next;
    }
    WP* buffer;
      if(head_buf->next == NULL){
        printf("there is no such a watchpoint\n");
      }
      else {
        buffer = head_buf->next->next;
        head_buf->next->next = free_;
        free_ = head_buf->next;
        head_buf->next = buffer;
      }
    }
  }
}

void print_wp(){
  WP* wp_node;
  wp_node = head;

  if(head == NULL)
  {
      printf("NOOO !!!\n");
  }
  else {
      printf("Yesss !!!\n");
  }
  while(wp_node != NULL){
    printf("WatchPoint NO.%d  expr:%s val:%d\n",wp_node->NO,wp_node->expr,wp_node->val);
    wp_node = wp_node->next;
  }
}

bool check_wp(){
  WP* head_buf;
  head_buf = head;
  bool* success;
  bool  change;
  change = false;
  while(head_buf != NULL){
    head_buf->val = expr(head_buf->expr,success);
    if(head_buf->old_val != head_buf->val){
      head_buf->changed = 1;
      head_buf->old_val = head_buf->val;
      printf("watchpoint changed: NO.%d   expr:%s   val:%d\n",head_buf->NO,head_buf->expr,head_buf->val);
      change = true;
    }
    else{
      head_buf->changed = 0;
      change = false;
    }
    head_buf = head_buf->next;
  }
  return change;
}