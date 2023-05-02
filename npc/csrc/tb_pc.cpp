#include <stdio.h>
#include <stdlib.h>

#include <..//obj_dir//Vpc.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

int main (){
    VerilatedContext *context = new VerilatedContext;
    Vpc *dut = new Vpc(context);
    VerilatedVcdC *wave = new VerilatedVcdC;

    context->traceEverOn(true);
    dut->trace(wave,5);
    wave->open("wavePC.vcd");

    dut->clk = 0;
    dut->rst = 1;
    dut->wen = 0;


    int i = 50;
    while(i){
        dut->clk ^= 1;
        if(i<10){
        dut->wen = 1;
        dut->rst = 1;
        }
        else if(i<30)
        {
            dut->wen = 1;
            dut->rst = 0;
        }
        else if(i<40){
            dut->wen = 0;
            dut->rst = 0;
        }
        else {
            dut->wen = 0;
            dut->rst = 1;
        }

        dut->eval();
        wave->dump(context->time());
        context->timeInc(5);
        i --;
    }

    wave->close();
    delete dut;
    delete context;
    return 0;
}