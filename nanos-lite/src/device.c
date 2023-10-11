#include <common.h>
#include "sys/time.h"
#include "stdbool.h"
#include "../include/device.h"

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

  // typedef struct device
  // {
  //   bool keydown;
  //   int keycode;
  // }AM_INPUT_KEYBRD_T;

  #define DOWN 1
  

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

//output through serial prot
size_t serial_write(const void *buf, size_t offset, size_t len) {
  int i = 0;
  while(i < len){
    putch( *((char*)buf + i) );
    i++;
  }
  return i;
}

size_t events_read(void *buf, size_t offset, size_t len) {

  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);

//this is fot the event test,but not fit for the navy app any more
  // if(ev.keycode != 0){
  //     memset(buf,0,len);//reset the mem
  //   if(ev.keydown == DOWN){
  //       sprintf(buf,"kd %s",keyname[ev.keycode]);
  //   }
  //   else {
  //       sprintf(buf,"ku %s",keyname[ev.keycode]);
  //   }
  //   return 1;
  // }

    if(ev.keycode != 0){
      memset(buf,0,len);//reset the mem
    if(ev.keydown == DOWN){
       // sprintf(buf,"kd %s",keyname[ev.keycode]);
       *((char *)buf) = 0;
       *((char *)buf + 1) = keyname[ev.keycode];
    }
    else {
       // sprintf(buf,"ku %s",keyname[ev.keycode]);
       *((char *)buf) = 1;
       *((char *)buf + 1) = keyname[ev.keycode];
    }
    return 1;
  }

  return 0;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {

  unsigned int dispaly_width   =  io_read(AM_GPU_CONFIG).width;
  unsigned int display_height  =  io_read(AM_GPU_CONFIG).height;

  printf("diaplay_width:%d   display_height:%d  \n",dispaly_width,display_height);

  //write dispaly width and height 
  *(unsigned int*)buf       = dispaly_width;
  *((unsigned int*)buf + 1) = display_height;

  return 1;

}

size_t fb_write(const void *buf, size_t offset, size_t len) {

  __uint32_t h = (__uint32_t)len & 0x0000ffff;
  __uint32_t w = (__uint32_t)len >> 16;

  __uint32_t* pixel = (__uint32_t*)buf;

  io_write(AM_GPU_FBDRAW, 0, 0, pixel, w, h, false);

  io_write(AM_GPU_FBDRAW, 0, 0, (void*)0, 0, 0, true);

  return 1;
}

int gettime(struct timeval *tv, struct timezone *tz){

  /* 
      can`t handle the time zone now 
   */

    unsigned long int time = io_read(AM_TIMER_UPTIME).us;

    tv->tv_sec  = time / 1000000;
    tv->tv_usec = time % 1000000;

    return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
