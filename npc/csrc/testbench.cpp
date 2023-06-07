#include <verilated.h>
#include <stdio.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include "..//obj_dir//Vtop.h"
#include </home/ubuntu/ysyx-workbench/npc/csrc/include/CLK.h>

 int main (int argc,char **,char **env){
	CLK *clock = new CLK;
	Vtop *top;
	clock->InitTop(top);
	clock->setWaveForm();
	clock->rstOn();

	int i = 20;
	while(i--){
		clock->ClkFlipOnce();
	}

	clock->CloseWaveForm();

	return 1;
 }

