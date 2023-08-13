#include "stdio.h"
#include "stdlib.h"
//#include <common.h>
#include "../../../include/Device/map.h"
#include "../../../include/Device/mmio.h"
#include "assert.h"
#include "../../../include/initMEM.h"


#define NR_MAP 16

void display_maps(IOMap* map);

static IOMap maps[NR_MAP] = {};
static int nr_map = 0;

static IOMap* fetch_mmio_map(uint64_t addr){
    //display_maps(maps);
    int mapid = find_mapid_by_addr(maps, nr_map ,addr);
   // printf("mmio addr is : %016lx\n",addr);
    return (mapid == -1 ? NULL : &maps[mapid]);
}

void report_mmio_overlap(){
    printf("error!!  mmio_overlap !!! \n");
    assert(0);
}

void add_mmio_map(const char *name, uint64_t addr, void *space,uint32_t len, io_callback_t callback){
    assert(nr_map < NR_MAP);
    uint64_t left  = addr;
    uint64_t right = addr + len -1;
    if(in_pmem(right) || in_pmem(left)){
        report_mmio_overlap();
    }
    for(int i = 0 ; i < nr_map ; i++){
        if(left <= maps[i].high && right >= maps[i].low){
            report_mmio_overlap();
        }
    }

    maps[nr_map] = (IOMap){.name = name, .low = addr, .high = addr + len -1,.space = space, .callback = callback};

    nr_map++;

}

uint64_t mmio_read(uint64_t addr, int len){

    return map_read(addr,len, fetch_mmio_map(addr));

}
void mmio_write(uint64_t addr, int len, uint64_t data){

    map_write(addr, len ,data ,fetch_mmio_map(addr));
}

void display_maps(IOMap* map){
    for(int i = 0; i < nr_map ;i++){
        printf("high is : %016lx , low is : %016lx \n",map[i].high , map[i].low);
    }
}