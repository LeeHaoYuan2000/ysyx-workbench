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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

const char *RVregs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

bool checkparentheses(int p,int q);
int dominant_operator(int p, int q);

enum {
  TK_NOTYPE = 256, 
  TK_EQ,
  Decimal,
  Hex,
  Reg,
  TK_NEQ,
  AND,
  OR,
  NEG,
  POINTER  /* TODO: Add more token types */
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {" +", TK_NOTYPE},    //spaces 
  {"\\+",'+'},          //plus
  {"-",'-'},          //minus
  {"\\*",'*'},          //multiply
  {"/",'/'},            //divide
  {"0[xX]([a-fA-F0-9]+)",Hex},
  {"[0-9]+",Decimal}, //decimal
  {"\\$[a-zA-Z0-9]+",Reg},

  {"\\(",'('},
  {"\\)",')'},
  {"==", TK_EQ},        // equal
  {"!=",TK_NEQ},
  {"&&",AND},
  {"\\|\\|",OR}

};

#define NR_REGEX ARRLEN(rules)  //return the lenth of the rules

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[128];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {/* rm_eo :Byte offset from string's start to substring's end.  */
        char *substr_start = e + position;                                        ///* rm_so:  Byte offset from string's start to substring's start.  */
        int substr_len = pmatch.rm_eo;
        assert(substr_len <= 128);

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;
 
        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        if(rules[i].token_type == TK_NOTYPE){//when thr token is space, then exit this circle
          break;
        }

        switch (rules[i].token_type) //判断当前的减号和乘号的类型
        {
        case '-':
          if(nr_token == 0){
             tokens[nr_token].type = NEG;
           }
          else{
           switch (tokens[nr_token-1].type)
           {
            case '+':
                tokens[nr_token].type = NEG;
              break;
              case '-':
                tokens[nr_token].type = NEG;
              break;
              case '*':
              tokens[nr_token].type = NEG;
              break;
            case '/':
              tokens[nr_token].type = NEG;
              break;
            case '(':
              tokens[nr_token].type = NEG;
              break;
            default:
            tokens[nr_token].type = rules[i].token_type;
              break;
          }
        } 
          break;

          case '*':
            if(nr_token == 0){
               tokens[nr_token].type = POINTER;
            }
            else {
              switch (tokens[nr_token-1].type)
              {
                case '+':
                tokens[nr_token].type = POINTER;
                break;
                case '-':
                tokens[nr_token].type = POINTER;
                break;
                case '*':
                tokens[nr_token].type = POINTER;
                break;
                case '/':
                tokens[nr_token].type = POINTER;
                break;
              default:
              tokens[nr_token].type = rules[i].token_type;
                break;
              }
            }
          break;
        default:
          tokens[nr_token].type = rules[i].token_type;
          break;
        }
        

        switch (rules[i].token_type) {
          case Decimal:
            memset(tokens[nr_token].str,'\0',128);  
            strncpy(tokens[nr_token].str,&e[position-substr_len],substr_len);

            printf("Decimal = %s \n",tokens[nr_token].str);
          break ;

          case Hex:
            memset(tokens[nr_token].str,'\0',128);  
            strncpy(tokens[nr_token].str,&e[position-substr_len],substr_len);
            printf("Hex = %s \n",tokens[nr_token].str);
          break;

          case Reg:
            memset(tokens[nr_token].str,'\0',128);  
            strncpy(tokens[nr_token].str,&e[position-substr_len],substr_len);
            printf("Reg = %s \n",tokens[nr_token].str);
          break;
          default: //TODO();
        }
        nr_token ++;
        break;
      }


    }
    

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }

  }

  return true;
}


