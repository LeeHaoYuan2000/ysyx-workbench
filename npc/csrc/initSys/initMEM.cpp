#include "verilated_dpi.h"
#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <..\include\iniMEM.h>

static uint8_t* Memory;

//use the little endian to store the date
extern "C" void pmem_read(uint64_t raddr,uint64_t* rdata){
    uint64_t MEM_addr = raddr & ~0x7ull;
    uint16_t Data_buf = 0;
    for(int i = 0;i < 8;i++){
        Data_buf = Data_buf << 8;
        Data_buf = Data_buf + Memory[MEM_addr + i];
    }

    *rdata = Data_buf;
}


extern "C" void pmem_write(uint64_t waddr,uint64_t wdata, uint8_t wmask){
    uint64_t MEM_addr = waddr & ~0x7ull;
    uint8_t Data_buf = 0;
    for(int i = 0; i < wmask; i++){
        Data_buf = wdata & 0x00000000000000ff;
        wdata = wdata >> 8;
        Memory[MEM_addr + i] = Data_buf;
    }

}

void initMEM(){
    Memory = (uint8_t*)malloc(MEM_Size);
}


