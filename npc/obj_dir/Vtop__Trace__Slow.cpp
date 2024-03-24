// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+870,"clk", false,-1);
        tracep->declBit(c+871,"rst", false,-1);
        tracep->declQuad(c+872,"READ_DATA", false,-1, 63,0);
        tracep->declBit(c+874,"READ_FINISH", false,-1);
        tracep->declBit(c+875,"READ_SIGNAL", false,-1);
        tracep->declQuad(c+876,"READ_ADDR", false,-1, 63,0);
        tracep->declBit(c+878,"ec_finish", false,-1);
        tracep->declQuad(c+879,"ex_data", false,-1, 63,0);
        tracep->declQuad(c+881,"RS1_Reg", false,-1, 63,0);
        tracep->declQuad(c+883,"RS2_Reg", false,-1, 63,0);
        tracep->declQuad(c+885,"SEXT_out", false,-1, 63,0);
        tracep->declBit(c+887,"INSTR_ARRIVE", false,-1);
        tracep->declBit(c+888,"INSTR_Complete", false,-1);
        tracep->declBus(c+889,"INSTR_DATA", false,-1, 31,0);
        tracep->declBit(c+870,"top clk", false,-1);
        tracep->declBit(c+871,"top rst", false,-1);
        tracep->declQuad(c+872,"top READ_DATA", false,-1, 63,0);
        tracep->declBit(c+874,"top READ_FINISH", false,-1);
        tracep->declBit(c+875,"top READ_SIGNAL", false,-1);
        tracep->declQuad(c+876,"top READ_ADDR", false,-1, 63,0);
        tracep->declBit(c+878,"top ec_finish", false,-1);
        tracep->declQuad(c+879,"top ex_data", false,-1, 63,0);
        tracep->declQuad(c+881,"top RS1_Reg", false,-1, 63,0);
        tracep->declQuad(c+883,"top RS2_Reg", false,-1, 63,0);
        tracep->declQuad(c+885,"top SEXT_out", false,-1, 63,0);
        tracep->declBit(c+887,"top INSTR_ARRIVE", false,-1);
        tracep->declBit(c+888,"top INSTR_Complete", false,-1);
        tracep->declBus(c+889,"top INSTR_DATA", false,-1, 31,0);
        tracep->declQuad(c+70,"top PC_TO_IFU", false,-1, 63,0);
        tracep->declQuad(c+72,"top INSTR_TO_IFU", false,-1, 63,0);
        tracep->declQuad(c+74,"top INSTR_ADDR", false,-1, 63,0);
        tracep->declBit(c+76,"top READ_INSTR_START", false,-1);
        tracep->declBit(c+77,"top READ_INSTR_FINISH", false,-1);
        tracep->declQuad(c+78,"top PC_NEXT", false,-1, 63,0);
        tracep->declQuad(c+80,"top ALU_Number_1", false,-1, 63,0);
        tracep->declQuad(c+82,"top ALu_Number_2", false,-1, 63,0);
        tracep->declBus(c+84,"top ALU_Control", false,-1, 3,0);
        tracep->declBus(c+85,"top ALU_Inside_Control", false,-1, 3,0);
        tracep->declBus(c+86,"top SEXT_Control", false,-1, 2,0);
        tracep->declBit(c+87,"top RegWriteEnable", false,-1);
        tracep->declBit(c+890,"top MUX_RS1_PC", false,-1);
        tracep->declBit(c+891,"top MUX_RS2_Imm", false,-1);
        tracep->declBit(c+88,"top MUX_ALU_MEM", false,-1);
        tracep->declBit(c+892,"top MUX_ALU_NPC_In", false,-1);
        tracep->declBus(c+893,"top NPC_Branch_Jump", false,-1, 1,0);
        tracep->declBus(c+89,"top MEM_Ctrl", false,-1, 3,0);
        tracep->declBit(c+90,"top MEM_Enable", false,-1);
        tracep->declBit(c+870,"top pc clk", false,-1);
        tracep->declBit(c+871,"top pc rst", false,-1);
        tracep->declBit(c+888,"top pc enable", false,-1);
        tracep->declQuad(c+78,"top pc PC_Next", false,-1, 63,0);
        tracep->declQuad(c+70,"top pc PC", false,-1, 63,0);
        tracep->declQuad(c+70,"top pc_adder PC", false,-1, 63,0);
        tracep->declQuad(c+78,"top pc_adder PC_Next", false,-1, 63,0);
        tracep->declBit(c+870,"top ifu clk", false,-1);
        tracep->declBit(c+871,"top ifu rst", false,-1);
        tracep->declQuad(c+70,"top ifu PC_IN", false,-1, 63,0);
        tracep->declBus(c+889,"top ifu INSTR", false,-1, 31,0);
        tracep->declBit(c+76,"top ifu read_instr_start", false,-1);
        tracep->declBit(c+77,"top ifu read_instr_finish", false,-1);
        tracep->declBit(c+887,"top ifu instr_arrive", false,-1);
        tracep->declBit(c+888,"top ifu instr_ex_complete", false,-1);
        tracep->declQuad(c+74,"top ifu PC_addr", false,-1, 63,0);
        tracep->declBus(c+91,"top ifu INSTR_READ", false,-1, 31,0);
        tracep->declBit(c+870,"top axi4_read_with_arbiter CLK", false,-1);
        tracep->declBit(c+871,"top axi4_read_with_arbiter RST", false,-1);
        tracep->declBit(c+76,"top axi4_read_with_arbiter read_req_instr", false,-1);
        tracep->declBit(c+940,"top axi4_read_with_arbiter read_req_ex", false,-1);
        tracep->declBit(c+77,"top axi4_read_with_arbiter instr_finish", false,-1);
        tracep->declBit(c+878,"top axi4_read_with_arbiter ex_finish", false,-1);
        tracep->declQuad(c+74,"top axi4_read_with_arbiter instr_addr", false,-1, 63,0);
        tracep->declQuad(c+941,"top axi4_read_with_arbiter ex_addr", false,-1, 63,0);
        tracep->declQuad(c+72,"top axi4_read_with_arbiter instr_data", false,-1, 63,0);
        tracep->declQuad(c+879,"top axi4_read_with_arbiter ex_data", false,-1, 63,0);
        tracep->declBit(c+875,"top axi4_read_with_arbiter Read_SIGNAL", false,-1);
        tracep->declQuad(c+876,"top axi4_read_with_arbiter Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+874,"top axi4_read_with_arbiter DATA_ARRIVE", false,-1);
        tracep->declQuad(c+872,"top axi4_read_with_arbiter DATA_OUTSIDE", false,-1, 63,0);
        tracep->declBus(c+92,"top axi4_read_with_arbiter req_combine", false,-1, 1,0);
        tracep->declBus(c+93,"top axi4_read_with_arbiter choose_channel", false,-1, 1,0);
        tracep->declBit(c+94,"top axi4_read_with_arbiter aribter_release", false,-1);
        tracep->declQuad(c+95,"top axi4_read_with_arbiter read_addr", false,-1, 63,0);
        tracep->declQuad(c+97,"top axi4_read_with_arbiter read_data", false,-1, 63,0);
        tracep->declBit(c+99,"top axi4_read_with_arbiter read_req", false,-1);
        tracep->declBit(c+100,"top axi4_read_with_arbiter read_finish", false,-1);
        tracep->declBit(c+870,"top axi4_read_with_arbiter rr_arbiter CLK", false,-1);
        tracep->declBit(c+871,"top axi4_read_with_arbiter rr_arbiter RST", false,-1);
        tracep->declBus(c+92,"top axi4_read_with_arbiter rr_arbiter req", false,-1, 1,0);
        tracep->declBit(c+94,"top axi4_read_with_arbiter rr_arbiter reg_release", false,-1);
        tracep->declBus(c+93,"top axi4_read_with_arbiter rr_arbiter grant", false,-1, 1,0);
        tracep->declBus(c+943,"top axi4_read_with_arbiter rr_arbiter IDLE", false,-1, 2,0);
        tracep->declBus(c+944,"top axi4_read_with_arbiter rr_arbiter Arbiter_State", false,-1, 2,0);
        tracep->declBus(c+101,"top axi4_read_with_arbiter rr_arbiter cur_state", false,-1, 2,0);
        tracep->declBus(c+102,"top axi4_read_with_arbiter rr_arbiter next_state", false,-1, 2,0);
        tracep->declBus(c+103,"top axi4_read_with_arbiter rr_arbiter pri", false,-1, 1,0);
        tracep->declBus(c+104,"top axi4_read_with_arbiter rr_arbiter req_shot", false,-1, 1,0);
        tracep->declBus(c+105,"top axi4_read_with_arbiter rr_arbiter result_req", false,-1, 2,0);
        tracep->declBit(c+870,"top axi4_read_with_arbiter AXI4_READ_MODUAL CLK", false,-1);
        tracep->declBit(c+871,"top axi4_read_with_arbiter AXI4_READ_MODUAL RST", false,-1);
        tracep->declQuad(c+95,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_Addr", false,-1, 63,0);
        tracep->declBit(c+99,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_Request", false,-1);
        tracep->declBit(c+100,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_Finish", false,-1);
        tracep->declQuad(c+97,"top axi4_read_with_arbiter AXI4_READ_MODUAL Data_Out", false,-1, 63,0);
        tracep->declBit(c+875,"top axi4_read_with_arbiter AXI4_READ_MODUAL Read_SIGNAL", false,-1);
        tracep->declQuad(c+876,"top axi4_read_with_arbiter AXI4_READ_MODUAL Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+874,"top axi4_read_with_arbiter AXI4_READ_MODUAL DATA_ARRIVE", false,-1);
        tracep->declQuad(c+872,"top axi4_read_with_arbiter AXI4_READ_MODUAL DATA_OUTSIDE", false,-1, 63,0);
        tracep->declQuad(c+106,"top axi4_read_with_arbiter AXI4_READ_MODUAL AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+108,"top axi4_read_with_arbiter AXI4_READ_MODUAL AR_VALID", false,-1);
        tracep->declBit(c+109,"top axi4_read_with_arbiter AXI4_READ_MODUAL AR_READY", false,-1);
        tracep->declQuad(c+110,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_DATA", false,-1, 63,0);
        tracep->declBus(c+112,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_RESP", false,-1, 1,0);
        tracep->declBit(c+113,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_VALID", false,-1);
        tracep->declBit(c+114,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_READY", false,-1);
        tracep->declBit(c+870,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master CLK", false,-1);
        tracep->declBit(c+871,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master RST", false,-1);
        tracep->declQuad(c+106,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+108,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master AR_VALID", false,-1);
        tracep->declBit(c+109,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master AR_READY", false,-1);
        tracep->declQuad(c+110,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_DATA", false,-1, 63,0);
        tracep->declBus(c+112,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_RESP", false,-1, 1,0);
        tracep->declBit(c+113,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_VALID", false,-1);
        tracep->declBit(c+114,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_READY", false,-1);
        tracep->declQuad(c+95,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_Addr", false,-1, 63,0);
        tracep->declBit(c+99,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_Request", false,-1);
        tracep->declBit(c+100,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_Finish", false,-1);
        tracep->declQuad(c+97,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master Data_Out", false,-1, 63,0);
        tracep->declBit(c+115,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master lock_state", false,-1);
        tracep->declBit(c+870,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave CLK", false,-1);
        tracep->declBit(c+871,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave RST", false,-1);
        tracep->declQuad(c+106,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+108,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave AR_VALID", false,-1);
        tracep->declBit(c+109,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave AR_READY", false,-1);
        tracep->declQuad(c+110,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_DATA", false,-1, 63,0);
        tracep->declBus(c+112,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_RESP", false,-1, 1,0);
        tracep->declBit(c+113,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_VALID", false,-1);
        tracep->declBit(c+114,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_READY", false,-1);
        tracep->declBit(c+875,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave Read_SIGNAL", false,-1);
        tracep->declQuad(c+876,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+874,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave DATA_ARRIVE", false,-1);
        tracep->declQuad(c+872,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave DATA_OUTSIDE", false,-1, 63,0);
        tracep->declQuad(c+116,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave data_address", false,-1, 63,0);
        tracep->declQuad(c+110,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave data_buf", false,-1, 63,0);
        tracep->declBit(c+870,"top reg_file clk", false,-1);
        tracep->declBit(c+871,"top reg_file rst", false,-1);
        tracep->declBus(c+894,"top reg_file RS1", false,-1, 4,0);
        tracep->declBus(c+895,"top reg_file RS2", false,-1, 4,0);
        tracep->declBus(c+896,"top reg_file RD", false,-1, 4,0);
        tracep->declQuad(c+941,"top reg_file RD_Back", false,-1, 63,0);
        tracep->declBit(c+940,"top reg_file Enable_Control", false,-1);
        tracep->declQuad(c+881,"top reg_file RS1_Reg", false,-1, 63,0);
        tracep->declQuad(c+883,"top reg_file RS2_Reg", false,-1, 63,0);
        tracep->declQuad(c+118,"top reg_file Zero", false,-1, 63,0);
        tracep->declQuad(c+120,"top reg_file ra", false,-1, 63,0);
        tracep->declQuad(c+122,"top reg_file sp", false,-1, 63,0);
        tracep->declQuad(c+124,"top reg_file gp", false,-1, 63,0);
        tracep->declQuad(c+126,"top reg_file tp", false,-1, 63,0);
        tracep->declQuad(c+128,"top reg_file t0", false,-1, 63,0);
        tracep->declQuad(c+130,"top reg_file t1", false,-1, 63,0);
        tracep->declQuad(c+132,"top reg_file t2", false,-1, 63,0);
        tracep->declQuad(c+134,"top reg_file s0", false,-1, 63,0);
        tracep->declQuad(c+136,"top reg_file s1", false,-1, 63,0);
        tracep->declQuad(c+138,"top reg_file a0", false,-1, 63,0);
        tracep->declQuad(c+140,"top reg_file a1", false,-1, 63,0);
        tracep->declQuad(c+142,"top reg_file a2", false,-1, 63,0);
        tracep->declQuad(c+144,"top reg_file a3", false,-1, 63,0);
        tracep->declQuad(c+146,"top reg_file a4", false,-1, 63,0);
        tracep->declQuad(c+148,"top reg_file a5", false,-1, 63,0);
        tracep->declQuad(c+150,"top reg_file a6", false,-1, 63,0);
        tracep->declQuad(c+152,"top reg_file a7", false,-1, 63,0);
        tracep->declQuad(c+154,"top reg_file s2", false,-1, 63,0);
        tracep->declQuad(c+156,"top reg_file s3", false,-1, 63,0);
        tracep->declQuad(c+158,"top reg_file s4", false,-1, 63,0);
        tracep->declQuad(c+160,"top reg_file s5", false,-1, 63,0);
        tracep->declQuad(c+162,"top reg_file s6", false,-1, 63,0);
        tracep->declQuad(c+164,"top reg_file s7", false,-1, 63,0);
        tracep->declQuad(c+166,"top reg_file s8", false,-1, 63,0);
        tracep->declQuad(c+168,"top reg_file s9", false,-1, 63,0);
        tracep->declQuad(c+170,"top reg_file s10", false,-1, 63,0);
        tracep->declQuad(c+172,"top reg_file s11", false,-1, 63,0);
        tracep->declQuad(c+174,"top reg_file t3", false,-1, 63,0);
        tracep->declQuad(c+176,"top reg_file t4", false,-1, 63,0);
        tracep->declQuad(c+178,"top reg_file t5", false,-1, 63,0);
        tracep->declQuad(c+180,"top reg_file t6", false,-1, 63,0);
        tracep->declBus(c+945,"top reg_file RS1_Out NR_KEY", false,-1, 31,0);
        tracep->declBus(c+946,"top reg_file RS1_Out KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top reg_file RS1_Out DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+881,"top reg_file RS1_Out out", false,-1, 63,0);
        tracep->declBus(c+894,"top reg_file RS1_Out key", false,-1, 4,0);
        tracep->declQuad(c+941,"top reg_file RS1_Out default_out", false,-1, 63,0);
        tracep->declArray(c+182,"top reg_file RS1_Out lut", false,-1, 2207,0);
        tracep->declBus(c+945,"top reg_file RS1_Out i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+946,"top reg_file RS1_Out i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top reg_file RS1_Out i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+948,"top reg_file RS1_Out i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+881,"top reg_file RS1_Out i0 out", false,-1, 63,0);
        tracep->declBus(c+894,"top reg_file RS1_Out i0 key", false,-1, 4,0);
        tracep->declQuad(c+941,"top reg_file RS1_Out i0 default_out", false,-1, 63,0);
        tracep->declArray(c+182,"top reg_file RS1_Out i0 lut", false,-1, 2207,0);
        tracep->declBus(c+949,"top reg_file RS1_Out i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+251+i*3,"top reg_file RS1_Out i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+347+i*1,"top reg_file RS1_Out i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+379+i*2,"top reg_file RS1_Out i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+443,"top reg_file RS1_Out i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+445,"top reg_file RS1_Out i0 hit", false,-1);
        tracep->declBus(c+950,"top reg_file RS1_Out i0 i", false,-1, 31,0);
        tracep->declBus(c+945,"top reg_file RS2_Out NR_KEY", false,-1, 31,0);
        tracep->declBus(c+946,"top reg_file RS2_Out KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top reg_file RS2_Out DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+883,"top reg_file RS2_Out out", false,-1, 63,0);
        tracep->declBus(c+895,"top reg_file RS2_Out key", false,-1, 4,0);
        tracep->declQuad(c+941,"top reg_file RS2_Out default_out", false,-1, 63,0);
        tracep->declArray(c+446,"top reg_file RS2_Out lut", false,-1, 2207,0);
        tracep->declBus(c+945,"top reg_file RS2_Out i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+946,"top reg_file RS2_Out i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top reg_file RS2_Out i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+948,"top reg_file RS2_Out i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+883,"top reg_file RS2_Out i0 out", false,-1, 63,0);
        tracep->declBus(c+895,"top reg_file RS2_Out i0 key", false,-1, 4,0);
        tracep->declQuad(c+941,"top reg_file RS2_Out i0 default_out", false,-1, 63,0);
        tracep->declArray(c+446,"top reg_file RS2_Out i0 lut", false,-1, 2207,0);
        tracep->declBus(c+949,"top reg_file RS2_Out i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+515+i*3,"top reg_file RS2_Out i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+611+i*1,"top reg_file RS2_Out i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+643+i*2,"top reg_file RS2_Out i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+707,"top reg_file RS2_Out i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+709,"top reg_file RS2_Out i0 hit", false,-1);
        tracep->declBus(c+950,"top reg_file RS2_Out i0 i", false,-1, 31,0);
        tracep->declBus(c+889,"top sign_extend Instr", false,-1, 31,0);
        tracep->declBus(c+86,"top sign_extend ControlUnit", false,-1, 2,0);
        tracep->declQuad(c+885,"top sign_extend SEXT_Out", false,-1, 63,0);
        tracep->declBus(c+897,"top sign_extend immI", false,-1, 11,0);
        tracep->declBus(c+898,"top sign_extend immU", false,-1, 31,0);
        tracep->declBus(c+710,"top sign_extend immS", false,-1, 11,0);
        tracep->declBus(c+711,"top sign_extend immJ", false,-1, 20,0);
        tracep->declBus(c+712,"top sign_extend immB", false,-1, 12,0);
        tracep->declBus(c+946,"top sign_extend SEXT NR_KEY", false,-1, 31,0);
        tracep->declBus(c+951,"top sign_extend SEXT KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top sign_extend SEXT DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+885,"top sign_extend SEXT out", false,-1, 63,0);
        tracep->declBus(c+86,"top sign_extend SEXT key", false,-1, 2,0);
        tracep->declQuad(c+941,"top sign_extend SEXT default_out", false,-1, 63,0);
        tracep->declArray(c+713,"top sign_extend SEXT lut", false,-1, 334,0);
        tracep->declBus(c+946,"top sign_extend SEXT i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+951,"top sign_extend SEXT i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top sign_extend SEXT i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+948,"top sign_extend SEXT i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+885,"top sign_extend SEXT i0 out", false,-1, 63,0);
        tracep->declBus(c+86,"top sign_extend SEXT i0 key", false,-1, 2,0);
        tracep->declQuad(c+941,"top sign_extend SEXT i0 default_out", false,-1, 63,0);
        tracep->declArray(c+713,"top sign_extend SEXT i0 lut", false,-1, 334,0);
        tracep->declBus(c+952,"top sign_extend SEXT i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+724+i*3,"top sign_extend SEXT i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+739+i*1,"top sign_extend SEXT i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+744+i*2,"top sign_extend SEXT i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+754,"top sign_extend SEXT i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+756,"top sign_extend SEXT i0 hit", false,-1);
        tracep->declBus(c+953,"top sign_extend SEXT i0 i", false,-1, 31,0);
        tracep->declBus(c+954,"top MUX_REG1_PC NR_KEY", false,-1, 31,0);
        tracep->declBus(c+948,"top MUX_REG1_PC KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top MUX_REG1_PC DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+80,"top MUX_REG1_PC out", false,-1, 63,0);
        tracep->declBus(c+890,"top MUX_REG1_PC key", false,-1, 0,0);
        tracep->declQuad(c+941,"top MUX_REG1_PC default_out", false,-1, 63,0);
        tracep->declArray(c+757,"top MUX_REG1_PC lut", false,-1, 129,0);
        tracep->declBus(c+954,"top MUX_REG1_PC i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+948,"top MUX_REG1_PC i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top MUX_REG1_PC i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+948,"top MUX_REG1_PC i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+80,"top MUX_REG1_PC i0 out", false,-1, 63,0);
        tracep->declBus(c+890,"top MUX_REG1_PC i0 key", false,-1, 0,0);
        tracep->declQuad(c+941,"top MUX_REG1_PC i0 default_out", false,-1, 63,0);
        tracep->declArray(c+757,"top MUX_REG1_PC i0 lut", false,-1, 129,0);
        tracep->declBus(c+955,"top MUX_REG1_PC i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+762+i*3,"top MUX_REG1_PC i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+768+i*1,"top MUX_REG1_PC i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+770+i*2,"top MUX_REG1_PC i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+774,"top MUX_REG1_PC i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+776,"top MUX_REG1_PC i0 hit", false,-1);
        tracep->declBus(c+956,"top MUX_REG1_PC i0 i", false,-1, 31,0);
        tracep->declBus(c+954,"top MUX_REG2_SEXT NR_KEY", false,-1, 31,0);
        tracep->declBus(c+948,"top MUX_REG2_SEXT KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top MUX_REG2_SEXT DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+82,"top MUX_REG2_SEXT out", false,-1, 63,0);
        tracep->declBus(c+891,"top MUX_REG2_SEXT key", false,-1, 0,0);
        tracep->declQuad(c+941,"top MUX_REG2_SEXT default_out", false,-1, 63,0);
        tracep->declArray(c+777,"top MUX_REG2_SEXT lut", false,-1, 129,0);
        tracep->declBus(c+954,"top MUX_REG2_SEXT i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+948,"top MUX_REG2_SEXT i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top MUX_REG2_SEXT i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+948,"top MUX_REG2_SEXT i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+82,"top MUX_REG2_SEXT i0 out", false,-1, 63,0);
        tracep->declBus(c+891,"top MUX_REG2_SEXT i0 key", false,-1, 0,0);
        tracep->declQuad(c+941,"top MUX_REG2_SEXT i0 default_out", false,-1, 63,0);
        tracep->declArray(c+777,"top MUX_REG2_SEXT i0 lut", false,-1, 129,0);
        tracep->declBus(c+955,"top MUX_REG2_SEXT i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+782+i*3,"top MUX_REG2_SEXT i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+788+i*1,"top MUX_REG2_SEXT i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+790+i*2,"top MUX_REG2_SEXT i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+794,"top MUX_REG2_SEXT i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+796,"top MUX_REG2_SEXT i0 hit", false,-1);
        tracep->declBus(c+956,"top MUX_REG2_SEXT i0 i", false,-1, 31,0);
        tracep->declBus(c+889,"top CU instr", false,-1, 31,0);
        tracep->declBit(c+957,"top CU ALU_MEM_Finish", false,-1);
        tracep->declBit(c+940,"top CU Branch_Yes_No", false,-1);
        tracep->declBus(c+84,"top CU ALU_Control", false,-1, 3,0);
        tracep->declBus(c+85,"top CU Inside_Control", false,-1, 3,0);
        tracep->declBus(c+86,"top CU SEXT_Control", false,-1, 2,0);
        tracep->declBit(c+87,"top CU RegWriteEnable", false,-1);
        tracep->declBit(c+890,"top CU C_RS1_PC", false,-1);
        tracep->declBit(c+891,"top CU C_RS2_imm", false,-1);
        tracep->declBit(c+88,"top CU C_ALU_MEM", false,-1);
        tracep->declBit(c+892,"top CU C_ALU_NPC_In", false,-1);
        tracep->declBus(c+893,"top CU C_NPC_Branch_Jump", false,-1, 1,0);
        tracep->declBus(c+89,"top CU MEM_Ctrl", false,-1, 3,0);
        tracep->declBit(c+90,"top CU MEM_Enable", false,-1);
        tracep->declBus(c+899,"top CU ebreak_reg", false,-1, 7,0);
        tracep->declBus(c+900,"top CU instr_6_0", false,-1, 6,0);
        tracep->declBus(c+901,"top CU instr_14_12", false,-1, 2,0);
        tracep->declBus(c+902,"top CU instr_31_25", false,-1, 6,0);
        tracep->declBus(c+903,"top CU instr_31_26", false,-1, 5,0);
        tracep->declBit(c+904,"top CU Match_6_0_0010011", false,-1);
        tracep->declBit(c+905,"top CU Match_6_0_0111011", false,-1);
        tracep->declBit(c+906,"top CU Match_6_0_0110011", false,-1);
        tracep->declBit(c+907,"top CU Match_6_0_0011011", false,-1);
        tracep->declBit(c+908,"top CU Match_6_0_0000011", false,-1);
        tracep->declBit(c+909,"top CU Match_6_0_0100011", false,-1);
        tracep->declBit(c+910,"top CU Match_6_0_1100011", false,-1);
        tracep->declBit(c+911,"top CU Match_6_0_1101111", false,-1);
        tracep->declBit(c+912,"top CU Match_6_0_1100111", false,-1);
        tracep->declBit(c+913,"top CU Match_6_0_0010111", false,-1);
        tracep->declBit(c+914,"top CU Match_6_0_0110111", false,-1);
        tracep->declBit(c+915,"top CU Match_6_0_1110011", false,-1);
        tracep->declBit(c+916,"top CU Match_14_12_000", false,-1);
        tracep->declBit(c+917,"top CU Match_14_12_100", false,-1);
        tracep->declBit(c+918,"top CU Match_14_12_110", false,-1);
        tracep->declBit(c+919,"top CU Match_14_12_011", false,-1);
        tracep->declBit(c+920,"top CU Match_14_12_010", false,-1);
        tracep->declBit(c+921,"top CU Match_14_12_101", false,-1);
        tracep->declBit(c+922,"top CU Match_14_12_001", false,-1);
        tracep->declBit(c+923,"top CU Match_14_12_111", false,-1);
        tracep->declBit(c+924,"top CU Match_31_25_0000000", false,-1);
        tracep->declBit(c+797,"top CU Match_31_25_0100000", false,-1);
        tracep->declBit(c+925,"top CU Match_31_25_0000001", false,-1);
        tracep->declBit(c+926,"top CU Match_31_26_000000", false,-1);
        tracep->declBit(c+927,"top CU Match_31_26_010000", false,-1);
        tracep->declBit(c+798,"top CU addi", false,-1);
        tracep->declBit(c+799,"top CU addiw", false,-1);
        tracep->declBit(c+800,"top CU addw", false,-1);
        tracep->declBit(c+801,"top CU subw", false,-1);
        tracep->declBit(c+802,"top CU add", false,-1);
        tracep->declBit(c+803,"top CU sub", false,-1);
        tracep->declBit(c+804,"top CU mulw", false,-1);
        tracep->declBit(c+805,"top CU divw", false,-1);
        tracep->declBit(c+806,"top CU mul", false,-1);
        tracep->declBit(c+807,"top CU divu", false,-1);
        tracep->declBit(c+808,"top CU divuw", false,-1);
        tracep->declBit(c+809,"top CU remw", false,-1);
        tracep->declBit(c+928,"top CU rem", false,-1);
        tracep->declBit(c+810,"top CU remu", false,-1);
        tracep->declBit(c+811,"top CU remuw", false,-1);
        tracep->declBit(c+812,"top CU sltiu", false,-1);
        tracep->declBit(c+813,"top CU sltu", false,-1);
        tracep->declBit(c+814,"top CU slt", false,-1);
        tracep->declBit(c+815,"top CU slti", false,-1);
        tracep->declBit(c+816,"top CU sraw", false,-1);
        tracep->declBit(c+817,"top CU sllw", false,-1);
        tracep->declBit(c+818,"top CU srlw", false,-1);
        tracep->declBit(c+819,"top CU slli", false,-1);
        tracep->declBit(c+820,"top CU srli", false,-1);
        tracep->declBit(c+821,"top CU srai", false,-1);
        tracep->declBit(c+822,"top CU srliw", false,-1);
        tracep->declBit(c+823,"top CU slliw", false,-1);
        tracep->declBit(c+824,"top CU sraiw", false,-1);
        tracep->declBit(c+825,"top CU sll", false,-1);
        tracep->declBit(c+929,"top CU srl", false,-1);
        tracep->declBit(c+826,"top CU ld", false,-1);
        tracep->declBit(c+827,"top CU lw", false,-1);
        tracep->declBit(c+828,"top CU lbu", false,-1);
        tracep->declBit(c+829,"top CU lh", false,-1);
        tracep->declBit(c+830,"top CU lhu", false,-1);
        tracep->declBit(c+831,"top CU sd", false,-1);
        tracep->declBit(c+832,"top CU sw", false,-1);
        tracep->declBit(c+833,"top CU sb", false,-1);
        tracep->declBit(c+834,"top CU sh", false,-1);
        tracep->declBit(c+835,"top CU lb", false,-1);
        tracep->declBit(c+836,"top CU lwu", false,-1);
        tracep->declBit(c+837,"top CU andi", false,-1);
        tracep->declBit(c+838,"top CU xori", false,-1);
        tracep->declBit(c+839,"top CU ori", false,-1);
        tracep->declBit(c+840,"top CU bne", false,-1);
        tracep->declBit(c+841,"top CU beq", false,-1);
        tracep->declBit(c+842,"top CU bge", false,-1);
        tracep->declBit(c+843,"top CU blt", false,-1);
        tracep->declBit(c+844,"top CU bltu", false,-1);
        tracep->declBit(c+845,"top CU bgeu", false,-1);
        tracep->declBit(c+911,"top CU jal", false,-1);
        tracep->declBit(c+846,"top CU jalr", false,-1);
        tracep->declBit(c+847,"top CU csrrw", false,-1);
        tracep->declBit(c+848,"top CU csrrs", false,-1);
        tracep->declBit(c+913,"top CU auipc", false,-1);
        tracep->declBit(c+914,"top CU lui", false,-1);
        tracep->declBit(c+930,"top CU ebreak", false,-1);
        tracep->declBit(c+931,"top CU ecall", false,-1);
        tracep->declBit(c+932,"top CU mret", false,-1);
        tracep->declBit(c+933,"top CU TypeI", false,-1);
        tracep->declBit(c+934,"top CU TypeU", false,-1);
        tracep->declBit(c+849,"top CU TypeS", false,-1);
        tracep->declBit(c+911,"top CU TypeJ", false,-1);
        tracep->declBit(c+850,"top CU TypeB", false,-1);
        tracep->declBit(c+935,"top CU TypeR", false,-1);
        tracep->declBit(c+851,"top CU ALU_Adder", false,-1);
        tracep->declBit(c+852,"top CU ALU_Mul", false,-1);
        tracep->declBit(c+853,"top CU ALU_Div", false,-1);
        tracep->declBit(c+854,"top CU ALU_Compare", false,-1);
        tracep->declBit(c+855,"top CU ALU_Shift", false,-1);
        tracep->declBit(c+856,"top CU ALU_LS", false,-1);
        tracep->declBit(c+857,"top CU ALU_LogicOpt", false,-1);
        tracep->declBit(c+850,"top CU ALU_Branch", false,-1);
        tracep->declBit(c+911,"top CU ALU_Jump", false,-1);
        tracep->declBit(c+913,"top CU ALU_auipc", false,-1);
        tracep->declBit(c+914,"top CU ALU_lui", false,-1);
        tracep->declBit(c+936,"top CU ALU_CSROP", false,-1);
        tracep->declBit(c+937,"top CU ALUInternal_Control_0", false,-1);
        tracep->declBit(c+858,"top CU ALUInternal_Control_1", false,-1);
        tracep->declBit(c+938,"top CU ALUInternal_Control_2", false,-1);
        tracep->declBit(c+939,"top CU ALUInternal_Control_3", false,-1);
        tracep->declBit(c+859,"top CU ALUInternal_Control_4", false,-1);
        tracep->declBit(c+860,"top CU ALUInternal_Control_5", false,-1);
        tracep->declBit(c+891,"top CU ALU_Choose_imm", false,-1);
        tracep->declBit(c+890,"top CU ALU_Choose_PC", false,-1);
        tracep->declBus(c+861,"top CU func_signal", false,-1, 11,0);
        tracep->declBus(c+862,"top CU ALU_inside_signal", false,-1, 5,0);
        tracep->declBus(c+943,"top CU IMMI", false,-1, 2,0);
        tracep->declBus(c+944,"top CU IMMU", false,-1, 2,0);
        tracep->declBus(c+958,"top CU IMMS", false,-1, 2,0);
        tracep->declBus(c+959,"top CU IMMJ", false,-1, 2,0);
        tracep->declBus(c+960,"top CU IMMB", false,-1, 2,0);
        tracep->declBus(c+961,"top CU MUX_Adder", false,-1, 3,0);
        tracep->declBus(c+962,"top CU MUX_Shift", false,-1, 3,0);
        tracep->declBus(c+963,"top CU MUX_Compare", false,-1, 3,0);
        tracep->declBus(c+964,"top CU MUX_DIV", false,-1, 3,0);
        tracep->declBus(c+965,"top CU MUX_Logic", false,-1, 3,0);
        tracep->declBus(c+966,"top CU MUX_MUL", false,-1, 3,0);
        tracep->declBus(c+967,"top CU MUX_CSR_OP", false,-1, 3,0);
        tracep->declBus(c+961,"top CU Inside_0", false,-1, 3,0);
        tracep->declBus(c+962,"top CU Inside_1", false,-1, 3,0);
        tracep->declBus(c+963,"top CU Inside_2", false,-1, 3,0);
        tracep->declBus(c+964,"top CU Inside_3", false,-1, 3,0);
        tracep->declBus(c+965,"top CU Inside_4", false,-1, 3,0);
        tracep->declBus(c+966,"top CU Inside_5", false,-1, 3,0);
        tracep->declBus(c+968,"top CU ALU_Inside_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+968,"top CU ALU_Inside_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+969,"top CU ALU_Inside_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+85,"top CU ALU_Inside_choose out", false,-1, 3,0);
        tracep->declBus(c+862,"top CU ALU_Inside_choose key", false,-1, 5,0);
        tracep->declBus(c+970,"top CU ALU_Inside_choose default_out", false,-1, 3,0);
        tracep->declQuad(c+971,"top CU ALU_Inside_choose lut", false,-1, 59,0);
        tracep->declBus(c+968,"top CU ALU_Inside_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+968,"top CU ALU_Inside_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+969,"top CU ALU_Inside_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+948,"top CU ALU_Inside_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+85,"top CU ALU_Inside_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+862,"top CU ALU_Inside_choose i0 key", false,-1, 5,0);
        tracep->declBus(c+970,"top CU ALU_Inside_choose i0 default_out", false,-1, 3,0);
        tracep->declQuad(c+971,"top CU ALU_Inside_choose i0 lut", false,-1, 59,0);
        tracep->declBus(c+973,"top CU ALU_Inside_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1+i*1,"top CU ALU_Inside_choose i0 pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+7+i*1,"top CU ALU_Inside_choose i0 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+13+i*1,"top CU ALU_Inside_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+863,"top CU ALU_Inside_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+864,"top CU ALU_Inside_choose i0 hit", false,-1);
        tracep->declBus(c+974,"top CU ALU_Inside_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+975,"top CU func_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+975,"top CU func_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+969,"top CU func_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+84,"top CU func_choose out", false,-1, 3,0);
        tracep->declBus(c+861,"top CU func_choose key", false,-1, 11,0);
        tracep->declBus(c+970,"top CU func_choose default_out", false,-1, 3,0);
        tracep->declArray(c+976,"top CU func_choose lut", false,-1, 191,0);
        tracep->declBus(c+975,"top CU func_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+975,"top CU func_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+969,"top CU func_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+948,"top CU func_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+84,"top CU func_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+861,"top CU func_choose i0 key", false,-1, 11,0);
        tracep->declBus(c+970,"top CU func_choose i0 default_out", false,-1, 3,0);
        tracep->declArray(c+976,"top CU func_choose i0 lut", false,-1, 191,0);
        tracep->declBus(c+982,"top CU func_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+19+i*1,"top CU func_choose i0 pair_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+31+i*1,"top CU func_choose i0 key_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+43+i*1,"top CU func_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+865,"top CU func_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+866,"top CU func_choose i0 hit", false,-1);
        tracep->declBus(c+983,"top CU func_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+946,"top CU CU_ImmType NR_KEY", false,-1, 31,0);
        tracep->declBus(c+946,"top CU CU_ImmType KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+951,"top CU CU_ImmType DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+86,"top CU CU_ImmType out", false,-1, 2,0);
        tracep->declBus(c+867,"top CU CU_ImmType key", false,-1, 4,0);
        tracep->declBus(c+943,"top CU CU_ImmType default_out", false,-1, 2,0);
        tracep->declQuad(c+984,"top CU CU_ImmType lut", false,-1, 39,0);
        tracep->declBus(c+946,"top CU CU_ImmType i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+946,"top CU CU_ImmType i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+951,"top CU CU_ImmType i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+948,"top CU CU_ImmType i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+86,"top CU CU_ImmType i0 out", false,-1, 2,0);
        tracep->declBus(c+867,"top CU CU_ImmType i0 key", false,-1, 4,0);
        tracep->declBus(c+943,"top CU CU_ImmType i0 default_out", false,-1, 2,0);
        tracep->declQuad(c+984,"top CU CU_ImmType i0 lut", false,-1, 39,0);
        tracep->declBus(c+986,"top CU CU_ImmType i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+55+i*1,"top CU CU_ImmType i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+60+i*1,"top CU CU_ImmType i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+65+i*1,"top CU CU_ImmType i0 data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+868,"top CU CU_ImmType i0 lut_out", false,-1, 2,0);
        tracep->declBit(c+869,"top CU CU_ImmType i0 hit", false,-1);
        tracep->declBus(c+953,"top CU CU_ImmType i0 i", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<6>/*191:0*/ __Vtemp1373;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+2,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+3,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+4,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[3]),10);
        tracep->fullSData(oldp+5,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[4]),10);
        tracep->fullSData(oldp+6,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[5]),10);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[0]),6);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[1]),6);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[2]),6);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[3]),6);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[4]),6);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[5]),6);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[3]),4);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[4]),4);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[5]),4);
        tracep->fullSData(oldp+19,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[0]),16);
        tracep->fullSData(oldp+20,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[1]),16);
        tracep->fullSData(oldp+21,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[2]),16);
        tracep->fullSData(oldp+22,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[3]),16);
        tracep->fullSData(oldp+23,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[4]),16);
        tracep->fullSData(oldp+24,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[5]),16);
        tracep->fullSData(oldp+25,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[6]),16);
        tracep->fullSData(oldp+26,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[7]),16);
        tracep->fullSData(oldp+27,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[8]),16);
        tracep->fullSData(oldp+28,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[9]),16);
        tracep->fullSData(oldp+29,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[10]),16);
        tracep->fullSData(oldp+30,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[11]),16);
        tracep->fullSData(oldp+31,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[0]),12);
        tracep->fullSData(oldp+32,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[1]),12);
        tracep->fullSData(oldp+33,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[2]),12);
        tracep->fullSData(oldp+34,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[3]),12);
        tracep->fullSData(oldp+35,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[4]),12);
        tracep->fullSData(oldp+36,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[5]),12);
        tracep->fullSData(oldp+37,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[6]),12);
        tracep->fullSData(oldp+38,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[7]),12);
        tracep->fullSData(oldp+39,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[8]),12);
        tracep->fullSData(oldp+40,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[9]),12);
        tracep->fullSData(oldp+41,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[10]),12);
        tracep->fullSData(oldp+42,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[11]),12);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[3]),4);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[4]),4);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[5]),4);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[6]),4);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[7]),4);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[8]),4);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[9]),4);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[10]),4);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[11]),4);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[3]),8);
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[4]),8);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[0]),3);
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[1]),3);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[2]),3);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[3]),3);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[4]),3);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__PC_TO_IFU),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__INSTR_TO_IFU),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__INSTR_ADDR),64);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__READ_INSTR_START));
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__READ_INSTR_FINISH));
        tracep->fullQData(oldp+78,((4ULL + vlSelf->top__DOT__PC_TO_IFU)),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__ALU_Number_1),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__ALu_Number_2),64);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__ALU_Control),4);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__ALU_Inside_Control),4);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__SEXT_Control),3);
        tracep->fullBit(oldp+87,((1U & (~ ((((((((((IData)(vlSelf->top__DOT__CU__DOT__bne) 
                                                   | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                                  | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                                 | (IData)(vlSelf->top__DOT__CU__DOT__blt)) 
                                                | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                               | (IData)(vlSelf->top__DOT__CU__DOT__bgeu)) 
                                              | (IData)(vlSelf->top__DOT__CU__DOT__sd)) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__sh))))));
        tracep->fullBit(oldp+88,((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__lw)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__lbu)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__lh)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__lhu)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__lb)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__lwu)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__sd)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                  | (IData)(vlSelf->top__DOT__CU__DOT__sh))));
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__MEM_Ctrl),4);
        tracep->fullBit(oldp+90,((((((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
                                               | (IData)(vlSelf->top__DOT__CU__DOT__lhu)) 
                                              | (IData)(vlSelf->top__DOT__CU__DOT__lw)) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__lbu)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__lb)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__lwu)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__lw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__sh)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__lh)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__sd)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                  | (IData)(vlSelf->top__DOT__CU__DOT__sh))));
        tracep->fullIData(oldp+91,((IData)(vlSelf->top__DOT__INSTR_TO_IFU)),32);
        tracep->fullCData(oldp+92,(((IData)(vlSelf->top__DOT__READ_INSTR_START) 
                                    << 1U)),2);
        tracep->fullCData(oldp+93,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel),2);
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release));
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_addr),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data),64);
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req));
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish));
        tracep->fullCData(oldp+101,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state),3);
        tracep->fullCData(oldp+102,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state),3);
        tracep->fullCData(oldp+103,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri),2);
        tracep->fullCData(oldp+104,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot),2);
        tracep->fullCData(oldp+105,(((~ ((4U | (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot)) 
                                         - (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri))) 
                                     & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot))),3);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR),64);
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY));
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf),64);
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_RESP),2);
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state));
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__reg_file__DOT__Zero),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__reg_file__DOT__ra),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__reg_file__DOT__sp),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__reg_file__DOT__gp),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__reg_file__DOT__tp),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__reg_file__DOT__t0),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__reg_file__DOT__t1),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__reg_file__DOT__t2),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__reg_file__DOT__s0),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__reg_file__DOT__s1),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__reg_file__DOT__a0),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__reg_file__DOT__a1),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__reg_file__DOT__a2),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__reg_file__DOT__a3),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__reg_file__DOT__a4),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__reg_file__DOT__a5),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__reg_file__DOT__a6),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__reg_file__DOT__a7),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__reg_file__DOT__s2),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__reg_file__DOT__s3),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__reg_file__DOT__s4),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__reg_file__DOT__s5),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__reg_file__DOT__s6),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__reg_file__DOT__s7),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__reg_file__DOT__s8),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__reg_file__DOT__s9),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__reg_file__DOT__s10),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__reg_file__DOT__s11),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__reg_file__DOT__t3),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__reg_file__DOT__t4),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__reg_file__DOT__t5),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__reg_file__DOT__t6),64);
        tracep->fullWData(oldp+182,(vlSelf->top__DOT__reg_file__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
        tracep->fullWData(oldp+251,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+254,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+257,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+260,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+263,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+266,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+269,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+272,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+275,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+278,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+281,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+284,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+287,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+290,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+293,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+296,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+299,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+302,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+305,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+308,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+311,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+314,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+317,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+320,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+323,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+326,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+329,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+332,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+335,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+338,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+341,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullWData(oldp+344,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
        tracep->fullCData(oldp+347,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+348,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+349,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+350,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+351,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+352,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+353,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+354,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+355,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+356,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+357,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+358,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+359,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+360,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+361,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+362,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+363,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+364,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+365,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+366,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+367,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+368,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+369,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+370,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+371,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+372,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+373,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+374,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+375,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+376,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+377,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
        tracep->fullCData(oldp+378,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+389,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+399,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+431,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+445,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+446,(vlSelf->top__DOT__reg_file__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
        tracep->fullWData(oldp+515,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+518,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+521,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+524,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+527,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+530,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+533,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+536,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+539,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+542,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+545,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+548,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+551,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+554,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+557,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+560,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+563,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+566,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+569,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+572,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+575,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+578,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+581,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+584,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+587,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+590,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+593,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+596,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+599,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+602,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+605,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullWData(oldp+608,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
        tracep->fullCData(oldp+611,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+612,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+613,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+614,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+615,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+616,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+617,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+618,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+619,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+620,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+621,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+622,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+623,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+624,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+625,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+626,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+627,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+628,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+629,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+630,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+631,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+632,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+633,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+634,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+635,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+636,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+637,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+638,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+639,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+640,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+641,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
        tracep->fullCData(oldp+642,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
        tracep->fullQData(oldp+643,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+645,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+649,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+651,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+657,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+659,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+661,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+663,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+665,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+667,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+669,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+671,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+673,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+675,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+677,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+679,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+681,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+683,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+685,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+687,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+689,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+691,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+693,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+695,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+697,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+699,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+701,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+703,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+705,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
        tracep->fullQData(oldp+707,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+709,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+710,(vlSelf->top__DOT__sign_extend__DOT__immS),12);
        tracep->fullIData(oldp+711,(vlSelf->top__DOT__sign_extend__DOT__immJ),21);
        tracep->fullSData(oldp+712,(vlSelf->top__DOT__sign_extend__DOT__immB),13);
        tracep->fullWData(oldp+713,(vlSelf->top__DOT__sign_extend__DOT____Vcellinp__SEXT____pinNumber4),335);
        tracep->fullWData(oldp+724,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+727,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+730,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+733,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+736,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+739,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+740,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+741,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+742,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+743,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
        tracep->fullQData(oldp+744,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+746,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+748,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+750,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+752,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+754,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+756,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+757,(vlSelf->top__DOT____Vcellinp__MUX_REG1_PC____pinNumber4),130);
        tracep->fullWData(oldp+762,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+765,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+768,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+769,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+770,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+772,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+774,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+776,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+777,(vlSelf->top__DOT____Vcellinp__MUX_REG2_SEXT____pinNumber4),130);
        tracep->fullWData(oldp+782,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+785,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+788,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+789,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+790,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+792,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+794,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+796,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+797,(vlSelf->top__DOT__CU__DOT__Match_31_25_0100000));
        tracep->fullBit(oldp+798,(vlSelf->top__DOT__CU__DOT__addi));
        tracep->fullBit(oldp+799,(vlSelf->top__DOT__CU__DOT__addiw));
        tracep->fullBit(oldp+800,(vlSelf->top__DOT__CU__DOT__addw));
        tracep->fullBit(oldp+801,(vlSelf->top__DOT__CU__DOT__subw));
        tracep->fullBit(oldp+802,(vlSelf->top__DOT__CU__DOT__add));
        tracep->fullBit(oldp+803,(vlSelf->top__DOT__CU__DOT__sub));
        tracep->fullBit(oldp+804,(vlSelf->top__DOT__CU__DOT__mulw));
        tracep->fullBit(oldp+805,(vlSelf->top__DOT__CU__DOT__divw));
        tracep->fullBit(oldp+806,(vlSelf->top__DOT__CU__DOT__mul));
        tracep->fullBit(oldp+807,(vlSelf->top__DOT__CU__DOT__divu));
        tracep->fullBit(oldp+808,(vlSelf->top__DOT__CU__DOT__divuw));
        tracep->fullBit(oldp+809,(vlSelf->top__DOT__CU__DOT__remw));
        tracep->fullBit(oldp+810,(vlSelf->top__DOT__CU__DOT__remu));
        tracep->fullBit(oldp+811,(vlSelf->top__DOT__CU__DOT__remuw));
        tracep->fullBit(oldp+812,(vlSelf->top__DOT__CU__DOT__sltiu));
        tracep->fullBit(oldp+813,(vlSelf->top__DOT__CU__DOT__sltu));
        tracep->fullBit(oldp+814,(vlSelf->top__DOT__CU__DOT__slt));
        tracep->fullBit(oldp+815,(vlSelf->top__DOT__CU__DOT__slti));
        tracep->fullBit(oldp+816,(vlSelf->top__DOT__CU__DOT__sraw));
        tracep->fullBit(oldp+817,(vlSelf->top__DOT__CU__DOT__sllw));
        tracep->fullBit(oldp+818,(vlSelf->top__DOT__CU__DOT__srlw));
        tracep->fullBit(oldp+819,(vlSelf->top__DOT__CU__DOT__slli));
        tracep->fullBit(oldp+820,(vlSelf->top__DOT__CU__DOT__srli));
        tracep->fullBit(oldp+821,(vlSelf->top__DOT__CU__DOT__srai));
        tracep->fullBit(oldp+822,(vlSelf->top__DOT__CU__DOT__srliw));
        tracep->fullBit(oldp+823,(vlSelf->top__DOT__CU__DOT__slliw));
        tracep->fullBit(oldp+824,(vlSelf->top__DOT__CU__DOT__sraiw));
        tracep->fullBit(oldp+825,(vlSelf->top__DOT__CU__DOT__sll));
        tracep->fullBit(oldp+826,(vlSelf->top__DOT__CU__DOT__ld));
        tracep->fullBit(oldp+827,(vlSelf->top__DOT__CU__DOT__lw));
        tracep->fullBit(oldp+828,(vlSelf->top__DOT__CU__DOT__lbu));
        tracep->fullBit(oldp+829,(vlSelf->top__DOT__CU__DOT__lh));
        tracep->fullBit(oldp+830,(vlSelf->top__DOT__CU__DOT__lhu));
        tracep->fullBit(oldp+831,(vlSelf->top__DOT__CU__DOT__sd));
        tracep->fullBit(oldp+832,(vlSelf->top__DOT__CU__DOT__sw));
        tracep->fullBit(oldp+833,(vlSelf->top__DOT__CU__DOT__sb));
        tracep->fullBit(oldp+834,(vlSelf->top__DOT__CU__DOT__sh));
        tracep->fullBit(oldp+835,(vlSelf->top__DOT__CU__DOT__lb));
        tracep->fullBit(oldp+836,(vlSelf->top__DOT__CU__DOT__lwu));
        tracep->fullBit(oldp+837,(vlSelf->top__DOT__CU__DOT__andi));
        tracep->fullBit(oldp+838,(vlSelf->top__DOT__CU__DOT__xori));
        tracep->fullBit(oldp+839,(vlSelf->top__DOT__CU__DOT__ori));
        tracep->fullBit(oldp+840,(vlSelf->top__DOT__CU__DOT__bne));
        tracep->fullBit(oldp+841,(vlSelf->top__DOT__CU__DOT__beq));
        tracep->fullBit(oldp+842,(vlSelf->top__DOT__CU__DOT__bge));
        tracep->fullBit(oldp+843,(vlSelf->top__DOT__CU__DOT__blt));
        tracep->fullBit(oldp+844,(vlSelf->top__DOT__CU__DOT__bltu));
        tracep->fullBit(oldp+845,(vlSelf->top__DOT__CU__DOT__bgeu));
        tracep->fullBit(oldp+846,(vlSelf->top__DOT__CU__DOT__jalr));
        tracep->fullBit(oldp+847,(vlSelf->top__DOT__CU__DOT__csrrw));
        tracep->fullBit(oldp+848,(vlSelf->top__DOT__CU__DOT__csrrs));
        tracep->fullBit(oldp+849,(((((IData)(vlSelf->top__DOT__CU__DOT__sd) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__sh))));
        tracep->fullBit(oldp+850,(((((((IData)(vlSelf->top__DOT__CU__DOT__bne) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__blt)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__bgeu))));
        tracep->fullBit(oldp+851,((((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__addiw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__addw)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__subw)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__add)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__sub)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__jalr))));
        tracep->fullBit(oldp+852,(((IData)(vlSelf->top__DOT__CU__DOT__mulw) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__mul))));
        tracep->fullBit(oldp+853,(((((((IData)(vlSelf->top__DOT__CU__DOT__divw) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__remw)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__divu)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__divuw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__remu)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__remuw))));
        tracep->fullBit(oldp+854,(((((IData)(vlSelf->top__DOT__CU__DOT__sltiu) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__sltu)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__slt)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__slti))));
        tracep->fullBit(oldp+855,(((((((((((IData)(vlSelf->top__DOT__CU__DOT__sraw) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__sllw)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__srlw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__slli)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__srli)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__srai)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__srliw)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__slliw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__sraiw)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__sll))));
        tracep->fullBit(oldp+856,((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__lw)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__lbu)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__lh)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__lhu)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__sd)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__sh)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__lb)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__lwu))));
        tracep->fullBit(oldp+857,(((((((IData)(vlSelf->top__DOT__CU__DOT__andi) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__xori)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT___or)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT___and)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT___xor)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__ori))));
        tracep->fullBit(oldp+858,((((((((((IData)(vlSelf->top__DOT__CU__DOT__sub) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__mul)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__remw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__xori)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__srliw)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__srlw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT___xor)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__csrrs))));
        tracep->fullBit(oldp+859,((((((((IData)(vlSelf->top__DOT__CU__DOT__sltiu) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__sltu)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__slli)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__jalr)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__remu)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__sll))));
        tracep->fullBit(oldp+860,((((IData)(vlSelf->top__DOT__CU__DOT__srai) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__remuw)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__bgeu))));
        tracep->fullSData(oldp+861,(vlSelf->top__DOT__CU__DOT__func_signal),12);
        tracep->fullCData(oldp+862,(vlSelf->top__DOT__CU__DOT__ALU_inside_signal),6);
        tracep->fullCData(oldp+863,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+864,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+865,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+866,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+867,(vlSelf->top__DOT__CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
        tracep->fullCData(oldp+868,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
        tracep->fullBit(oldp+869,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+870,(vlSelf->clk));
        tracep->fullBit(oldp+871,(vlSelf->rst));
        tracep->fullQData(oldp+872,(vlSelf->READ_DATA),64);
        tracep->fullBit(oldp+874,(vlSelf->READ_FINISH));
        tracep->fullBit(oldp+875,(vlSelf->READ_SIGNAL));
        tracep->fullQData(oldp+876,(vlSelf->READ_ADDR),64);
        tracep->fullBit(oldp+878,(vlSelf->ec_finish));
        tracep->fullQData(oldp+879,(vlSelf->ex_data),64);
        tracep->fullQData(oldp+881,(vlSelf->RS1_Reg),64);
        tracep->fullQData(oldp+883,(vlSelf->RS2_Reg),64);
        tracep->fullQData(oldp+885,(vlSelf->SEXT_out),64);
        tracep->fullBit(oldp+887,(vlSelf->INSTR_ARRIVE));
        tracep->fullBit(oldp+888,(vlSelf->INSTR_Complete));
        tracep->fullIData(oldp+889,(vlSelf->INSTR_DATA),32);
        tracep->fullBit(oldp+890,(((0x17U == (0x7fU 
                                              & vlSelf->INSTR_DATA)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->INSTR_DATA)))));
        tracep->fullBit(oldp+891,((((((((((((((((((
                                                   (((((((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
                                                             | (IData)(vlSelf->top__DOT__CU__DOT__addiw)) 
                                                            | (IData)(vlSelf->top__DOT__CU__DOT__sltiu)) 
                                                           | (IData)(vlSelf->top__DOT__CU__DOT__slli)) 
                                                          | (IData)(vlSelf->top__DOT__CU__DOT__srli)) 
                                                         | (IData)(vlSelf->top__DOT__CU__DOT__srai)) 
                                                        | (IData)(vlSelf->top__DOT__CU__DOT__srliw)) 
                                                       | (IData)(vlSelf->top__DOT__CU__DOT__slliw)) 
                                                      | (IData)(vlSelf->top__DOT__CU__DOT__sraiw)) 
                                                     | (IData)(vlSelf->top__DOT__CU__DOT__ld)) 
                                                    | (IData)(vlSelf->top__DOT__CU__DOT__lw)) 
                                                   | (IData)(vlSelf->top__DOT__CU__DOT__lbu)) 
                                                  | (IData)(vlSelf->top__DOT__CU__DOT__lh)) 
                                                 | (IData)(vlSelf->top__DOT__CU__DOT__lhu)) 
                                                | (IData)(vlSelf->top__DOT__CU__DOT__sd)) 
                                               | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                              | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT__sh)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__andi)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__xori)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlSelf->INSTR_DATA))) 
                                         | (0x37U == 
                                            (0x7fU 
                                             & vlSelf->INSTR_DATA))) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->INSTR_DATA))) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__jalr)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__slti)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__lb)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__lwu)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__ori))));
        tracep->fullBit(oldp+892,(((0x6fU == (0x7fU 
                                              & vlSelf->INSTR_DATA)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__jalr))));
        tracep->fullCData(oldp+893,((((IData)(vlSelf->top__DOT__CU__DOT__jalr) 
                                      << 1U) | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->INSTR_DATA)))),2);
        tracep->fullCData(oldp+894,((0x1fU & (vlSelf->INSTR_DATA 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+895,((0x1fU & (vlSelf->INSTR_DATA 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+896,((0x1fU & (vlSelf->INSTR_DATA 
                                              >> 7U))),5);
        tracep->fullSData(oldp+897,((vlSelf->INSTR_DATA 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+898,((0xfffff000U & vlSelf->INSTR_DATA)),32);
        tracep->fullCData(oldp+899,((0xffU & (- (IData)(
                                                        (0x100073U 
                                                         == vlSelf->INSTR_DATA))))),8);
        tracep->fullCData(oldp+900,((0x7fU & vlSelf->INSTR_DATA)),7);
        tracep->fullCData(oldp+901,((7U & (vlSelf->INSTR_DATA 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+902,((vlSelf->INSTR_DATA 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+903,((vlSelf->INSTR_DATA 
                                     >> 0x1aU)),6);
        tracep->fullBit(oldp+904,((0x13U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+905,((0x3bU == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+906,((0x33U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+907,((0x1bU == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+908,((3U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+909,((0x23U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+910,((0x63U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+911,((0x6fU == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+912,((0x67U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+913,((0x17U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+914,((0x37U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+915,((0x73U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+916,((0U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+917,((4U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+918,((6U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+919,((3U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+920,((2U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+921,((5U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+922,((1U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+923,((7U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+924,((0U == (vlSelf->INSTR_DATA 
                                          >> 0x19U))));
        tracep->fullBit(oldp+925,((1U == (vlSelf->INSTR_DATA 
                                          >> 0x19U))));
        tracep->fullBit(oldp+926,((0U == (vlSelf->INSTR_DATA 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+927,((0x10U == (vlSelf->INSTR_DATA 
                                             >> 0x1aU))));
        tracep->fullBit(oldp+928,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->INSTR_DATA))) 
                                   & (1U == (vlSelf->INSTR_DATA 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+929,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->INSTR_DATA))) 
                                   & (0U == (vlSelf->INSTR_DATA 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+930,((0x100073U == vlSelf->INSTR_DATA)));
        tracep->fullBit(oldp+931,((0x73U == vlSelf->INSTR_DATA)));
        tracep->fullBit(oldp+932,((0x30200073U == vlSelf->INSTR_DATA)));
        tracep->fullBit(oldp+933,((((((((((((((((((
                                                   (((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
                                                         | (IData)(vlSelf->top__DOT__CU__DOT__addiw)) 
                                                        | (IData)(vlSelf->top__DOT__CU__DOT__sltiu)) 
                                                       | (IData)(vlSelf->top__DOT__CU__DOT__slli)) 
                                                      | (IData)(vlSelf->top__DOT__CU__DOT__srli)) 
                                                     | (IData)(vlSelf->top__DOT__CU__DOT__srai)) 
                                                    | (IData)(vlSelf->top__DOT__CU__DOT__srliw)) 
                                                   | (IData)(vlSelf->top__DOT__CU__DOT__slliw)) 
                                                  | (IData)(vlSelf->top__DOT__CU__DOT__sraiw)) 
                                                 | (IData)(vlSelf->top__DOT__CU__DOT__ld)) 
                                                | (IData)(vlSelf->top__DOT__CU__DOT__lw)) 
                                               | (IData)(vlSelf->top__DOT__CU__DOT__lbu)) 
                                              | (IData)(vlSelf->top__DOT__CU__DOT__lh)) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT__lhu)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__andi)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__xori)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__jalr)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__slti)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__lb)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__lwu)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__ori)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__csrrw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__csrrs)) 
                                   | (0x73U == vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+934,(((0x17U == (0x7fU 
                                              & vlSelf->INSTR_DATA)) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->INSTR_DATA)))));
        tracep->fullBit(oldp+935,((((((((((((((((((
                                                   (((((((IData)(vlSelf->top__DOT__CU__DOT__addw) 
                                                         | (IData)(vlSelf->top__DOT__CU__DOT__subw)) 
                                                        | (IData)(vlSelf->top__DOT__CU__DOT__add)) 
                                                       | (IData)(vlSelf->top__DOT__CU__DOT__sub)) 
                                                      | (IData)(vlSelf->top__DOT__CU__DOT__mulw)) 
                                                     | (IData)(vlSelf->top__DOT__CU__DOT__divw)) 
                                                    | (IData)(vlSelf->top__DOT__CU__DOT__mul)) 
                                                   | (IData)(vlSelf->top__DOT__CU__DOT__remw)) 
                                                  | (IData)(vlSelf->top__DOT__CU__DOT__sltu)) 
                                                 | (IData)(vlSelf->top__DOT__CU__DOT__slt)) 
                                                | (IData)(vlSelf->top__DOT__CU__DOT__sraw)) 
                                               | (IData)(vlSelf->top__DOT__CU__DOT__sllw)) 
                                              | (IData)(vlSelf->top__DOT__CU__DOT__srlw)) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT___or)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT___and)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__divu)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__divuw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__remu)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__remuw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__sll)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT___xor)) 
                                     | ((IData)((0x6033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->INSTR_DATA))) 
                                        & (1U == (vlSelf->INSTR_DATA 
                                                  >> 0x19U)))) 
                                    | ((IData)((0x5033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->INSTR_DATA))) 
                                       & (0U == (vlSelf->INSTR_DATA 
                                                 >> 0x19U)))) 
                                   | (0x30200073U == vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+936,(((((IData)(vlSelf->top__DOT__CU__DOT__csrrw) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__csrrs)) 
                                    | (0x73U == vlSelf->INSTR_DATA)) 
                                   | (0x30200073U == vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+937,((((((((((((((((((
                                                   ((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
                                                        | (IData)(vlSelf->top__DOT__CU__DOT__add)) 
                                                       | (IData)(vlSelf->top__DOT__CU__DOT__mulw)) 
                                                      | (IData)(vlSelf->top__DOT__CU__DOT__divw)) 
                                                     | (IData)(vlSelf->top__DOT__CU__DOT__sraw)) 
                                                    | (IData)(vlSelf->top__DOT__CU__DOT__sraiw)) 
                                                   | (IData)(vlSelf->top__DOT__CU__DOT__andi)) 
                                                  | (IData)(vlSelf->top__DOT__CU__DOT___and)) 
                                                 | (IData)(vlSelf->top__DOT__CU__DOT__bne)) 
                                                | (IData)(vlSelf->top__DOT__CU__DOT__ld)) 
                                               | (IData)(vlSelf->top__DOT__CU__DOT__lw)) 
                                              | (IData)(vlSelf->top__DOT__CU__DOT__lbu)) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT__lh)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__lhu)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__sd)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__sh)) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->INSTR_DATA))) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->INSTR_DATA))) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__lb)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__lwu)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__csrrw))));
        tracep->fullBit(oldp+938,(((((((((((IData)(vlSelf->top__DOT__CU__DOT__addiw) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__add)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__sllw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__slliw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT___or)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__addw)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__divu)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__ori)) 
                                   | (0x73U == vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+939,((((((((IData)(vlSelf->top__DOT__CU__DOT__subw) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__slt)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__srli)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__blt)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__divuw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__slti)) 
                                   | (0x30200073U == vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+940,(0U));
        tracep->fullQData(oldp+941,(0ULL),64);
        tracep->fullCData(oldp+943,(1U),3);
        tracep->fullCData(oldp+944,(2U),3);
        tracep->fullIData(oldp+945,(0x20U),32);
        tracep->fullIData(oldp+946,(5U),32);
        tracep->fullIData(oldp+947,(0x40U),32);
        tracep->fullIData(oldp+948,(1U),32);
        tracep->fullIData(oldp+949,(0x45U),32);
        tracep->fullIData(oldp+950,(0x20U),32);
        tracep->fullIData(oldp+951,(3U),32);
        tracep->fullIData(oldp+952,(0x43U),32);
        tracep->fullIData(oldp+953,(5U),32);
        tracep->fullIData(oldp+954,(2U),32);
        tracep->fullIData(oldp+955,(0x41U),32);
        tracep->fullIData(oldp+956,(2U),32);
        tracep->fullBit(oldp+957,(1U));
        tracep->fullCData(oldp+958,(3U),3);
        tracep->fullCData(oldp+959,(4U),3);
        tracep->fullCData(oldp+960,(5U),3);
        tracep->fullCData(oldp+961,(0U),4);
        tracep->fullCData(oldp+962,(1U),4);
        tracep->fullCData(oldp+963,(2U),4);
        tracep->fullCData(oldp+964,(3U),4);
        tracep->fullCData(oldp+965,(4U),4);
        tracep->fullCData(oldp+966,(5U),4);
        tracep->fullCData(oldp+967,(8U),4);
        tracep->fullIData(oldp+968,(6U),32);
        tracep->fullIData(oldp+969,(4U),32);
        tracep->fullCData(oldp+970,(0xfU),4);
        tracep->fullQData(oldp+971,(0x801012084309015ULL),60);
        tracep->fullIData(oldp+973,(0xaU),32);
        tracep->fullIData(oldp+974,(6U),32);
        tracep->fullIData(oldp+975,(0xcU),32);
        __Vtemp1373[0U] = 0x270028U;
        __Vtemp1373[1U] = 0x800046U;
        __Vtemp1373[2U] = 0x2040102U;
        __Vtemp1373[3U] = 0x8010400U;
        __Vtemp1373[4U] = 0x20031002U;
        __Vtemp1373[5U] = 0x80004005U;
        tracep->fullWData(oldp+976,(__Vtemp1373),192);
        tracep->fullIData(oldp+982,(0x10U),32);
        tracep->fullIData(oldp+983,(0xcU),32);
        tracep->fullQData(oldp+984,(0x814223140dULL),40);
        tracep->fullIData(oldp+986,(8U),32);
    }
}
