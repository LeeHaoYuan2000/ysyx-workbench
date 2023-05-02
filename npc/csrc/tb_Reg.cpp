#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include "..//obj_dir//VRegPC.h"
#include <verilated_vcd_c.h>

int main (int argc,char **,char **env){

    VerilatedContext *context = new VerilatedContext;
    VRegPC *dut = new VRegPC(context);
    VerilatedVcdC *vcd = new VerilatedVcdC;

    context->traceEverOn(true);
    dut->trace(vcd,0);

    vcd->open("waveReg.vcd");

    dut->clk = 0;
    dut->rst = 1;
    context->timeInc(3);
    dut->rst = 0;

    dut ->data = 66;
    int clock = 0;
    int val = 66;

    dut->wen = 1;

    int i = 20;
    while(i){
        dut->clk ^= 1;
        if(i>2){
        dut->eval();
        val += 4;
        dut->data = val;
        dut->eval();
        vcd->dump(context->time());
        context ->timeInc(5);
        }
        else {
    dut->rst = 1;
    dut->eval();
    vcd->dump(context->time());
    context->timeInc(5);
        }

        i--;
    }



    delete dut;
    vcd->close();
    delete context;

    return 0;
}

