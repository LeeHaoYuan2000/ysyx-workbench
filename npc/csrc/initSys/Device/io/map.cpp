#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"
#include "assert.h"

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

void init_map(){
    io_space = (u_int8_t *)malloc(IO_SPACE_MAX);
    assert(io_space);
    p_space = io_space;
}