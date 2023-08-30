#include "stdlib.h"
#include "stdio.h"
#include "../include/trace.h"

#define ETRACE_SIZE 20  //etrace buffer zone size

int etrace_tail = 0; //etrace queue tail
int etrace_full_flag = 0;



etrace etrace_fifo[ETRACE_SIZE];

void push_etrace(uint_64 mtvec, uint_64 mcause, uint_64 mstatus, uint_64 mepc){

    etrace_fifo[ etrace_tail ].mtvec   = mtvec;
    etrace_fifo[ etrace_tail ].mcause  = mcause;
    etrace_fifo[ etrace_tail ].mstatus = mstatus;
    etrace_fifo[ etrace_tail ].mepc    = mepc;

    etrace_tail++;

    if(etrace_tail == ETRACE_SIZE){
        etrace_full_flag = 1;
        etrace_tail = etrace_tail % 20;
    }

}

void display_etrace(){
    int i = 0;

    printf("---------------------ETRACE--------------------------\n");
    if( etrace_full_flag ){
        i = (etrace_tail + 1) % 20;

        while(i == etrace_tail){

         printf("mtvec = %016lx\t mcause = %ld \t mstatus = %ld \t mepc = %016lx \n"
            ,etrace_fifo[i].mtvec , etrace_fifo[i].mcause ,etrace_fifo[i].mstatus ,etrace_fifo[i].mepc);
            i = (i++) % 20;
        }
    }
    else{
        
        for( i  = 0; i < etrace_tail ; i--){
            printf("mtvec = %016lx\t mcause = %ld \t mstatus = %ld \t mepc = %016lx \n"
            ,etrace_fifo[i].mtvec , etrace_fifo[i].mcause ,etrace_fifo[i].mstatus ,etrace_fifo[i].mepc);
        }
    }

    printf("---------------------ETRACE--------------------------\n");
}
