#include <stdio.h>
#include <stdlib.h>

#include <readline/readline.h>
#include <readline/history.h>

#include "../include/sim_init.h"

#define NR_CMD 9

static int cmd_c(char *args);
static int cmd_q(char *args);
static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);
static int cmd_d(char *args);
static int cmd_w(char *args);

//read the cmd that you input
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("SDB In NPC ->");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

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


void sdb_mainloop() {
//   if (is_batch_mode) {
//     cmd_c(NULL);
//     return;
//   }

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

static int cmd_c(char *args){
    sim_exe(-1);

    return 0;
}
static int cmd_q(char *args){
    sim_exit();
    exit(0); // 退出程序

    return 0;
}
static int cmd_help(char *args){
  printf("Sorry, I can`t help you !!!\n");

  return 0;
}

static int cmd_si(char *args){
   sim_exe(10);
   return 0;
}

static int cmd_info(char *args){
  Output_gpr();
  return 0;
}

static int cmd_x(char *args){
  printf("不想做这个部分，我好累呀！！！\n");
  return 0;
}

static int cmd_p(char *args){
  printf("不想做这个部分，我好累呀！！！\n");
  return 0;
}
static int cmd_d(char *args){
  printf("Do it Later!!\n");
  return 0;
}
static int cmd_w(char *args){
  printf("Do it Later!!\n");
  return 0;
}

