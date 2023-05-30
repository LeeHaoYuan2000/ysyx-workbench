#include <verilated.h>
#include <stdio.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include "..//obj_dir//Vtop.h"

 int main (int argc,char **,char **env){
	//-------------init----------------//
	VerilatedContext* contextP = new VerilatedContext;
	VerilatedVcdC* wave = new VerilatedVcdC;
	Vtop* top = new Vtop(contextP);
	contextP->traceEverOn(true);
	top->trace(wave,5);
	wave->open("top.vcd");
	top->clk = 0;
	top->rst = 1;
	int i = 20;
	
	//-----------------------------------
	contextP->timeInc(1);
	top->clk = 1;
	top->eval();
	wave->dump(contextP->time());
	contextP->timeInc(1);
	top->clk = 0;
	top->rst = 1;
	top->eval();
	wave->dump(contextP->time());
	contextP->timeInc(1);
	top->clk = 1;
	top->rst = 1;
	top->eval();
	wave->dump(contextP->time());
	contextP->timeInc(1);
	top->clk = 1;
	top->rst = 0;
	top->eval();
	wave->dump(contextP->time());
	while(i--){
		top->clk ^= 1;
		contextP->timeInc(1);
		top->eval();
		wave->dump(contextP->time());
	}

	//top->final();
	wave->close();
	delete wave;
	delete top;
	delete contextP;

	return 1;
 }

