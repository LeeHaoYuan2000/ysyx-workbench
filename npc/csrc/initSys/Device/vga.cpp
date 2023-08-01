#include "stdlib.h"
#include "stdio.h"
#include "../../include/macro.h"
#include "../../include/globalDefine.h"
#include "../../include/Device/map.h"

#include "SDL2/SDL.h"

#define SCREEN_W 400 
#define SCREEN_H 300

static void *vmem = NULL;// video mem
static u_int32_t *vgactl_port_base = NULL;

static uint32_t screen_width(){
    return SCREEN_W;
}

static uint32_t screen_height(){
    return SCREEN_H;
}

static uint32_t screen_size(){
    return screen_width() * screen_height() * sizeof(uint32_t);
}

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture  = NULL;

static void init_screen(){
    SDL_Window *window = NULL;
    char title[128];

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(
        SCREEN_W * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
        SCREEN_H * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
        0, &window, &renderer
    );

    SDL_SetWindowTitle(window, title);

    texture = SDL_CreateTexture(renderer,SDL_PIXELFORMAT_ARGB8888,
    SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen(){
        SDL_UpdateTexture(texture,NULL,vmem,SCREEN_W * sizeof(uint32_t));
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer,texture,NULL,NULL);
        SDL_RenderPresent(renderer);
}


void vga_update_screen(){

    if(vgactl_port_base[1] == 1){
        update_screen();
        vgactl_port_base[1] = 0;
    }

}



void init_vga(){
    vgactl_port_base = (u_int32_t *)new_space(8);
    vgactl_port_base[0] = (screen_width() << 16) | screen_height();

    add_mmio_map("vgactl",CONFIG_VGA_CTL_MMIO, vgactl_port_base , 8 , NULL);
    
    vmem = new_space(screen_size()); 
    add_mmio_map("vmem",CONFIG_FB_ADDR,vmem,screen_size(),NULL);
    
    init_screen();

    memset(vmem, 0, screen_size());
}





