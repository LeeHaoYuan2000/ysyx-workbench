#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "..//include//initMEM.h"
#include "verilated_dpi.h"
#include "getopt.h"
///#include <getopt_core.h>

#define no_argument 0
#define required_argument 1

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


void initSystem(int argc,char *argv[]){

    parse_args(argc,argv);

    initMEM();

    long img_size = load_img();

}
