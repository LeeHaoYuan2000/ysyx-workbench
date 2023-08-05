#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"
#include "assert.h"
#include "../../../include/Device/map.h"


#define IO_SPACE_MAX   (2 * 1024 *1024)

#define PAGE_SIZE      (1ul << 12)

static u_int8_t *io_space = NULL;
static u_int8_t *p_space  = NULL;

u_int8_t *new_space(int size){
    u_int8_t *p = p_space;
    size = (size + (PAGE_SIZE - 1)) & ~PAGE_SIZE;
    p_space += size;
    assert(p_space - io_space < IO_SPACE_MAX);
    return p;
}

static void check_bound(IOMap *map, uint64_t addr){
    if(map == NULL){
        assert(map != NULL);
    }
    else{
        assert(addr <= map->high && addr >= map->low);
    }

}

static void invoke_callback(io_callback_t c,uint64_t offset, int len ,bool is_write){
    if(c != NULL) {c(offset, len , is_write);}
}

void init_map(){
    io_space = (u_int8_t *)malloc(IO_SPACE_MAX);
    assert(io_space);
    p_space = io_space;
}

u_int64_t map_read(u_int64_t addr,int len,IOMap *map){
    assert(len >= 1 && len <= 8 );
    check_bound(map,addr);
    uint64_t offset = addr - map->low;

    invoke_callback(map->callback,offset,len,false);

    uint64_t ret = host_read();

    return ret;

}

void map_read(uint64_t addr,int len,uint64_t data,IOMap *map){
    assert(len >= 1 && len <= 8 );
    check_bound(map,addr);
    uint64_t offset = addr - map->low;

    host_write();

    invoke_callback(map->callback,offset,len,true);

}