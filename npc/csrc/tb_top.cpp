#include "stdio.h"
#include "stdlib.h"
#include <..//obj_dir//Vtop.h>
#include <verilated.h>
#include "verilated_vcd_c.h"

statcic unsigned int Program[] = {
    0x00840413, //addi	s0,s0,8
    0x00840413, //addi	s0,s0,8
    0x00840413, //addi	s0,s0,8
    0x00840413, //addi	s0,s0,8
    0x00840413 //addi	s0,s0,8
};

unsigned int  fetchInstr(unsigned long long address);

int main(void){
    Verilated *context = new Verilated;
    Vtop *top = new Vtop(context);
    VerilatedVcdC *wave = new VerilatedVcdC;

    context ->traceEverOn(true);
    top->trace(wave,5);
    wave->open("wavetop.vcd");

    int i = 10;

    top->clk = 1;
    top->rst = 1;
    context->timeInc(20);
    top->rst = 0;
    while(i){
        top->clk ^= 1;
        if(top->clk == 1){
            top->instr = fetchInstr(top->fetchAddr);
        }

        top->eval();
        wave->dump(context->time());
        context->timeInc(10);
        i--;
    }

    delete top;
    wave->close();
    delete context;

    return 0;
}

unsigned int  fetchInstr(unsigned long long address){
    int i = (address - 0x0000000080000000) / 4;
    return Program[i];
}