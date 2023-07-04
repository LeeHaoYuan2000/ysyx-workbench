#include <stdio.h>
#include <stdlib.h>

#include "./include/sim_init.h"
#include "./include/initMEM.h"

int main(int argc,char* argv[]){
	sim_init(argc,argv);

	sim_rst_n(5);

	sim_exe(-1);

	sim_exit();

	//sdb_mainloop();
	return 0;
}