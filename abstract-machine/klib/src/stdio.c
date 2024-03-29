#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int ASCII_number(int n){ //transform the number 0~9 into ASCII
    switch(n)
    {
    case 0:return  '0';break;
    case 1:return  '1';break;
    case 2:return  '2';break;
    case 3:return  '3';break;
    case 4:return  '4';break;
    case 5:return  '5';break;
    case 6:return  '6';break;
    case 7:return  '7';break;
    case 8:return  '8';break;
    case 9:return  '9';break;
    case 10: return 'a';break;
    case 11: return 'b';break;
    case 12: return 'c';break;
    case 13: return 'd';break;
    case 14: return 'e';break;
    case 15: return 'f';break;
    
    default:
      return 'a';
      break;
    }
}

void num2str(char *str,int num){
  bool is_num_native = false;
  int lenth = 0;//record the number lenth
  char str_buf[256];
  //pre-opration to the number 
  if(num == 0){ 
    str[0] = '0';
    str[1] = '\0'; //if num is 0
    return ;//return now
  }
  else if(num<0){
    num = ~num;
    num = num + 1; //
    is_num_native = true;//this is a native number
  }

  while(num){//when the number is 0, stop the circle
    str_buf[lenth] = ASCII_number(num%10); //将每一次的余数存入str_buf
    num = num / 10;
    lenth++;
  }

  int i = 0;
  if(is_num_native){
    str[i] = '-';
    i++;
  }

  while(lenth){//将
    str[i] = str_buf[lenth-1];
    lenth--;
    i++;
  }

  str[i] = '\0';

}

//Output the number as a hex number
//regard all the number as unsigned number
void hex2str(char *str, unsigned int num){
  int lenth = 0;//record the number lenth
  char str_buf[256];
  //pre-opration to the number 
  if(num == 0){ 
    str[0] = '0';
    str[1] = '\0'; //if num is 0
    return ;//return now
  }

  while(num){//when the number is 0, stop the circle
    str_buf[lenth] = ASCII_number(num%16); //将每一次的余数存入str_buf
    num = num / 16;
    lenth++;
  }

  int i = 0;

  while(lenth){//将
    str[i] = str_buf[lenth-1];
    lenth--;
    i++;
  }

  str[i] = '\0';
}

int printf(const char *fmt, ...) {
  va_list arg;
	va_start(arg, fmt);
 
	while (*fmt)
	{
		char ret = *fmt;
		if (ret == '%')
		{
			switch (*++fmt)
			{
          
			case 'c':
			{
						char ch = va_arg(arg, int);
						putch(ch);
						break;
			}

			case 's':
			{
						char *pc = va_arg(arg, char *);
						while (*pc)
						{
							putch(*pc);
							pc++;
						}
						break;
			}

      case 'd':
      {
          int num = va_arg(arg,int);
          int i = 0;
          char str[256];
          num2str(str,num);
          while(str[i] != '\0'){
              putch(str[i]);
              i++;
          }
        break;
      }

      case 'x':{
          unsigned int num = va_arg(arg,unsigned int);
          int i = 0;
          char str[256];
          hex2str(str,num);
          while(str[i] != '\0'){
              putch(str[i]);
              i++;
          }
        break;
      }
      case 'l':{
          switch (*++fmt)
          {
          case 'd':{
            long int num = va_arg(arg,long int);
            int i = 0;
            char str[256];
            num2str(str,num);
            while(str[i] != '\0'){
                putch(str[i]);
                i++;
            }
          }
            break;
          case 'x':{
            unsigned  int num = va_arg(arg,unsigned  int);
            int i = 0;
            char str[256];
            hex2str(str,num);
            while(str[i] != '\0'){
                putch(str[i]);
                i++;
            }
          }
          default:
            break;
          }
      }

			default:
				break;
			}
		}
		else
		{
			putch(*fmt);
		}
		fmt++;
	}
	va_end(arg);
  //panic("Not implemented");
  return 1;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  unsigned long lenth = 0;
  va_list ar;
  va_start(ar,fmt);

  while(*fmt != '\0'){
    if(*fmt != '%'){
      *out = *fmt;
      out++;
      fmt++;
      lenth++;
    }
    else{
      fmt++;
      switch(*fmt){
        case 's':
         unsigned int i = 0;
          char* s = va_arg(ar,char *);
          while(*(s+i) != '\0'){
            *out = *(s+i);
            i++;
            out++;
            lenth++;
          }
          fmt++;
        break;

        case 'd':
          int posD = 0;
          char str[32];
          int number = va_arg(ar,int);
          num2str(str,number);
          while(str[posD] != '\0'){ 
            *out = str[posD];
            posD++;
            out++;
            lenth++;
          }
          fmt++;
        break;
        default:
          panic("Not implemented");
          assert(0);
        break;
      }
    }
  }
  *out = '\0';
  va_end(ar);
  
  return lenth;
  //panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
