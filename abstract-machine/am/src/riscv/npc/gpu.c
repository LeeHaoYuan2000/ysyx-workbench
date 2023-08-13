#include <am.h>
#include "include/npc.h"
#include "../riscv.h"
#include "../../../../klib/include/klib.h"
#include "../../../../klib/include/klib-macros.h"

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {

  int i;
  int w = inl(VGACTL_ADDR) >> 16;  // TODO: get the correct width
  int h = inl(VGACTL_ADDR) & 0x0000ffff;  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);

  printf("am gpu init \n");
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 400, .height = 300,
    .vmemsz = sizeof(uint32_t)*300*400
  };

  printf("am gpu config \n");
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {

  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }

uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
uint32_t* pixels = (uint32_t*)(ctl->pixels);
  
 int pix_y  = ctl->y;
 int pix_x  = ctl->x;
 int pix_h  = ctl->h;
 int pix_w  = ctl->w;

for(int i = 0; i < pix_h; i++){
 for(int j = 0; j < pix_w; j++){
   fb[(pix_y+i)*400 + pix_x+j] = *(pixels + i * pix_w + j);
 }
}

  printf("am gpu fbdraw\n");

}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}