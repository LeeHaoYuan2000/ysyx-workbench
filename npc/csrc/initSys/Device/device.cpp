#include "stdio.h"
#include "stdlib.h"
#include "../../include/globalDefine.h"
#include "../../include/macro.h"
#include "../../include/Device/map.h"
#include "../../include/Device/serial.h"
#include "../../include/Device/timer.h"
#include "../../include/Device/keyboard.h"
#include "../../include/Device/vga.h"
#include "SDL2/SDL.h"

#define TIMER_HZ 60

void device_update(){
    static uint64_t last = 0;
    uint64_t now = get_time();

    if(now - last < 1000000 / TIMER_HZ){
        return ;
    }

    last = now;

    IFDEF(CONFIG_HAS_VGA,vga_update_screen());

    SDL_Event event;

    while(SDL_PollEvent(&event)){
        switch(event.type){
            case SDL_QUIT:
            break;
            case SDL_KEYDOWN:
            case SDL_KEYUP:{
                uint8_t k = event.key.keysym.scancode;
                bool is_keydown = (event.key.type == SDL_KEYDOWN);
                send_key(k, is_keydown);
                break;
            }
            default:break;
        }
    }
}


void sdl_clear_event_queue() {
#ifndef CONFIG_TARGET_AM
  SDL_Event event;
  while (SDL_PollEvent(&event));
#endif
}


void init_device(){

    init_map();
    
    IFDEF(CONFIG_HAS_SERIAL, init_serial());
    IFDEF(CONFIG_HAS_TIMER,init_timer());
    IFDEF(CONFIG_HAS_VGA,init_vga());
    IFDEF(CONFIG_HAS_KEYBOARD,init_i8042());

}