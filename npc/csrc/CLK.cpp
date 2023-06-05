#include <stdio.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <npc/csrc/include/CLK.h>

void CLK::setWaveForm(){
    context = new VerilatedContext;
    wave  = new VerilatedVcdC;
    top = new Vtop(context);

    context->traceEverOn(true);
    top->trace(wave,5);
    wave->open("top.vcd");
    top->clk = 0;
    top->rst = 1;
    top->eval();
    wave->dump(context->time());
}

void CLK::rstOn(){
    int i = 5;
    while(i--){
        context->timeInc(1);
        top->clk = ~top->clk;
        top->rst = 1;
        top->eval();
        wave->dump(context->time);
    }
    top->rst = 0;
}
void CLK::ClkExeOnece(){
    context->timeInc(1);
    top->clk = ~top->clk;
    top->eval();
    wave->dump(context->time);

}
void CLK::CloseWaveForm(){
    wave->close();
    delete top;
    delete wave;
    delete context;
}