uint32_t eval(int p,int q){//calculate all the expression
  if(p>q){
    /*
      Bad experssion
    */
   printf("p:%d  q:%d\n",p,q);
    printf("There are errors in the expression,Please input the right one\n");
    assert(0);//use assert
  }
  else if(p == q){//only numbers can be here
      int result = 0; // store the data 
      int cnt = 0;
      switch (tokens[p].type)
      {
        case Decimal:
         sscanf(tokens[p].str,"%d",&result);
          return result;
        break;
        case Hex:
          sscanf(tokens[p].str,"%x",&result);
          return result;
        break;
        case Reg:
        char strReg[32];
        while(cnt <= 31){
          memset(strReg,'\0',32);
          strcpy(strReg,"$");
          strcat(strReg,RVregs[cnt]);
          if(!strcmp(tokens[p].str,strReg)){
            result = cpu.gpr[cnt];
            break;
          }
          cnt++;
        }

        if(cnt >=32){
          assert(0);
        }
         return result;
        break;
      default:
          assert(0);//if the type can`t match any then assert(0)
        break;
      }
  }

  else if(checkparentheses(p,q)){
      return eval(p+1,q-1); 
  }

  else {
    int OP;
    int result = 0;
    OP = dominant_operator(p,q);
    int val1;
    if(tokens[OP].type == NEG || tokens[OP].type == POINTER){
         val1 = 0;
         printf("this is neg3\n");
    }
    else {
         val1 = eval(p,OP - 1);
         printf("not neg  p:%d OP:%d\n",p,OP);
    }
    
    int val2 = eval(OP + 1,q);

    switch (tokens[OP].type)
    {
      case TK_EQ:
        return val1 == val2;
      break;
      case TK_NEQ:
        return val1 != val2;
      break;
      case AND:
        return val1 && val2;
      break;
      case OR:
        return val1 || val2;
      case NEG:
        return -val2;
      break;
      case POINTER:
        return vaddr_read(val2,4);
      break;
      case '+':
        return result = (val1 + val2);
      break;
      case '-':
        return result = (val1 - val2);
      break;
      case '*':
        return result = (val1 * val2);
      break;
      case '/':
        return result = (val1 / val2);
      break;
    
    default:
      //assert(0);
      break;
    }
  }
}

 bool checkparentheses(int p,int q){
  int parenthere = 0;
  int i;
  if(tokens[p].type == '(' && tokens[q].type == ')'){
    for(i = p; i <= q; i++){
      if(tokens[i].type == '('){
        parenthere ++;
      }
      else if(tokens[i].type == ')'){
        parenthere --;
      }
    }
    if(parenthere == 0){
        return true;
    }
    else {
      return false; 
    }
  }
  else{
    return false;
  }
  return false;
}

int dominant_operator(int p, int q){ 
  int parenthese = 0;
  int i;
  int opoint;
  int priorty = 0;

  opoint = p;
  opoint = opoint;

  for(i = p; i<= q; i++){
    if(tokens[i].type == '('){
      parenthese ++;
    } 
    else if(tokens[i].type == ')'){
      parenthese --;
    }
    if(parenthese == 0){
      switch (tokens[i].type)
      {
        case AND:
        if(priorty <= 13){
            priorty = 13;
            opoint = i;
        }
        break;

        case OR:
        if(priorty <= 12){
            priorty = 12;
            opoint = i;
        }
        break;

        case TK_EQ:
        if(priorty <= 12){
            priorty = 12;
            opoint = i;
        }
        break;

        case TK_NEQ:
        if(priorty <= 11){
            priorty = 11;
            opoint = i;
        }
        break;

        case '+':
        if(priorty <= 10){
            priorty = 10;
            opoint = i;
        }
        break;


        case '-':
          if(priorty<=9){
              priorty = 9;
              opoint = i;
          }
        break;

        case '*':
        if(priorty <= 6 ){
          priorty = 6;
            opoint = i;
          }
        break;

        case '/':
        if(priorty <= 5 ){
          priorty = 5;
            opoint = i;
          }
        break;

        case NEG:
        if(priorty<=4){
              priorty = 4;
              opoint = i;
          }
        break;

        case POINTER:
        if(priorty<=3){
              priorty = 3;
              opoint = i;
          }
        break;

      default:
        break;
      }
    }
  }
  return opoint;
}




word_t expr(char *e, bool *success) {
  word_t val;

  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  val = eval(0,nr_token - 1);

  printf("in function expr\n");
  printf("%ld \n",val);

  //*success = true;
  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  return val;
}
