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

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>
//#include <monitor/watchpoint.h>


static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);
static int cmd_d(char *args);
static int cmd_w(char *args);


static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Run the program step by step", cmd_si},
  { "info","Display the status of regisiters and watch points", cmd_info},
  { "x","Display the value of the particular addr", cmd_x},
  { "p","display the value of EXPR", cmd_p},
  { "w","set the watchpoint",cmd_w},
  { "d","delete the watchpoint",cmd_d}
  /* TODO: Add more commands */
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_d(char *args){
  char *number = strtok(NULL,"");
  int WPNumber;
  WP* WP_buf;
  sscanf(number,"%d",&WPNumber);
  deleteWP(WPNumber);
  return 0;
}

static int cmd_w(char *args){
    char *exprWP = strtok(NULL," ");
    WP* newWP;
    bool *success;
    if(expr == NULL){
      printf("Please input the right expr");
      return 0;
    }

    newWP = new_wp();
    if(newWP == NULL){
      return 0;
    }
    else {
      strcpy(newWP->expr,exprWP);
      newWP->val = expr(newWP->expr,success);
      newWP->old_val = newWP->val;
      addWPHead(newWP);
      printf("add a new WP\n");
    }

  return 0;
}

static int cmd_x(char *args){
  char *num = strtok(NULL," ");
  char *addr = strtok(NULL," ");

  int lenth = 0;
  int addrNumber;
  int i,j = 0;

  sscanf(num,"%d",&lenth);
  sscanf(addr,"%x)",&addrNumber);

  if(addr == NULL){
    printf("Please input the number crrectlly");
    return 0;
  }
  for(i = 0;i < lenth ;i++){
    if(j % 4 == 0){
      printf("0x%x: ",addrNumber);
    }
    j++;
    printf("0x%8lx   ",vaddr_read(addrNumber,4));

    addrNumber = addrNumber + 4;

    if(j%4 == 0){
      printf("\n");
    }
  }
  return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL," ");
  if(arg == NULL){
    printf("Please input parameter\n");
    printf("e.g. info r :Display the status of regisiters\n");
    printf("e.g. info w :Display the status of watch points\n");
    return 0;//
  }
  else {
    if(strcmp(arg,"r") == 0){
      isa_reg_display();
    }
    else if(strcmp(arg,"w") == 0){//show all the value of watchpoint
          print_wp();
    }
  }

  return 0;
}

static int cmd_si(char *args){
  char *arg = strtok(NULL,"");
  int i = 0;//

  if(arg == NULL){//if there not any number behind the "si",then only run it onece
    cpu_exec(1);
  }
  else {
    sscanf(arg,"%d",&i);
    for(;i > 0 ; i--){
      cpu_exec(1);
    }
  }
  return 0;
}

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_p(char *args){//calculate the value of EXPR
    bool *success;

    if(args == NULL){
      printf("please input the right expr!");
    }

  printf("result = %ld \n",expr(args,success));
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
