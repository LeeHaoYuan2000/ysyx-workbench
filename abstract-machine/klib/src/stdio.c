#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void num2str(char *str,int num){
  int i = 0;
  char strbuf[32];
  if(num == 0){
    str[0] = 48;
    str[1] = '\0';
  }
  else if(num > 0){
    int cnt = 0;
    int bit = 0;
    while(num != 0){
      bit = num % 10;
      num = num / 10;
      strbuf[cnt] = 48 + bit;
      cnt++; 
    }
    
    while(cnt != 0){
      str[i] = strbuf[cnt-1];
      cnt--;
      i++;
    }
  }
  else{
    num = -num;
    int cnt = 0;
    int bit = 0;

    while(num != 0){
      bit = num % 10;
      num = num /10;
      strbuf[cnt] = 48 + bit;
      cnt++;
    }

    while(cnt != 0){
      if(i == 0){
        str[i] = '-';
      }
      else{
        str[i] = strbuf[cnt-1];
        cnt--;
      }
      i++;
    }
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
