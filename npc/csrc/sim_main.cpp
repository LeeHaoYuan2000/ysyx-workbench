#include <stdio.h>
#include <stdlib.h>

#include "./include/sim_init.h"
#include "./include/initMEM.h"
#include "./include/sdb.h"
#include "./include/difftest.h"

int main(int argc,char* argv[]){

	sim_init(argc,argv);

	sim_rst_n(5);

	//sim_exe(-1);

	sdb_mainloop();

	sim_exit();

	//sdb_mainloop();
	return 0;
}