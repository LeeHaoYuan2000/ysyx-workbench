#include"stdio.h"
#include"stdlib.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include "./obj_dir/Vtop.h"

  VerilatedContext* contextp = NULL;
  VerilatedVcdC*    tfp      = NULL;
  Vtop*   top      = NULL;

  void sim_exit();
  void sim_rst();
  void sim();
  //void instr_read();
  void data_send();

  long long data = 0x80000000;

int main(){
    contextp = new VerilatedContext;
    tfp      = new VerilatedVcdC;
    top      = new Vtop(contextp);

    contextp->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("sim.vcd");

    sim_rst();

    sim();

    sim_exit();
}

void sim_rst(){
    top->rst = 1;

    for(int i = 0; i < 10;i++){
        top->clk = 0;
        top->eval();
        tfp->dump(contextp->time());
        contextp->timeInc(1);
        top->clk = 1;
        top->eval();
        tfp->dump(contextp->time());
        contextp->timeInc(1);
    }

  top->rst = 0;

}

void sim(){

    for(int i = 0; i < 160; i++){
        top->clk = 0;
        top->eval();

        tfp->dump(contextp->time());
        contextp->timeInc(1);
        top->clk = 1;
  //      ex_read();
   //     instr_read();
        top->eval();
        data_send();
        tfp->dump(contextp->time());
        
        contextp->timeInc(1);
        
    }

}

void sim_exit(){
  tfp->close();
  delete top;
  delete tfp;
  delete contextp;
}

// void instr_read(){
//     int r = rand();
//     if(( r % 3 ==0) && !top->READ_SIGNAL){
//         top->read_req_instr = 1;
//         top->instr_addr = addr_instr;
//     }
//     else if( top->read_req_instr && top->instr_finish){
//         top->read_req_instr = 0;
//          addr_instr = addr_instr >> 1;
//     }
// }
// void ex_read(){
//     int r = rand();
//     if(( r % 5 ==0) && !top->read_req_ex){
//         top->read_req_ex = 1;
//         top->ex_addr = addr_ex;
//     }
//     else if( top->read_req_ex && top->ex_finish){
//         top->read_req_ex = 0;
//         addr_ex  = addr_ex >> 1;
//     }

// }
void data_send(){
    if(top->READ_SIGNAL && !top->READ_FINISH){
        top->READ_FINISH  = 1;
        top->READ_DATA    =  data;
    }
    else if(top->READ_FINISH){
        data = data >> 1;
        top->READ_FINISH = 0;
    }
}
