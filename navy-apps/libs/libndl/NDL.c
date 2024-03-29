#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include "../libos/src/syscall.h"
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

static uint32_t NDL_TimeStart = 0;
struct timeval *tv;

//record the canva width and height
int canva_width  = 0;
int canva_height = 0;

#define FD_FB 3
#define FD_EVENT 4 
#define FD_DISPINFO 5

uint32_t NDL_GetTicks() {

  _gettimeofday(tv,NULL);

  return (tv->tv_sec*1000) + ((uint32_t)tv->tv_usec / (uint32_t)1000) - NDL_TimeStart;
  //printf("sec is %ld ,usec is %ld \n",tv->tv_sec ,tv->tv_usec);
  //return (tv->tv_sec*1000) - NDL_TimeStart;
}

int NDL_PollEvent(char *buf, int len) {
  //memset(buf,0,len);
  if(_read(FD_EVENT, buf, len)){
    return 1;
  }
  return 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  unsigned int display_info[2];//dispalyinfo[0] -> width , dispalyinfo[1] -> height

  _read(FD_DISPINFO,(void *)display_info, sizeof(display_info));

  if(*w == 0 || *h == 0){
    *w = display_info[0];
    *h = display_info[1];
  }

  if(*w > display_info[0] || *h > display_info[1]){
      printf("*w is %d  ,*h is %d \n",*w ,*h);
      printf("display_info[0]:%d  display_info[1]:%d \n",display_info[0],display_info[1]);
      assert(0);
  }

  canva_width  = *w;
  canva_height = *h;

}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  uint32_t len = 0;

if(w != 0 && h != 0){
  len = (w << 16) | h; //store the canava size
}
else{
  len = (canva_width << 16 ) | canva_height;
}
  _write(FD_FB,pixels,len);
  
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }

 tv = (struct timeval*)malloc(sizeof(struct timeval));

  _gettimeofday(tv,NULL);

  NDL_TimeStart = (tv->tv_sec*1000); // the unit of NDL_GetTicks is ms

  return 0;
}

void NDL_Quit() {
}
