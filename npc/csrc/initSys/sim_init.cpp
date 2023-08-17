#include "../include/sim_init.h"
#include "../../obj_dir/Vtop.h"
#include "../include/initMEM.h"
#include "../include/RegFile.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include "../include/difftest.h"
#include "../include/macro.h"
#include "../include/globalDefine.h"
#include "../include/device.h"
#include "assert.h"

#define no_argument 0
#define required_argument 1 
#define ebreak 0x00100073

#ifdef Simulation_On
  VerilatedContext* contextp = NULL;
  VerilatedVcdC*    tfp      = NULL;
#endif

Vtop*             top      = NULL;


  int output_reg = 0; //flag 
  uint32_t instr = 0;
  uint64_t PC    = 0;


static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static bool is_batch_mode_on = false;

static const uint32_t build_in_img [] = {
  0x00000297,  // auipc t0,0
  0x0002b823,  // sd  zero,16(t0)
  0x0102b503,  // ld  a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

void sim_init(int argc,char *argv[]);
 void exe_and_dump();
void  sim_single_cycle();
 void sim_rst_n(uint32_t n);
 void sim_exit();
 int  sim_exe(uint64_t n);

static long load_img() {
  if (img_file == NULL) {
    memcpy(getMEMAddr(), build_in_img, sizeof(build_in_img));

    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
    
  }

else{
    FILE *fp = fopen(img_file, "rb");  //"rb 读取一个二进制文件"
    //Assert(fp, "Can not open '%s'", img_file);

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    printf("The image is %s, size = %ld", img_file, size);

    fseek(fp, 0, SEEK_SET);
    int ret = fread(getMEMAddr(), size, 1, fp);
    assert(ret == 1);

    fclose(fp);
    return size;
}

}

void sdb_set_batch_mode(){
  is_batch_mode_on = true;
}

int parse_args(int argc,char *argv[]){

      const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    printf("The O = %d \n",o);
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

//excute the waveform for once
 void exe_and_dump(){
  top->eval();

  #ifdef Simulation_On
    tfp->dump(contextp->time());
    contextp->timeInc(1);
  #endif

}

 void  sim_single_cycle(){
  top->eval();
  MEM_Opration(top);
  top->eval();
  top->clk = 0;// 0 
  exe_and_dump();
  top->clk = 1; // 1
  exe_and_dump();
}

//rst n single_clocks
void sim_rst_n(uint32_t n){
  top->rst = 1;

    while(n--){
      sim_single_cycle();
    }

  top->rst = 0;
  sim_exe(1);
}

 void sim_exit(){
  exe_and_dump();

  IFDEF(Simulation_On,tfp->close());

  delete top;
  
  IFDEF(Simulation_On,delete tfp);
  IFDEF(Simulation_On,delete contextp);
  exit(0);
}

 int sim_exe(uint64_t n){

    while(n--){
      //fetch the instr

      if(output_reg){
           //IFDEF(Difftest_On,printf("Instruction: %08x \n",instr));
           //IFDEF(Difftest_On,printf("PC: %016lx\n",PC));
      }

            //show up the regs
      if(output_reg == 0){
          output_reg++;
      }
      else{
        //IFDEF(Difftest_On,Output_gpr());
        IFDEF(Difftest_On,difftest_exe(PC)) ;
      }

      
      instr = MEMRead_instr(top->PC_Test);
      top->instr_in  = instr;
      PC = top->PC_Test;

      if(instr == ebreak){
          if(get_a0() == 0){
              printf("Hit a Good Trap\n");
              //sim_exit();
              return 0;
          }
          else{
              printf("Hit a Bad  Trap\n");
              //sim_exit();
              return 0;
          }
      }

      sim_single_cycle();

      // if(getInstr_ValidFlag()){
      //   printf("Instruction Unfinish !! please add more instruction !!! \n");
      //   assert(0);
      // }

      

      IFDEF(Device_On,device_update());

    }
    return 1;
}

void sim_init(int argc,char *argv[]){

    parse_args(argc,argv);

    MEM_init(); //initialize the memory

    IFDEF(Device_On,init_device());

    long img_size = load_img();

    IFDEF(Difftest_On,init_difftest(diff_so_file,img_size,1));

  //-----------initial the Verilator----------------
  #ifdef Simulation_On
    contextp = new VerilatedContext;
    tfp      = new VerilatedVcdC;
    top      = new Vtop(contextp);
  #else
    top      = new Vtop;
  #endif

    

  #ifdef Simulation_On
    contextp->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("sim.vcd");
  #endif
    
    top->clk = 1;
    top->rst = 1;
    exe_and_dump();
}
