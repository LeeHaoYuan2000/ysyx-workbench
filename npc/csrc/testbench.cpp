 #include <stdio.h>
 #include <stdlib.h>
 #include <verilated.h>
 #include <verilated_vcd_c.h>
 #include <..\obj_dir\Vtop.h>

 int main(int argc, char** argv, char** env){
	//-------------init----------------//
	VerilatedContext* contextP = new Verilated; 
	VerilatedVcdC* wave = new VerilatedVcdC;
	Vtop* top = new Vtop;
	contextP->traceEverOn(true);
	top->trace(wave,5);
	wave->open("top.vcd");
	top->clk = 0;
	top->rst = 1;
	int i = 20;
	//-----------------------------------
	contextp->timeInc(5);
	while(i--){
		top->clk = ~top->clk;
		top-eval();
		wave->dump(contextp->time());
	}

	top->final();
	wave->close();
	delete wave;
	delete top;
	delete contextp;
	return 0;
 }

