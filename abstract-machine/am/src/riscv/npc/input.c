#include <am.h>
#include "../riscv.h"
#include "include/npc.h"

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int key = inl(KBD_ADDR);
  kbd->keydown = key & KEYDOWN_MASK;
  kbd->keycode = key & ~KEYDOWN_MASK;
}
