#include "stdio.h"
#include <stdlib.h>
#include <cpu/decode.h>
#include <common.h>
#include <malloc.h>
#include <utils.h>

static unsigned int beginPointer;
static unsigned int endPointer;

typedef struct{
    Decode instr;
}iringbuf;

iringbuf *ringBuf;

void InitBuf(){
    if(!ringBuf){
     ringBuf = (iringbuf *)malloc(sizeof(iringbuf) * 17);
     beginPointer = 0;
     endPointer = 0;
    }
}

bool isRingBufFull(){
    if((endPointer + 1)%17 == beginPointer){
        return 1; // the iringbuf is full
    }
    else{
        return 0; // not full
    }
}

void addBuf(Decode *instruction){
    if(!ringBuf){
        printf("there is no iringbuf!!\n");
        return;
    }
    if(isRingBufFull()){
        beginPointer = (beginPointer + 1)%17;
        ringBuf[endPointer].instr = *instruction;
        endPointer = (endPointer + 1)%17;
    }
    else{
        ringBuf[endPointer].instr = *instruction;
        endPointer = (endPointer + 1)%17;
    }
}

void outputRingBuf(){
    unsigned int i = 0;

    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    char buf[128];
    char *p;

    while((beginPointer + i)%17 != endPointer){
        p = buf;
        p += sprintf(buf,"%s" FMT_WORD ": 0X%08X   ",((beginPointer + i + 1)%17 != endPointer) ? "     ":" --> ",
        ringBuf[(beginPointer + i)%17].instr.pc,ringBuf[(beginPointer + i)%17].instr.isa.inst.val);
        disassemble(p, buf+sizeof(buf)-p,ringBuf[(beginPointer + i)%17].instr.pc + 0x0000000080000000, (uint8_t *)&ringBuf[(beginPointer + i)%17].instr.isa.inst.val , 4);
        puts(buf);
        i++;
    }
}
