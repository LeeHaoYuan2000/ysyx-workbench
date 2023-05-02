#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//#include "..\obj\VaddPC.h"
#include "..//obj_dir//VaddPC.h"
#include <verilated.h>
#include <verilated_vcd_c.h>

int main (int argc,char **,char **env){
    VerilatedContext *context = new VerilatedContext;

    VaddPC* addPC = new VaddPC(context);

    VerilatedVcdC* wave = new VerilatedVcdC;

    context->traceEverOn(true);
    addPC->trace(wave,5);
    wave->open("wave.vcs");
    addPC->PC = 0;
    addPC->adder = 4;

int i = 10;
    while(i){
        
        addPC->PC = addPC->out;
        addPC->eval();
        wave->dump(context->time());
        context->timeInc(3);

        i--;
    }

    delete addPC;
    wave->close();
    delete context;
    return 0;
}