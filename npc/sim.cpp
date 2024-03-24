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
  void check_data_arrive_ifu();

  long long data = 0b0110011;
unsigned  int rs1 = 0;
unsigned  int rs2 = 1;

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

        top->eval();
        data_send();
        check_data_arrive_ifu();
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
    long long instr = 0;

    if(top->READ_SIGNAL && !top->READ_FINISH){
        top ->READ_FINISH  = 1;
        instr = 0b0110011 | (rs1 << 15) |(rs2 << 20);
        top->READ_DATA    =  instr;
    }
    else if(top->READ_FINISH){
        //reg number is 32 for risc-v
        if(rs1 == 31){
            rs1 = 0;
        }
        if(rs2 == 31){
            rs2 = 0;
        }
        top->READ_FINISH = 0;

        rs1++; rs2++;
    }
}
void check_data_arrive_ifu(){
    if(top->INSTR_ARRIVE && !top->INSTR_Complete){
        top->INSTR_Complete = 1;
    }
    else {
        top->INSTR_Complete = 0;
    }
}
