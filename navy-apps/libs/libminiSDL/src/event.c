#include <NDL.h>
#include <SDL.h>
#include "../include/sdl-event.h"

#define keyname(k) #k,

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

uint8_t keystate[256];

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {

  char buf[2];

  if(NDL_PollEvent(buf,sizeof(buf))){
      ev->key.keysym.sym  = buf[1]; //to get the keycode
      ev->type = buf[0];//get the event type is key_down or key_up
      keystate[buf[1]] = ev->type == SDL_KEYDOWN ? 1 : 0;
      return 1;
    }
    else{
      ev->key.keysym.sym  = 0;
      ev->type = SDL_KEYUP;
      return 0;
    }

}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[2];

  while(1){
    if(NDL_PollEvent(buf,sizeof(buf))){
      event->key.keysym.sym  = buf[1]; //to get the keycode
      event->type = buf[0];//get the event type is key_down or key_up
      keystate[buf[1]] = event->type == SDL_KEYDOWN ? 1 : 0;
      break;
    }
    else{
      event->key.keysym.sym  = 0;
      event->type = SDL_KEYUP;
    }
  }

  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {

  if(numkeys != NULL){
    *numkeys = 256;
  }
  return keystate;
}
