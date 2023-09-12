#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
#include <stdlib.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  // if(s == NULL){
  //   assert(0);//s doesn`t exist
  // }
  // unsigned long size = 0;
  // while(true){
  //     if(s[size] == '\0'){
  //       break;
  //     }
  //     size++;
  // }

	//assert(str != NULL); //检查指针的有效性  
	
    size_t length = 0 ;
    while (*s++ )
        ++ length;
    return  length;

  // return size;

  
  //panic("Not implemented");
}

//这一篇文章写得不错   https://www.cnblogs.com/linuxAndMcu/p/11262784.html
char *strcpy(char *dst, const char *src) {
  // if(dst == NULL && src == NULL){
  //   assert(0);
  // }

  // unsigned long i = 0;
  // while(src[i] != '\0'){
  //   dst[i] = src[i];
  //   i++;
  // }
  // dst[i] = '\0';
  // return dst;

    assert(dst != NULL && src != NULL); //检查指针的有效性  

    char *ret = dst;  //记下dst的初始地址防止找不到

    while ((*dst++=*src++)!='\0'); //将src中所有字符(包括'\0')一个字符一个字符的拷贝到dst(包括'\0')。在赋值完'\0'后，循环停止

    return ret;

  //panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  // unsigned long i = 0;
  // while(i < n){
  //   dst[i] = src[i];
  //   i++;
  // }
  // return dst;

      char *start = dst;

    while (n && (*dst++ = *src++)) /* copy string */   

        n--;

    if (n) /* pad out with zeroes */

    while (--n)

        *dst++ ='\0';

    return(start);

  //panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  // if(dst == NULL && src == NULL){
  //     assert(0);
  // }

  // unsigned long i = strlen(dst);
  // unsigned long n = strlen(src);
  // unsigned long iterate = 0;
  // while(iterate <= n){
  //   dst[i+iterate] = src[iterate];
  //   iterate++;
  // }
  // return dst;

  		assert(dst != NULL && src != NULL); //检查指针的有效性  

        char *tmp = dst;//记下dest的初始地址防止找不到
 
        while (*dst)
                dst++; //找到dest的末尾
        while ((*dst++ = *src++) != '\0'); //将src附加到dest后面
 
        return tmp;

  //panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  int ret = 0;
  while(!(ret = *s1 - *s2) && *s1 != '\0'){
    s1++;
    s2++;
  }

  return ret;

  //panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  // int ret = 0;
  // unsigned long i = 0;
  // if(!(ret = *s1 - *s2) && *s1 != '\0' && i < n){
  //   s1++;
  //   s2++;
  //   i++;
  // }
  // return ret;

unsigned char c1 = '\0';
        unsigned char c2 = '\0';

        if (n >= 4)
        {
                size_t n4 = n >> 2;
                do
                {
                        c1 = (unsigned char) *s1++;
                        c2 = (unsigned char) *s2++;
                        if (c1 == '\0' || c1 != c2)
                                return c1 - c2;
                        c1 = (unsigned char) *s1++;
                        c2 = (unsigned char) *s2++;
                        if (c1 == '\0' || c1 != c2)
                                return c1 - c2;
                        c1 = (unsigned char) *s1++;
                        c2 = (unsigned char) *s2++;
                        if (c1 == '\0' || c1 != c2)
                                return c1 - c2;
                        c1 = (unsigned char) *s1++;
                        c2 = (unsigned char) *s2++;
                        if (c1 == '\0' || c1 != c2)
                                return c1 - c2;
                } while (--n4);
                n &= 3;
        }

        while (n > 0)
        {
                c1 = (unsigned char) *s1++;
                c2 = (unsigned char) *s2++;
                if (c1 == '\0' || c1 != c2)
                        return c1 - c2;
                --n;
        }

        return c1 - c2;
  //panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {

const unsigned char uc = c;
     unsigned char *su;
     for(su = s;0 < n;++su,--n)
         *su = uc;
     return s;
     
}

void *memmove(void *dst, const void *src, size_t n) {
  // unsigned long i;
  // if(src < dst && (char*)(src + n) >= (char*)dst){
  //   i = n;
  //   while(i){
  //     *(char*)(dst + (i-1)) = *(char*)(src+(i-1));
  //     i--;
  //   }
  // }
  // else {
  //   i = 0;
  //   while(i < n){
  //     *(char*)(dst + i) = *(char*)(src+i);
  //     i++;
  //   }
  // }

  // return dst;

	char *tmp;
	const char *s;

	if (dst <= src) {
		tmp = dst;
		s = src;
		while (n--)
			*tmp++ = *s++;
	} else {
		tmp = dst;
		tmp += n;
		s = src;
		s += n;
		while (n--)
			*--tmp = *--s;
	}
	return dst;

  //panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  // unsigned int i = 0;
  // while(i < n){
  //   *(char*)(out+i) = *(char*)(in+i);
  //   i++;
  // }

  // return out;

  char *tmp = out;
	const char *s = in;

	while (n--)
		*tmp++ = *s++;
	return out;



  //panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
// unsigned long i = 0;
// int ret = 0;

//   while(!(ret = *(char*)s1 - *(char*)s2) && i < n){
//     i++;
//   }

//   return ret;

  	const unsigned char *su1, *su2;
	int res = 0;

	for (su1 = s1, su2 = s2; 0 < n; su1++, su2++, n--)
		if ((res = *su1 - *su2) != 0)
			break;
	return res;

  //panic("Not implemented");
}

#endif
