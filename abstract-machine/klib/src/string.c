#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
#include <stdlib.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  if(s == NULL){
    assert(0);//s doesn`t exist
  }
  unsigned long size = 0;
  while(true){
      if(s[size] == '\0'){
        break;
      }
      size++;
  }

  return size;
  //panic("Not implemented");
}

//这一篇文章写得不错   https://www.cnblogs.com/linuxAndMcu/p/11262784.html
char *strcpy(char *dst, const char *src) {
  if(dst == NULL && src == NULL){
    assert(0);
  }

  unsigned long i = 0;
  while(src[i] != '\0'){
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return dst;
  //panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  unsigned long i = 0;
  while(i < n){
    dst[i] = src[i];
    i++;
  }
  return dst;
  //panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  if(dst == NULL && src == NULL){
      assert(0);
  }

  unsigned long i = strlen(dst);
  unsigned long n = strlen(src);
  unsigned long iterate = 0;
  while(iterate <= n){
    dst[i+iterate] = src[iterate];
    iterate++;
  }
  return dst;
  //panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  int ret = 0;
  if(!(ret = *s1 - *s2) && *s1 != '\0'){
    s1++;
    s2++;
  }

  return ret;
  //panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  int ret = 0;
  unsigned long i = 0;
  if(!(ret = *s1 - *s2) && *s1 != '\0' && i < n){
    s1++;
    s2++;
    i++;
  }
  return ret;
  //panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  unsigned long i = 0;
  while(i < n){
    *(int *)(s+i) = c;
    i++;
  }

  return s;
  //panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  unsigned long i;
  if(src < dst && (char*)(src + n) >= (char*)dst){
    i = n;
    while(i){
      *(char*)(dst + (i-1)) = *(char*)(src+(i-1));
      i--;
    }
  }
  else {
    i = 0;
    while(i < n){
      *(char*)(dst + i) = *(char*)(src+i);
      i++;
    }
  }

  return dst;
  //panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  unsigned int i = 0;
  while(i < n){
    *(char*)(out+i) = *(char*)(in+i);
    i++;
  }

  return out;
  //panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
unsigned long i = 0;
int ret = 0;

  while(!(ret = *(char*)s1 - *(char*)s2) && i < n){
    i++;
  }

  return ret;
  //panic("Not implemented");
}

#endif
