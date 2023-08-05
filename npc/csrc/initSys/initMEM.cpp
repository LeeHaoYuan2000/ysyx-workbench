#include "verilated_dpi.h"
#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include "../include/initMEM.h"
#include "assert.h"
#include "../include/sim_init.h"
#include "../include/globalDefine.h"
#include "../include/macro.h"
#include "../include/Device/mmio.h"

#define MEM_Start 0x80000000

uint8_t Memory[4096000];

uint8_t* guest_to_host(uint64_t addr) {return  Memory + addr - MEM_Start ;}

inline uint64_t host_read(uint64_t *addr, int len){
    switch (len)
    {
    case 1: return *(uint8_t *) addr; 
    case 2: return *(uint16_t *)addr ;
    case 4: return *(uint32_t *)addr ;
    case 8: return *(uint64_t *)addr ;

    default:
        return *(uint64_t *) addr;
    }
}

inline void host_write(uint64_t *addr,int len, uint64_t data){
    switch (expression)
    {
    case 1: *(uint8_t *) addr = data; break;
    case 2: *(uint16_t *)addr = data; break;
    case 4: *(uint32_t *)addr = data; break;
    case 8: *(uint64_t *)addr = data; break;
    default:
        break;
    }
}

inline bool in_pmem(uint64_t addr){ //判断地址是否有效
    return addr - MEM_Start < MEM_Start;
}

void out_of_mem(uint64_t addr){
     printf("the memory is out of boundary,please check\n");
     printf("AT ------> %016lx \n",addr);
    sim_exit();
    assert(0); 
}


//use the little endian to store the date
extern "C" void pmem_read(uint64_t raddr,uint64_t* rdata,uint64_t len){
    if(in_pmem(raddr)){
        *rdata = host_read(guest_to_host(raddr),len);
    }

    *rdata =  mmio_read(raddr, len);
}


extern "C" void pmem_write(uint64_t waddr,uint64_t wdata, uint8_t wmask){
    if(in_pmem(waddr)){
        host_write(guest_to_host(waddr, wmask , wdata));
    }
    mmio_write(waddr , wmask , wdata);
}

//读取指令
uint32_t pmem_instr(uint64_t raddr){
    return  *(uint32_t*)(Memory + raddr - 0x80000000);
}
// this function is used to read the instruction
uint32_t MEMRead_instr(uint64_t raddr){
    if(in_pmem(raddr)){
        return pmem_instr(raddr);
    }

    out_of_mem(raddr);
}

uint8_t* getMEMAddr(){
    return Memory;
} 

void MEM_init(){
    printf("Memory Size: %ld\n",sizeof(Memory));
}


