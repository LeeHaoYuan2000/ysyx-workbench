#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void num2str(char str[32],int num){
  char strRv[32];
  if(num == 0){
    str[0] = '0';
    str[1] = '\0';
  }
  else{
    int i = 0;
    int pos = 0;
    while(num != 0){
      i = num % 10;
      num = num / 10;
      strRv[pos] = 48 + i;
      pos++;
    }

    str[pos] = '\0';
    i = pos;

    while(pos){
      str[i-pos] = strRv[pos - 1];
      pos--;
    }
  }
}

int printf(const char *fmt, ...) {
  panic("Not implemented");
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
          num2str(str,va_arg(ar,int));
          while(str[posD] != '\0'){
            *out = *str;
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
