#include <NDL.h>
#include <SDL.h>
#include "../include/sdl-event.h"

#define keyname(k) #k,
#define SDL_NUM_SCANCODES 256
static uint8_t keystate[SDL_NUM_SCANCODES]={};

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {

  char buf[2];

  if(NDL_PollEvent(buf,sizeof(buf))){
      ev->key.keysym.sym  = buf[1]; //to get the keycode
      ev->type = buf[0];//get the event type is key_down or key_up
      keystate[buf[1]] = 1;
      return 1;
    }
    else{
      ev->key.keysym.sym  = 0;
      ev->type = SDL_KEYUP;
      //reset the keystate into unpressed
      for(int i = 0; i < SDL_NUM_SCANCODES; i++){
        keystate[i] = 0;
      }
      return 0;
    }

}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[2];

  while(1){
    if(NDL_PollEvent(buf,sizeof(buf))){
      event->key.keysym.sym  = buf[1]; //to get the keycode
      event->type = buf[0];//get the event type is key_down or key_up
      keystate[buf[1]] = 1;
      break;
    }
    else{
      event->key.keysym.sym  = 0;
      event->type = SDL_KEYUP;
            //reset the keystate into unpressed
      for(int i = 0; i < SDL_NUM_SCANCODES; i++){
        keystate[i] = 0;
      }
    }
  }

  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {

  if(numkeys != (int *)0){
    *numkeys = SDL_NUM_SCANCODES;
  }
  return keystate;
}
