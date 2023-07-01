#include <verilated.h>
#include <stdio.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include "..//obj_dir//Vtop.h"
#include "./include/CLK.h"
#include "./include/initSystem.h"

 int main (int argc,char *argv[]){

	initSystem(argc,argv);//initialise the System

	printf("init 完成了！！！！\n");

	CLK *clock = new CLK;
	Vtop *top;
	clock->InitTop(top);
	clock->setWaveForm();
	clock->rstOn();

	printf("RST 完成了！！！！\n");

	int i = 20;
	while(i--){
		clock->ClkFlipOnce();
	}

	clock->CloseWaveForm();

	return 1;
 }

