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
        tracep->declBit(c+1174,"clk", false,-1);
        tracep->declBit(c+1175,"rst", false,-1);
        tracep->declQuad(c+1176,"READ_DATA", false,-1, 63,0);
        tracep->declBit(c+1178,"READ_FINISH", false,-1);
        tracep->declBit(c+1179,"READ_SIGNAL", false,-1);
        tracep->declQuad(c+1180,"READ_ADDR", false,-1, 63,0);
        tracep->declBit(c+1182,"ec_finish", false,-1);
        tracep->declQuad(c+1183,"ex_data", false,-1, 63,0);
        tracep->declBit(c+1185,"INSTR_ARRIVE", false,-1);
        tracep->declBit(c+1186,"INSTR_Complete", false,-1);
        tracep->declBus(c+1187,"INSTR_DATA", false,-1, 31,0);
        tracep->declBit(c+1174,"top clk", false,-1);
        tracep->declBit(c+1175,"top rst", false,-1);
        tracep->declQuad(c+1176,"top READ_DATA", false,-1, 63,0);
        tracep->declBit(c+1178,"top READ_FINISH", false,-1);
        tracep->declBit(c+1179,"top READ_SIGNAL", false,-1);
        tracep->declQuad(c+1180,"top READ_ADDR", false,-1, 63,0);
        tracep->declBit(c+1182,"top ec_finish", false,-1);
        tracep->declQuad(c+1183,"top ex_data", false,-1, 63,0);
        tracep->declBit(c+1185,"top INSTR_ARRIVE", false,-1);
        tracep->declBit(c+1186,"top INSTR_Complete", false,-1);
        tracep->declBus(c+1187,"top INSTR_DATA", false,-1, 31,0);
        tracep->declQuad(c+74,"top PC_TO_IFU", false,-1, 63,0);
        tracep->declQuad(c+76,"top INSTR_TO_IFU", false,-1, 63,0);
        tracep->declQuad(c+78,"top INSTR_ADDR", false,-1, 63,0);
        tracep->declBit(c+80,"top READ_INSTR_START", false,-1);
        tracep->declBit(c+81,"top READ_INSTR_FINISH", false,-1);
        tracep->declQuad(c+82,"top RS1_Reg", false,-1, 63,0);
        tracep->declQuad(c+84,"top RS2_Reg", false,-1, 63,0);
        tracep->declQuad(c+86,"top SEXT_out", false,-1, 63,0);
        tracep->declQuad(c+88,"top PC_NEXT", false,-1, 63,0);
        tracep->declQuad(c+90,"top ALU_Number_1", false,-1, 63,0);
        tracep->declQuad(c+92,"top ALU_Number_2", false,-1, 63,0);
        tracep->declQuad(c+94,"top ALU_Result", false,-1, 63,0);
        tracep->declBus(c+96,"top ALU_Control", false,-1, 3,0);
        tracep->declBus(c+97,"top ALU_Inside_Control", false,-1, 3,0);
        tracep->declBus(c+98,"top SEXT_Control", false,-1, 2,0);
        tracep->declBit(c+99,"top RegWriteEnable", false,-1);
        tracep->declBit(c+1188,"top MUX_RS1_PC", false,-1);
        tracep->declBit(c+1189,"top MUX_RS2_Imm", false,-1);
        tracep->declBit(c+100,"top MUX_ALU_MEM", false,-1);
        tracep->declBit(c+1190,"top MUX_ALU_NPC_In", false,-1);
        tracep->declBus(c+1191,"top NPC_Branch_Jump", false,-1, 1,0);
        tracep->declBus(c+101,"top MEM_Ctrl", false,-1, 3,0);
        tracep->declBit(c+102,"top MEM_Enable", false,-1);
        tracep->declBus(c+103,"top CSR_Read_Addr", false,-1, 11,0);
        tracep->declQuad(c+104,"top CSR_Read_Data", false,-1, 63,0);
        tracep->declBus(c+106,"top CSR_Write_Addr", false,-1, 11,0);
        tracep->declQuad(c+107,"top CSR_Write_Data", false,-1, 63,0);
        tracep->declBit(c+1238,"top Write_En", false,-1);
        tracep->declQuad(c+109,"top mcause_Write_Data", false,-1, 63,0);
        tracep->declQuad(c+111,"top mcause_Read_Data", false,-1, 63,0);
        tracep->declBit(c+1,"top mcause_En", false,-1);
        tracep->declQuad(c+113,"top mepc_Write_Data", false,-1, 63,0);
        tracep->declQuad(c+115,"top mepc_Read_Data", false,-1, 63,0);
        tracep->declBit(c+117,"top mepc_En", false,-1);
        tracep->declQuad(c+2,"top mtvec_Write_Data", false,-1, 63,0);
        tracep->declQuad(c+118,"top mtvec_Read_Data", false,-1, 63,0);
        tracep->declBit(c+4,"top mtvec_En", false,-1);
        tracep->declBit(c+1174,"top pc clk", false,-1);
        tracep->declBit(c+1175,"top pc rst", false,-1);
        tracep->declBit(c+1186,"top pc enable", false,-1);
        tracep->declQuad(c+88,"top pc PC_Next", false,-1, 63,0);
        tracep->declQuad(c+74,"top pc PC", false,-1, 63,0);
        tracep->declQuad(c+74,"top pc_adder PC", false,-1, 63,0);
        tracep->declQuad(c+88,"top pc_adder PC_Next", false,-1, 63,0);
        tracep->declBit(c+1174,"top ifu clk", false,-1);
        tracep->declBit(c+1175,"top ifu rst", false,-1);
        tracep->declQuad(c+74,"top ifu PC_IN", false,-1, 63,0);
        tracep->declBus(c+1187,"top ifu INSTR", false,-1, 31,0);
        tracep->declBit(c+80,"top ifu read_instr_start", false,-1);
        tracep->declBit(c+81,"top ifu read_instr_finish", false,-1);
        tracep->declBit(c+1185,"top ifu instr_arrive", false,-1);
        tracep->declBit(c+1186,"top ifu instr_ex_complete", false,-1);
        tracep->declQuad(c+78,"top ifu PC_addr", false,-1, 63,0);
        tracep->declBus(c+120,"top ifu INSTR_READ", false,-1, 31,0);
        tracep->declBit(c+1174,"top axi4_read_with_arbiter CLK", false,-1);
        tracep->declBit(c+1175,"top axi4_read_with_arbiter RST", false,-1);
        tracep->declBit(c+80,"top axi4_read_with_arbiter read_req_instr", false,-1);
        tracep->declBit(c+1239,"top axi4_read_with_arbiter read_req_ex", false,-1);
        tracep->declBit(c+81,"top axi4_read_with_arbiter instr_finish", false,-1);
        tracep->declBit(c+1182,"top axi4_read_with_arbiter ex_finish", false,-1);
        tracep->declQuad(c+78,"top axi4_read_with_arbiter instr_addr", false,-1, 63,0);
        tracep->declQuad(c+1240,"top axi4_read_with_arbiter ex_addr", false,-1, 63,0);
        tracep->declQuad(c+76,"top axi4_read_with_arbiter instr_data", false,-1, 63,0);
        tracep->declQuad(c+1183,"top axi4_read_with_arbiter ex_data", false,-1, 63,0);
        tracep->declBit(c+1179,"top axi4_read_with_arbiter Read_SIGNAL", false,-1);
        tracep->declQuad(c+1180,"top axi4_read_with_arbiter Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+1178,"top axi4_read_with_arbiter DATA_ARRIVE", false,-1);
        tracep->declQuad(c+1176,"top axi4_read_with_arbiter DATA_OUTSIDE", false,-1, 63,0);
        tracep->declBus(c+121,"top axi4_read_with_arbiter req_combine", false,-1, 1,0);
        tracep->declBus(c+122,"top axi4_read_with_arbiter choose_channel", false,-1, 1,0);
        tracep->declBit(c+123,"top axi4_read_with_arbiter aribter_release", false,-1);
        tracep->declQuad(c+124,"top axi4_read_with_arbiter read_addr", false,-1, 63,0);
        tracep->declQuad(c+126,"top axi4_read_with_arbiter read_data", false,-1, 63,0);
        tracep->declBit(c+128,"top axi4_read_with_arbiter read_req", false,-1);
        tracep->declBit(c+129,"top axi4_read_with_arbiter read_finish", false,-1);
        tracep->declBit(c+1174,"top axi4_read_with_arbiter rr_arbiter CLK", false,-1);
        tracep->declBit(c+1175,"top axi4_read_with_arbiter rr_arbiter RST", false,-1);
        tracep->declBus(c+121,"top axi4_read_with_arbiter rr_arbiter req", false,-1, 1,0);
        tracep->declBit(c+123,"top axi4_read_with_arbiter rr_arbiter reg_release", false,-1);
        tracep->declBus(c+122,"top axi4_read_with_arbiter rr_arbiter grant", false,-1, 1,0);
        tracep->declBus(c+1242,"top axi4_read_with_arbiter rr_arbiter IDLE", false,-1, 2,0);
        tracep->declBus(c+1243,"top axi4_read_with_arbiter rr_arbiter Arbiter_State", false,-1, 2,0);
        tracep->declBus(c+130,"top axi4_read_with_arbiter rr_arbiter cur_state", false,-1, 2,0);
        tracep->declBus(c+131,"top axi4_read_with_arbiter rr_arbiter next_state", false,-1, 2,0);
        tracep->declBus(c+132,"top axi4_read_with_arbiter rr_arbiter pri", false,-1, 1,0);
        tracep->declBus(c+133,"top axi4_read_with_arbiter rr_arbiter req_shot", false,-1, 1,0);
        tracep->declBus(c+134,"top axi4_read_with_arbiter rr_arbiter result_req", false,-1, 2,0);
        tracep->declBit(c+1174,"top axi4_read_with_arbiter AXI4_READ_MODUAL CLK", false,-1);
        tracep->declBit(c+1175,"top axi4_read_with_arbiter AXI4_READ_MODUAL RST", false,-1);
        tracep->declQuad(c+124,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_Addr", false,-1, 63,0);
        tracep->declBit(c+128,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_Request", false,-1);
        tracep->declBit(c+129,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_Finish", false,-1);
        tracep->declQuad(c+126,"top axi4_read_with_arbiter AXI4_READ_MODUAL Data_Out", false,-1, 63,0);
        tracep->declBit(c+1179,"top axi4_read_with_arbiter AXI4_READ_MODUAL Read_SIGNAL", false,-1);
        tracep->declQuad(c+1180,"top axi4_read_with_arbiter AXI4_READ_MODUAL Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+1178,"top axi4_read_with_arbiter AXI4_READ_MODUAL DATA_ARRIVE", false,-1);
        tracep->declQuad(c+1176,"top axi4_read_with_arbiter AXI4_READ_MODUAL DATA_OUTSIDE", false,-1, 63,0);
        tracep->declQuad(c+135,"top axi4_read_with_arbiter AXI4_READ_MODUAL AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+137,"top axi4_read_with_arbiter AXI4_READ_MODUAL AR_VALID", false,-1);
        tracep->declBit(c+138,"top axi4_read_with_arbiter AXI4_READ_MODUAL AR_READY", false,-1);
        tracep->declQuad(c+139,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_DATA", false,-1, 63,0);
        tracep->declBus(c+141,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_RESP", false,-1, 1,0);
        tracep->declBit(c+142,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_VALID", false,-1);
        tracep->declBit(c+143,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_READY", false,-1);
        tracep->declBit(c+1174,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master CLK", false,-1);
        tracep->declBit(c+1175,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master RST", false,-1);
        tracep->declQuad(c+135,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+137,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master AR_VALID", false,-1);
        tracep->declBit(c+138,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master AR_READY", false,-1);
        tracep->declQuad(c+139,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_DATA", false,-1, 63,0);
        tracep->declBus(c+141,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_RESP", false,-1, 1,0);
        tracep->declBit(c+142,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_VALID", false,-1);
        tracep->declBit(c+143,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_READY", false,-1);
        tracep->declQuad(c+124,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_Addr", false,-1, 63,0);
        tracep->declBit(c+128,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_Request", false,-1);
        tracep->declBit(c+129,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_Finish", false,-1);
        tracep->declQuad(c+126,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master Data_Out", false,-1, 63,0);
        tracep->declBit(c+144,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master lock_state", false,-1);
        tracep->declBit(c+1174,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave CLK", false,-1);
        tracep->declBit(c+1175,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave RST", false,-1);
        tracep->declQuad(c+135,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+137,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave AR_VALID", false,-1);
        tracep->declBit(c+138,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave AR_READY", false,-1);
        tracep->declQuad(c+139,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_DATA", false,-1, 63,0);
        tracep->declBus(c+141,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_RESP", false,-1, 1,0);
        tracep->declBit(c+142,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_VALID", false,-1);
        tracep->declBit(c+143,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_READY", false,-1);
        tracep->declBit(c+1179,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave Read_SIGNAL", false,-1);
        tracep->declQuad(c+1180,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+1178,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave DATA_ARRIVE", false,-1);
        tracep->declQuad(c+1176,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave DATA_OUTSIDE", false,-1, 63,0);
        tracep->declQuad(c+145,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave data_address", false,-1, 63,0);
        tracep->declQuad(c+139,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave data_buf", false,-1, 63,0);
        tracep->declBit(c+1174,"top reg_file clk", false,-1);
        tracep->declBit(c+1175,"top reg_file rst", false,-1);
        tracep->declBus(c+1192,"top reg_file RS1", false,-1, 4,0);
        tracep->declBus(c+1193,"top reg_file RS2", false,-1, 4,0);
        tracep->declBus(c+1194,"top reg_file RD", false,-1, 4,0);
        tracep->declQuad(c+1240,"top reg_file RD_Back", false,-1, 63,0);
        tracep->declBit(c+99,"top reg_file Enable_Control", false,-1);
        tracep->declQuad(c+82,"top reg_file RS1_Reg", false,-1, 63,0);
        tracep->declQuad(c+84,"top reg_file RS2_Reg", false,-1, 63,0);
        tracep->declQuad(c+147,"top reg_file Zero", false,-1, 63,0);
        tracep->declQuad(c+149,"top reg_file ra", false,-1, 63,0);
        tracep->declQuad(c+151,"top reg_file sp", false,-1, 63,0);
        tracep->declQuad(c+153,"top reg_file gp", false,-1, 63,0);
        tracep->declQuad(c+155,"top reg_file tp", false,-1, 63,0);
        tracep->declQuad(c+157,"top reg_file t0", false,-1, 63,0);
        tracep->declQuad(c+159,"top reg_file t1", false,-1, 63,0);
        tracep->declQuad(c+161,"top reg_file t2", false,-1, 63,0);
        tracep->declQuad(c+163,"top reg_file s0", false,-1, 63,0);
        tracep->declQuad(c+165,"top reg_file s1", false,-1, 63,0);
        tracep->declQuad(c+167,"top reg_file a0", false,-1, 63,0);
        tracep->declQuad(c+169,"top reg_file a1", false,-1, 63,0);
        tracep->declQuad(c+171,"top reg_file a2", false,-1, 63,0);
        tracep->declQuad(c+173,"top reg_file a3", false,-1, 63,0);
        tracep->declQuad(c+175,"top reg_file a4", false,-1, 63,0);
        tracep->declQuad(c+177,"top reg_file a5", false,-1, 63,0);
        tracep->declQuad(c+179,"top reg_file a6", false,-1, 63,0);
        tracep->declQuad(c+181,"top reg_file a7", false,-1, 63,0);
        tracep->declQuad(c+183,"top reg_file s2", false,-1, 63,0);
        tracep->declQuad(c+185,"top reg_file s3", false,-1, 63,0);
        tracep->declQuad(c+187,"top reg_file s4", false,-1, 63,0);
        tracep->declQuad(c+189,"top reg_file s5", false,-1, 63,0);
        tracep->declQuad(c+191,"top reg_file s6", false,-1, 63,0);
        tracep->declQuad(c+193,"top reg_file s7", false,-1, 63,0);
        tracep->declQuad(c+195,"top reg_file s8", false,-1, 63,0);
        tracep->declQuad(c+197,"top reg_file s9", false,-1, 63,0);
        tracep->declQuad(c+199,"top reg_file s10", false,-1, 63,0);
        tracep->declQuad(c+201,"top reg_file s11", false,-1, 63,0);
        tracep->declQuad(c+203,"top reg_file t3", false,-1, 63,0);
        tracep->declQuad(c+205,"top reg_file t4", false,-1, 63,0);
        tracep->declQuad(c+207,"top reg_file t5", false,-1, 63,0);
        tracep->declQuad(c+209,"top reg_file t6", false,-1, 63,0);
        tracep->declBus(c+1244,"top reg_file RS1_Out NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1245,"top reg_file RS1_Out KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top reg_file RS1_Out DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+82,"top reg_file RS1_Out out", false,-1, 63,0);
        tracep->declBus(c+1192,"top reg_file RS1_Out key", false,-1, 4,0);
        tracep->declQuad(c+1240,"top reg_file RS1_Out default_out", false,-1, 63,0);
        tracep->declArray(c+211,"top reg_file RS1_Out lut", false,-1, 2207,0);
        tracep->declBus(c+1244,"top reg_file RS1_Out i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1245,"top reg_file RS1_Out i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top reg_file RS1_Out i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top reg_file RS1_Out i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+82,"top reg_file RS1_Out i0 out", false,-1, 63,0);
        tracep->declBus(c+1192,"top reg_file RS1_Out i0 key", false,-1, 4,0);
        tracep->declQuad(c+1240,"top reg_file RS1_Out i0 default_out", false,-1, 63,0);
        tracep->declArray(c+211,"top reg_file RS1_Out i0 lut", false,-1, 2207,0);
        tracep->declBus(c+1248,"top reg_file RS1_Out i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+280+i*3,"top reg_file RS1_Out i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+376+i*1,"top reg_file RS1_Out i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+408+i*2,"top reg_file RS1_Out i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+472,"top reg_file RS1_Out i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+474,"top reg_file RS1_Out i0 hit", false,-1);
        tracep->declBus(c+1249,"top reg_file RS1_Out i0 i", false,-1, 31,0);
        tracep->declBus(c+1244,"top reg_file RS2_Out NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1245,"top reg_file RS2_Out KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top reg_file RS2_Out DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+84,"top reg_file RS2_Out out", false,-1, 63,0);
        tracep->declBus(c+1193,"top reg_file RS2_Out key", false,-1, 4,0);
        tracep->declQuad(c+1240,"top reg_file RS2_Out default_out", false,-1, 63,0);
        tracep->declArray(c+475,"top reg_file RS2_Out lut", false,-1, 2207,0);
        tracep->declBus(c+1244,"top reg_file RS2_Out i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1245,"top reg_file RS2_Out i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top reg_file RS2_Out i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top reg_file RS2_Out i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+84,"top reg_file RS2_Out i0 out", false,-1, 63,0);
        tracep->declBus(c+1193,"top reg_file RS2_Out i0 key", false,-1, 4,0);
        tracep->declQuad(c+1240,"top reg_file RS2_Out i0 default_out", false,-1, 63,0);
        tracep->declArray(c+475,"top reg_file RS2_Out i0 lut", false,-1, 2207,0);
        tracep->declBus(c+1248,"top reg_file RS2_Out i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+544+i*3,"top reg_file RS2_Out i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+640+i*1,"top reg_file RS2_Out i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+672+i*2,"top reg_file RS2_Out i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+736,"top reg_file RS2_Out i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+738,"top reg_file RS2_Out i0 hit", false,-1);
        tracep->declBus(c+1249,"top reg_file RS2_Out i0 i", false,-1, 31,0);
        tracep->declBus(c+1187,"top sign_extend Instr", false,-1, 31,0);
        tracep->declBus(c+98,"top sign_extend ControlUnit", false,-1, 2,0);
        tracep->declQuad(c+86,"top sign_extend SEXT_Out", false,-1, 63,0);
        tracep->declBus(c+1195,"top sign_extend immI", false,-1, 11,0);
        tracep->declBus(c+1196,"top sign_extend immU", false,-1, 31,0);
        tracep->declBus(c+739,"top sign_extend immS", false,-1, 11,0);
        tracep->declBus(c+740,"top sign_extend immJ", false,-1, 20,0);
        tracep->declBus(c+741,"top sign_extend immB", false,-1, 12,0);
        tracep->declBus(c+1245,"top sign_extend SEXT NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1250,"top sign_extend SEXT KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top sign_extend SEXT DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+86,"top sign_extend SEXT out", false,-1, 63,0);
        tracep->declBus(c+98,"top sign_extend SEXT key", false,-1, 2,0);
        tracep->declQuad(c+1240,"top sign_extend SEXT default_out", false,-1, 63,0);
        tracep->declArray(c+742,"top sign_extend SEXT lut", false,-1, 334,0);
        tracep->declBus(c+1245,"top sign_extend SEXT i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1250,"top sign_extend SEXT i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top sign_extend SEXT i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top sign_extend SEXT i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+86,"top sign_extend SEXT i0 out", false,-1, 63,0);
        tracep->declBus(c+98,"top sign_extend SEXT i0 key", false,-1, 2,0);
        tracep->declQuad(c+1240,"top sign_extend SEXT i0 default_out", false,-1, 63,0);
        tracep->declArray(c+742,"top sign_extend SEXT i0 lut", false,-1, 334,0);
        tracep->declBus(c+1251,"top sign_extend SEXT i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+753+i*3,"top sign_extend SEXT i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+768+i*1,"top sign_extend SEXT i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+773+i*2,"top sign_extend SEXT i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+783,"top sign_extend SEXT i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+785,"top sign_extend SEXT i0 hit", false,-1);
        tracep->declBus(c+1252,"top sign_extend SEXT i0 i", false,-1, 31,0);
        tracep->declBus(c+1253,"top MUX_REG1_PC NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1247,"top MUX_REG1_PC KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top MUX_REG1_PC DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+90,"top MUX_REG1_PC out", false,-1, 63,0);
        tracep->declBus(c+1188,"top MUX_REG1_PC key", false,-1, 0,0);
        tracep->declQuad(c+1240,"top MUX_REG1_PC default_out", false,-1, 63,0);
        tracep->declArray(c+786,"top MUX_REG1_PC lut", false,-1, 129,0);
        tracep->declBus(c+1253,"top MUX_REG1_PC i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1247,"top MUX_REG1_PC i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top MUX_REG1_PC i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top MUX_REG1_PC i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+90,"top MUX_REG1_PC i0 out", false,-1, 63,0);
        tracep->declBus(c+1188,"top MUX_REG1_PC i0 key", false,-1, 0,0);
        tracep->declQuad(c+1240,"top MUX_REG1_PC i0 default_out", false,-1, 63,0);
        tracep->declArray(c+786,"top MUX_REG1_PC i0 lut", false,-1, 129,0);
        tracep->declBus(c+1254,"top MUX_REG1_PC i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+791+i*3,"top MUX_REG1_PC i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+797+i*1,"top MUX_REG1_PC i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+799+i*2,"top MUX_REG1_PC i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+803,"top MUX_REG1_PC i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+805,"top MUX_REG1_PC i0 hit", false,-1);
        tracep->declBus(c+1255,"top MUX_REG1_PC i0 i", false,-1, 31,0);
        tracep->declBus(c+1253,"top MUX_REG2_SEXT NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1247,"top MUX_REG2_SEXT KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top MUX_REG2_SEXT DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+92,"top MUX_REG2_SEXT out", false,-1, 63,0);
        tracep->declBus(c+1189,"top MUX_REG2_SEXT key", false,-1, 0,0);
        tracep->declQuad(c+1240,"top MUX_REG2_SEXT default_out", false,-1, 63,0);
        tracep->declArray(c+806,"top MUX_REG2_SEXT lut", false,-1, 129,0);
        tracep->declBus(c+1253,"top MUX_REG2_SEXT i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1247,"top MUX_REG2_SEXT i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top MUX_REG2_SEXT i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top MUX_REG2_SEXT i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+92,"top MUX_REG2_SEXT i0 out", false,-1, 63,0);
        tracep->declBus(c+1189,"top MUX_REG2_SEXT i0 key", false,-1, 0,0);
        tracep->declQuad(c+1240,"top MUX_REG2_SEXT i0 default_out", false,-1, 63,0);
        tracep->declArray(c+806,"top MUX_REG2_SEXT i0 lut", false,-1, 129,0);
        tracep->declBus(c+1254,"top MUX_REG2_SEXT i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+811+i*3,"top MUX_REG2_SEXT i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+817+i*1,"top MUX_REG2_SEXT i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+819+i*2,"top MUX_REG2_SEXT i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+823,"top MUX_REG2_SEXT i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+825,"top MUX_REG2_SEXT i0 hit", false,-1);
        tracep->declBus(c+1255,"top MUX_REG2_SEXT i0 i", false,-1, 31,0);
        tracep->declBus(c+1187,"top CU instr", false,-1, 31,0);
        tracep->declBit(c+1256,"top CU ALU_MEM_Finish", false,-1);
        tracep->declBit(c+1239,"top CU Branch_Yes_No", false,-1);
        tracep->declBus(c+96,"top CU ALU_Control", false,-1, 3,0);
        tracep->declBus(c+97,"top CU Inside_Control", false,-1, 3,0);
        tracep->declBus(c+98,"top CU SEXT_Control", false,-1, 2,0);
        tracep->declBit(c+99,"top CU RegWriteEnable", false,-1);
        tracep->declBit(c+1188,"top CU C_RS1_PC", false,-1);
        tracep->declBit(c+1189,"top CU C_RS2_imm", false,-1);
        tracep->declBit(c+100,"top CU C_ALU_MEM", false,-1);
        tracep->declBit(c+1190,"top CU C_ALU_NPC_In", false,-1);
        tracep->declBus(c+1191,"top CU C_NPC_Branch_Jump", false,-1, 1,0);
        tracep->declBus(c+101,"top CU MEM_Ctrl", false,-1, 3,0);
        tracep->declBit(c+102,"top CU MEM_Enable", false,-1);
        tracep->declBus(c+1197,"top CU ebreak_reg", false,-1, 7,0);
        tracep->declBus(c+1198,"top CU instr_6_0", false,-1, 6,0);
        tracep->declBus(c+1199,"top CU instr_14_12", false,-1, 2,0);
        tracep->declBus(c+1200,"top CU instr_31_25", false,-1, 6,0);
        tracep->declBus(c+1201,"top CU instr_31_26", false,-1, 5,0);
        tracep->declBit(c+1202,"top CU Match_6_0_0010011", false,-1);
        tracep->declBit(c+1203,"top CU Match_6_0_0111011", false,-1);
        tracep->declBit(c+1204,"top CU Match_6_0_0110011", false,-1);
        tracep->declBit(c+1205,"top CU Match_6_0_0011011", false,-1);
        tracep->declBit(c+1206,"top CU Match_6_0_0000011", false,-1);
        tracep->declBit(c+1207,"top CU Match_6_0_0100011", false,-1);
        tracep->declBit(c+1208,"top CU Match_6_0_1100011", false,-1);
        tracep->declBit(c+1209,"top CU Match_6_0_1101111", false,-1);
        tracep->declBit(c+1210,"top CU Match_6_0_1100111", false,-1);
        tracep->declBit(c+1211,"top CU Match_6_0_0010111", false,-1);
        tracep->declBit(c+1212,"top CU Match_6_0_0110111", false,-1);
        tracep->declBit(c+1213,"top CU Match_6_0_1110011", false,-1);
        tracep->declBit(c+1214,"top CU Match_14_12_000", false,-1);
        tracep->declBit(c+1215,"top CU Match_14_12_100", false,-1);
        tracep->declBit(c+1216,"top CU Match_14_12_110", false,-1);
        tracep->declBit(c+1217,"top CU Match_14_12_011", false,-1);
        tracep->declBit(c+1218,"top CU Match_14_12_010", false,-1);
        tracep->declBit(c+1219,"top CU Match_14_12_101", false,-1);
        tracep->declBit(c+1220,"top CU Match_14_12_001", false,-1);
        tracep->declBit(c+1221,"top CU Match_14_12_111", false,-1);
        tracep->declBit(c+1222,"top CU Match_31_25_0000000", false,-1);
        tracep->declBit(c+826,"top CU Match_31_25_0100000", false,-1);
        tracep->declBit(c+1223,"top CU Match_31_25_0000001", false,-1);
        tracep->declBit(c+1224,"top CU Match_31_26_000000", false,-1);
        tracep->declBit(c+1225,"top CU Match_31_26_010000", false,-1);
        tracep->declBit(c+827,"top CU addi", false,-1);
        tracep->declBit(c+828,"top CU addiw", false,-1);
        tracep->declBit(c+829,"top CU addw", false,-1);
        tracep->declBit(c+830,"top CU subw", false,-1);
        tracep->declBit(c+831,"top CU add", false,-1);
        tracep->declBit(c+832,"top CU sub", false,-1);
        tracep->declBit(c+833,"top CU mulw", false,-1);
        tracep->declBit(c+834,"top CU divw", false,-1);
        tracep->declBit(c+835,"top CU mul", false,-1);
        tracep->declBit(c+836,"top CU divu", false,-1);
        tracep->declBit(c+837,"top CU divuw", false,-1);
        tracep->declBit(c+838,"top CU remw", false,-1);
        tracep->declBit(c+1226,"top CU rem", false,-1);
        tracep->declBit(c+839,"top CU remu", false,-1);
        tracep->declBit(c+840,"top CU remuw", false,-1);
        tracep->declBit(c+841,"top CU sltiu", false,-1);
        tracep->declBit(c+842,"top CU sltu", false,-1);
        tracep->declBit(c+843,"top CU slt", false,-1);
        tracep->declBit(c+844,"top CU slti", false,-1);
        tracep->declBit(c+845,"top CU sraw", false,-1);
        tracep->declBit(c+846,"top CU sllw", false,-1);
        tracep->declBit(c+847,"top CU srlw", false,-1);
        tracep->declBit(c+848,"top CU slli", false,-1);
        tracep->declBit(c+849,"top CU srli", false,-1);
        tracep->declBit(c+850,"top CU srai", false,-1);
        tracep->declBit(c+851,"top CU srliw", false,-1);
        tracep->declBit(c+852,"top CU slliw", false,-1);
        tracep->declBit(c+853,"top CU sraiw", false,-1);
        tracep->declBit(c+854,"top CU sll", false,-1);
        tracep->declBit(c+1227,"top CU srl", false,-1);
        tracep->declBit(c+855,"top CU ld", false,-1);
        tracep->declBit(c+856,"top CU lw", false,-1);
        tracep->declBit(c+857,"top CU lbu", false,-1);
        tracep->declBit(c+858,"top CU lh", false,-1);
        tracep->declBit(c+859,"top CU lhu", false,-1);
        tracep->declBit(c+860,"top CU sd", false,-1);
        tracep->declBit(c+861,"top CU sw", false,-1);
        tracep->declBit(c+862,"top CU sb", false,-1);
        tracep->declBit(c+863,"top CU sh", false,-1);
        tracep->declBit(c+864,"top CU lb", false,-1);
        tracep->declBit(c+865,"top CU lwu", false,-1);
        tracep->declBit(c+866,"top CU andi", false,-1);
        tracep->declBit(c+867,"top CU xori", false,-1);
        tracep->declBit(c+868,"top CU ori", false,-1);
        tracep->declBit(c+869,"top CU bne", false,-1);
        tracep->declBit(c+870,"top CU beq", false,-1);
        tracep->declBit(c+871,"top CU bge", false,-1);
        tracep->declBit(c+872,"top CU blt", false,-1);
        tracep->declBit(c+873,"top CU bltu", false,-1);
        tracep->declBit(c+874,"top CU bgeu", false,-1);
        tracep->declBit(c+1209,"top CU jal", false,-1);
        tracep->declBit(c+875,"top CU jalr", false,-1);
        tracep->declBit(c+876,"top CU csrrw", false,-1);
        tracep->declBit(c+877,"top CU csrrs", false,-1);
        tracep->declBit(c+1211,"top CU auipc", false,-1);
        tracep->declBit(c+1212,"top CU lui", false,-1);
        tracep->declBit(c+1228,"top CU ebreak", false,-1);
        tracep->declBit(c+1229,"top CU ecall", false,-1);
        tracep->declBit(c+1230,"top CU mret", false,-1);
        tracep->declBit(c+1231,"top CU TypeI", false,-1);
        tracep->declBit(c+1232,"top CU TypeU", false,-1);
        tracep->declBit(c+878,"top CU TypeS", false,-1);
        tracep->declBit(c+1209,"top CU TypeJ", false,-1);
        tracep->declBit(c+879,"top CU TypeB", false,-1);
        tracep->declBit(c+1233,"top CU TypeR", false,-1);
        tracep->declBit(c+880,"top CU ALU_Adder", false,-1);
        tracep->declBit(c+881,"top CU ALU_Mul", false,-1);
        tracep->declBit(c+882,"top CU ALU_Div", false,-1);
        tracep->declBit(c+883,"top CU ALU_Compare", false,-1);
        tracep->declBit(c+884,"top CU ALU_Shift", false,-1);
        tracep->declBit(c+885,"top CU ALU_LS", false,-1);
        tracep->declBit(c+886,"top CU ALU_LogicOpt", false,-1);
        tracep->declBit(c+879,"top CU ALU_Branch", false,-1);
        tracep->declBit(c+1209,"top CU ALU_Jump", false,-1);
        tracep->declBit(c+1211,"top CU ALU_auipc", false,-1);
        tracep->declBit(c+1212,"top CU ALU_lui", false,-1);
        tracep->declBit(c+1234,"top CU ALU_CSROP", false,-1);
        tracep->declBit(c+1235,"top CU ALUInternal_Control_0", false,-1);
        tracep->declBit(c+887,"top CU ALUInternal_Control_1", false,-1);
        tracep->declBit(c+1236,"top CU ALUInternal_Control_2", false,-1);
        tracep->declBit(c+1237,"top CU ALUInternal_Control_3", false,-1);
        tracep->declBit(c+888,"top CU ALUInternal_Control_4", false,-1);
        tracep->declBit(c+889,"top CU ALUInternal_Control_5", false,-1);
        tracep->declBit(c+1189,"top CU ALU_Choose_imm", false,-1);
        tracep->declBit(c+1188,"top CU ALU_Choose_PC", false,-1);
        tracep->declBus(c+890,"top CU func_signal", false,-1, 11,0);
        tracep->declBus(c+891,"top CU ALU_inside_signal", false,-1, 5,0);
        tracep->declBus(c+1242,"top CU IMMI", false,-1, 2,0);
        tracep->declBus(c+1243,"top CU IMMU", false,-1, 2,0);
        tracep->declBus(c+1257,"top CU IMMS", false,-1, 2,0);
        tracep->declBus(c+1258,"top CU IMMJ", false,-1, 2,0);
        tracep->declBus(c+1259,"top CU IMMB", false,-1, 2,0);
        tracep->declBus(c+1260,"top CU MUX_Adder", false,-1, 3,0);
        tracep->declBus(c+1261,"top CU MUX_Shift", false,-1, 3,0);
        tracep->declBus(c+1262,"top CU MUX_Compare", false,-1, 3,0);
        tracep->declBus(c+1263,"top CU MUX_DIV", false,-1, 3,0);
        tracep->declBus(c+1264,"top CU MUX_Logic", false,-1, 3,0);
        tracep->declBus(c+1265,"top CU MUX_MUL", false,-1, 3,0);
        tracep->declBus(c+1266,"top CU MUX_CSR_OP", false,-1, 3,0);
        tracep->declBus(c+1260,"top CU Inside_0", false,-1, 3,0);
        tracep->declBus(c+1261,"top CU Inside_1", false,-1, 3,0);
        tracep->declBus(c+1262,"top CU Inside_2", false,-1, 3,0);
        tracep->declBus(c+1263,"top CU Inside_3", false,-1, 3,0);
        tracep->declBus(c+1264,"top CU Inside_4", false,-1, 3,0);
        tracep->declBus(c+1265,"top CU Inside_5", false,-1, 3,0);
        tracep->declBus(c+1267,"top CU ALU_Inside_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1267,"top CU ALU_Inside_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1268,"top CU ALU_Inside_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+97,"top CU ALU_Inside_choose out", false,-1, 3,0);
        tracep->declBus(c+891,"top CU ALU_Inside_choose key", false,-1, 5,0);
        tracep->declBus(c+1269,"top CU ALU_Inside_choose default_out", false,-1, 3,0);
        tracep->declQuad(c+1270,"top CU ALU_Inside_choose lut", false,-1, 59,0);
        tracep->declBus(c+1267,"top CU ALU_Inside_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1267,"top CU ALU_Inside_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1268,"top CU ALU_Inside_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top CU ALU_Inside_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+97,"top CU ALU_Inside_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+891,"top CU ALU_Inside_choose i0 key", false,-1, 5,0);
        tracep->declBus(c+1269,"top CU ALU_Inside_choose i0 default_out", false,-1, 3,0);
        tracep->declQuad(c+1270,"top CU ALU_Inside_choose i0 lut", false,-1, 59,0);
        tracep->declBus(c+1272,"top CU ALU_Inside_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+5+i*1,"top CU ALU_Inside_choose i0 pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+11+i*1,"top CU ALU_Inside_choose i0 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+17+i*1,"top CU ALU_Inside_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+892,"top CU ALU_Inside_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+893,"top CU ALU_Inside_choose i0 hit", false,-1);
        tracep->declBus(c+1273,"top CU ALU_Inside_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+1274,"top CU func_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1274,"top CU func_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1268,"top CU func_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+96,"top CU func_choose out", false,-1, 3,0);
        tracep->declBus(c+890,"top CU func_choose key", false,-1, 11,0);
        tracep->declBus(c+1269,"top CU func_choose default_out", false,-1, 3,0);
        tracep->declArray(c+1275,"top CU func_choose lut", false,-1, 191,0);
        tracep->declBus(c+1274,"top CU func_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1274,"top CU func_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1268,"top CU func_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top CU func_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+96,"top CU func_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+890,"top CU func_choose i0 key", false,-1, 11,0);
        tracep->declBus(c+1269,"top CU func_choose i0 default_out", false,-1, 3,0);
        tracep->declArray(c+1275,"top CU func_choose i0 lut", false,-1, 191,0);
        tracep->declBus(c+1281,"top CU func_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+23+i*1,"top CU func_choose i0 pair_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+35+i*1,"top CU func_choose i0 key_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+47+i*1,"top CU func_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+894,"top CU func_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+895,"top CU func_choose i0 hit", false,-1);
        tracep->declBus(c+1282,"top CU func_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+1245,"top CU CU_ImmType NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1245,"top CU CU_ImmType KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1250,"top CU CU_ImmType DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+98,"top CU CU_ImmType out", false,-1, 2,0);
        tracep->declBus(c+896,"top CU CU_ImmType key", false,-1, 4,0);
        tracep->declBus(c+1242,"top CU CU_ImmType default_out", false,-1, 2,0);
        tracep->declQuad(c+1283,"top CU CU_ImmType lut", false,-1, 39,0);
        tracep->declBus(c+1245,"top CU CU_ImmType i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1245,"top CU CU_ImmType i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1250,"top CU CU_ImmType i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top CU CU_ImmType i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+98,"top CU CU_ImmType i0 out", false,-1, 2,0);
        tracep->declBus(c+896,"top CU CU_ImmType i0 key", false,-1, 4,0);
        tracep->declBus(c+1242,"top CU CU_ImmType i0 default_out", false,-1, 2,0);
        tracep->declQuad(c+1283,"top CU CU_ImmType i0 lut", false,-1, 39,0);
        tracep->declBus(c+1285,"top CU CU_ImmType i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+59+i*1,"top CU CU_ImmType i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+64+i*1,"top CU CU_ImmType i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+69+i*1,"top CU CU_ImmType i0 data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+897,"top CU CU_ImmType i0 lut_out", false,-1, 2,0);
        tracep->declBit(c+898,"top CU CU_ImmType i0 hit", false,-1);
        tracep->declBus(c+1252,"top CU CU_ImmType i0 i", false,-1, 31,0);
        tracep->declBit(c+1174,"top alu clk", false,-1);
        tracep->declBit(c+1175,"top alu rst", false,-1);
        tracep->declQuad(c+90,"top alu src1", false,-1, 63,0);
        tracep->declQuad(c+92,"top alu src2", false,-1, 63,0);
        tracep->declBus(c+96,"top alu func_control", false,-1, 3,0);
        tracep->declBus(c+97,"top alu inner_control", false,-1, 3,0);
        tracep->declBit(c+102,"top alu MEM_Enable", false,-1);
        tracep->declQuad(c+94,"top alu result_out", false,-1, 63,0);
        tracep->declBus(c+103,"top alu CSR_Read_Addr", false,-1, 11,0);
        tracep->declQuad(c+104,"top alu CSR_Read_Data", false,-1, 63,0);
        tracep->declBus(c+106,"top alu CSR_Write_Addr", false,-1, 11,0);
        tracep->declQuad(c+107,"top alu CSR_Write_Data", false,-1, 63,0);
        tracep->declBit(c+1238,"top alu Write_En", false,-1);
        tracep->declQuad(c+109,"top alu mcause_Write_Data", false,-1, 63,0);
        tracep->declQuad(c+111,"top alu mcause_Read_Data", false,-1, 63,0);
        tracep->declBit(c+1,"top alu mcause_En", false,-1);
        tracep->declQuad(c+113,"top alu mepc_Write_Data", false,-1, 63,0);
        tracep->declQuad(c+115,"top alu mepc_Read_Data", false,-1, 63,0);
        tracep->declBit(c+117,"top alu mepc_En", false,-1);
        tracep->declQuad(c+2,"top alu mtvec_Write_Data", false,-1, 63,0);
        tracep->declQuad(c+118,"top alu mtvec_Read_Data", false,-1, 63,0);
        tracep->declBit(c+4,"top alu mtvec_En", false,-1);
        tracep->declBus(c+1260,"top alu MUX_Adder", false,-1, 3,0);
        tracep->declBus(c+1261,"top alu MUX_Shift", false,-1, 3,0);
        tracep->declBus(c+1262,"top alu MUX_Compare", false,-1, 3,0);
        tracep->declBus(c+1263,"top alu MUX_DIV", false,-1, 3,0);
        tracep->declBus(c+1264,"top alu MUX_Logic", false,-1, 3,0);
        tracep->declBus(c+1265,"top alu MUX_MUL", false,-1, 3,0);
        tracep->declBus(c+1286,"top alu auipc", false,-1, 3,0);
        tracep->declBus(c+1287,"top alu lui", false,-1, 3,0);
        tracep->declBus(c+1266,"top alu MUX_CSR_OP", false,-1, 3,0);
        tracep->declQuad(c+899,"top alu Adder_out", false,-1, 63,0);
        tracep->declQuad(c+901,"top alu Shift_out", false,-1, 63,0);
        tracep->declQuad(c+903,"top alu Compare_out", false,-1, 63,0);
        tracep->declQuad(c+905,"top alu DIV_out", false,-1, 63,0);
        tracep->declQuad(c+907,"top alu Logic_out", false,-1, 63,0);
        tracep->declQuad(c+909,"top alu MUL_out", false,-1, 63,0);
        tracep->declQuad(c+911,"top alu CSR_OP_out", false,-1, 63,0);
        tracep->declQuad(c+90,"top alu ALU_adder src1", false,-1, 63,0);
        tracep->declQuad(c+92,"top alu ALU_adder src2", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_adder control", false,-1, 3,0);
        tracep->declQuad(c+899,"top alu ALU_adder result_out", false,-1, 63,0);
        tracep->declQuad(c+913,"top alu ALU_adder resultAdd", false,-1, 63,0);
        tracep->declQuad(c+915,"top alu ALU_adder resultSub", false,-1, 63,0);
        tracep->declBus(c+1245,"top alu ALU_adder Adder_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1268,"top alu ALU_adder Adder_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top alu ALU_adder Adder_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+899,"top alu ALU_adder Adder_mux out", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_adder Adder_mux key", false,-1, 3,0);
        tracep->declQuad(c+913,"top alu ALU_adder Adder_mux default_out", false,-1, 63,0);
        tracep->declArray(c+917,"top alu ALU_adder Adder_mux lut", false,-1, 339,0);
        tracep->declBus(c+1245,"top alu ALU_adder Adder_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1268,"top alu ALU_adder Adder_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top alu ALU_adder Adder_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top alu ALU_adder Adder_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+899,"top alu ALU_adder Adder_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_adder Adder_mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+913,"top alu ALU_adder Adder_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+917,"top alu ALU_adder Adder_mux i0 lut", false,-1, 339,0);
        tracep->declBus(c+1288,"top alu ALU_adder Adder_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+928+i*3,"top alu ALU_adder Adder_mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+943+i*1,"top alu ALU_adder Adder_mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+948+i*2,"top alu ALU_adder Adder_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+958,"top alu ALU_adder Adder_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+960,"top alu ALU_adder Adder_mux i0 hit", false,-1);
        tracep->declBus(c+1252,"top alu ALU_adder Adder_mux i0 i", false,-1, 31,0);
        tracep->declQuad(c+90,"top alu ALU_mul src1", false,-1, 63,0);
        tracep->declQuad(c+92,"top alu ALU_mul src2", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_mul control", false,-1, 3,0);
        tracep->declQuad(c+909,"top alu ALU_mul result_out", false,-1, 63,0);
        tracep->declQuad(c+961,"top alu ALU_mul result", false,-1, 63,0);
        tracep->declBus(c+1253,"top alu ALU_mul MUX_mul NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1268,"top alu ALU_mul MUX_mul KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top alu ALU_mul MUX_mul DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+909,"top alu ALU_mul MUX_mul out", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_mul MUX_mul key", false,-1, 3,0);
        tracep->declQuad(c+1240,"top alu ALU_mul MUX_mul default_out", false,-1, 63,0);
        tracep->declArray(c+963,"top alu ALU_mul MUX_mul lut", false,-1, 135,0);
        tracep->declBus(c+1253,"top alu ALU_mul MUX_mul i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1268,"top alu ALU_mul MUX_mul i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top alu ALU_mul MUX_mul i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top alu ALU_mul MUX_mul i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+909,"top alu ALU_mul MUX_mul i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_mul MUX_mul i0 key", false,-1, 3,0);
        tracep->declQuad(c+1240,"top alu ALU_mul MUX_mul i0 default_out", false,-1, 63,0);
        tracep->declArray(c+963,"top alu ALU_mul MUX_mul i0 lut", false,-1, 135,0);
        tracep->declBus(c+1288,"top alu ALU_mul MUX_mul i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+968+i*3,"top alu ALU_mul MUX_mul i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+974+i*1,"top alu ALU_mul MUX_mul i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+976+i*2,"top alu ALU_mul MUX_mul i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+980,"top alu ALU_mul MUX_mul i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+982,"top alu ALU_mul MUX_mul i0 hit", false,-1);
        tracep->declBus(c+1255,"top alu ALU_mul MUX_mul i0 i", false,-1, 31,0);
        tracep->declQuad(c+90,"top alu ALU_Logic src1", false,-1, 63,0);
        tracep->declQuad(c+92,"top alu ALU_Logic src2", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_Logic ControlOpt", false,-1, 3,0);
        tracep->declQuad(c+907,"top alu ALU_Logic result_out", false,-1, 63,0);
        tracep->declQuad(c+983,"top alu ALU_Logic result_and", false,-1, 63,0);
        tracep->declQuad(c+985,"top alu ALU_Logic result_xor", false,-1, 63,0);
        tracep->declQuad(c+987,"top alu ALU_Logic result_or", false,-1, 63,0);
        tracep->declBus(c+1250,"top alu ALU_Logic LogicOpt_Mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1268,"top alu ALU_Logic LogicOpt_Mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top alu ALU_Logic LogicOpt_Mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+907,"top alu ALU_Logic LogicOpt_Mux out", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_Logic LogicOpt_Mux key", false,-1, 3,0);
        tracep->declQuad(c+1240,"top alu ALU_Logic LogicOpt_Mux default_out", false,-1, 63,0);
        tracep->declArray(c+989,"top alu ALU_Logic LogicOpt_Mux lut", false,-1, 203,0);
        tracep->declBus(c+1250,"top alu ALU_Logic LogicOpt_Mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1268,"top alu ALU_Logic LogicOpt_Mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top alu ALU_Logic LogicOpt_Mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top alu ALU_Logic LogicOpt_Mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+907,"top alu ALU_Logic LogicOpt_Mux i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_Logic LogicOpt_Mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+1240,"top alu ALU_Logic LogicOpt_Mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+989,"top alu ALU_Logic LogicOpt_Mux i0 lut", false,-1, 203,0);
        tracep->declBus(c+1288,"top alu ALU_Logic LogicOpt_Mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+996+i*3,"top alu ALU_Logic LogicOpt_Mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1005+i*1,"top alu ALU_Logic LogicOpt_Mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1008+i*2,"top alu ALU_Logic LogicOpt_Mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1014,"top alu ALU_Logic LogicOpt_Mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1016,"top alu ALU_Logic LogicOpt_Mux i0 hit", false,-1);
        tracep->declBus(c+1289,"top alu ALU_Logic LogicOpt_Mux i0 i", false,-1, 31,0);
        tracep->declQuad(c+90,"top alu ALU_Shift src1", false,-1, 63,0);
        tracep->declQuad(c+92,"top alu ALU_Shift src2", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_Shift shift_control", false,-1, 3,0);
        tracep->declQuad(c+901,"top alu ALU_Shift shift_out", false,-1, 63,0);
        tracep->declBus(c+1260,"top alu ALU_Shift ArithRight32", false,-1, 3,0);
        tracep->declBus(c+1261,"top alu ALU_Shift LogicalRight32", false,-1, 3,0);
        tracep->declBus(c+1262,"top alu ALU_Shift LogicalLeft32", false,-1, 3,0);
        tracep->declBus(c+1263,"top alu ALU_Shift LogicalRight64", false,-1, 3,0);
        tracep->declBus(c+1264,"top alu ALU_Shift LogicalLeft64", false,-1, 3,0);
        tracep->declBus(c+1265,"top alu ALU_Shift ArithRight64", false,-1, 3,0);
        tracep->declQuad(c+1017,"top alu ALU_Shift buffer", false,-1, 63,0);
        tracep->declQuad(c+1019,"top alu ALU_Shift buffer1", false,-1, 63,0);
        tracep->declQuad(c+1021,"top alu ALU_Shift buffer2", false,-1, 63,0);
        tracep->declQuad(c+1023,"top alu ALU_Shift buffer3", false,-1, 63,0);
        tracep->declQuad(c+1025,"top alu ALU_Shift buffer4", false,-1, 63,0);
        tracep->declQuad(c+1027,"top alu ALU_Shift buffer5", false,-1, 63,0);
        tracep->declQuad(c+90,"top alu ALU_Compare src1", false,-1, 63,0);
        tracep->declQuad(c+92,"top alu ALU_Compare src2", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_Compare Compare_Control", false,-1, 3,0);
        tracep->declQuad(c+903,"top alu ALU_Compare Compare_Result", false,-1, 63,0);
        tracep->declBus(c+1260,"top alu ALU_Compare MUX_neq_unsigned", false,-1, 3,0);
        tracep->declBus(c+1261,"top alu ALU_Compare MUX_eq_unsigned", false,-1, 3,0);
        tracep->declBus(c+1262,"top alu ALU_Compare MUX_more_eq_signed", false,-1, 3,0);
        tracep->declBus(c+1263,"top alu ALU_Compare MUX_less_signed", false,-1, 3,0);
        tracep->declBus(c+1264,"top alu ALU_Compare MUX_less_unsigned", false,-1, 3,0);
        tracep->declQuad(c+90,"top alu ALU_Compare S_src1", false,-1, 63,0);
        tracep->declQuad(c+92,"top alu ALU_Compare S_src2", false,-1, 63,0);
        tracep->declBit(c+1029,"top alu ALU_Compare non_eq_unsigned", false,-1);
        tracep->declBit(c+1030,"top alu ALU_Compare eq_unsigned", false,-1);
        tracep->declBit(c+1031,"top alu ALU_Compare more_eq_signed", false,-1);
        tracep->declBit(c+1032,"top alu ALU_Compare less_signed", false,-1);
        tracep->declBit(c+1033,"top alu ALU_Compare less_unsigned", false,-1);
        tracep->declBit(c+1034,"top alu ALU_Compare more_eq_unsigned", false,-1);
        tracep->declQuad(c+90,"top alu ALU_DIV src1", false,-1, 63,0);
        tracep->declQuad(c+92,"top alu ALU_DIV src2", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_DIV control", false,-1, 3,0);
        tracep->declQuad(c+905,"top alu ALU_DIV result_out", false,-1, 63,0);
        tracep->declBus(c+1035,"top alu ALU_DIV S_src1", false,-1, 31,0);
        tracep->declBus(c+1036,"top alu ALU_DIV S_src2", false,-1, 31,0);
        tracep->declQuad(c+90,"top alu ALU_DIV u_src1", false,-1, 63,0);
        tracep->declQuad(c+92,"top alu ALU_DIV u_src2", false,-1, 63,0);
        tracep->declBus(c+1037,"top alu ALU_DIV divw", false,-1, 31,0);
        tracep->declBus(c+1038,"top alu ALU_DIV remw", false,-1, 31,0);
        tracep->declQuad(c+1039,"top alu ALU_DIV divu", false,-1, 63,0);
        tracep->declBus(c+1041,"top alu ALU_DIV divuw", false,-1, 31,0);
        tracep->declQuad(c+1042,"top alu ALU_DIV remu", false,-1, 63,0);
        tracep->declBus(c+1044,"top alu ALU_DIV remuw", false,-1, 31,0);
        tracep->declBus(c+1267,"top alu ALU_DIV DIV NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1268,"top alu ALU_DIV DIV KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top alu ALU_DIV DIV DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+905,"top alu ALU_DIV DIV out", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_DIV DIV key", false,-1, 3,0);
        tracep->declQuad(c+1240,"top alu ALU_DIV DIV default_out", false,-1, 63,0);
        tracep->declArray(c+1045,"top alu ALU_DIV DIV lut", false,-1, 407,0);
        tracep->declBus(c+1267,"top alu ALU_DIV DIV i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1268,"top alu ALU_DIV DIV i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top alu ALU_DIV DIV i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top alu ALU_DIV DIV i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+905,"top alu ALU_DIV DIV i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top alu ALU_DIV DIV i0 key", false,-1, 3,0);
        tracep->declQuad(c+1240,"top alu ALU_DIV DIV i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1045,"top alu ALU_DIV DIV i0 lut", false,-1, 407,0);
        tracep->declBus(c+1288,"top alu ALU_DIV DIV i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+1058+i*3,"top alu ALU_DIV DIV i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1076+i*1,"top alu ALU_DIV DIV i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+1082+i*2,"top alu ALU_DIV DIV i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1094,"top alu ALU_DIV DIV i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1096,"top alu ALU_DIV DIV i0 hit", false,-1);
        tracep->declBus(c+1273,"top alu ALU_DIV DIV i0 i", false,-1, 31,0);
        tracep->declQuad(c+90,"top alu csr_op src1", false,-1, 63,0);
        tracep->declQuad(c+92,"top alu csr_op src2", false,-1, 63,0);
        tracep->declBus(c+97,"top alu csr_op control", false,-1, 3,0);
        tracep->declQuad(c+911,"top alu csr_op result_out", false,-1, 63,0);
        tracep->declBus(c+103,"top alu csr_op CSR_Read_Addr", false,-1, 11,0);
        tracep->declQuad(c+104,"top alu csr_op CSR_Read_Data", false,-1, 63,0);
        tracep->declBus(c+106,"top alu csr_op CSR_Write_Addr", false,-1, 11,0);
        tracep->declQuad(c+107,"top alu csr_op CSR_Write_Data", false,-1, 63,0);
        tracep->declBit(c+1238,"top alu csr_op Write_En", false,-1);
        tracep->declQuad(c+109,"top alu csr_op mcause_Write_Data", false,-1, 63,0);
        tracep->declQuad(c+111,"top alu csr_op mcause_Read_Data", false,-1, 63,0);
        tracep->declBit(c+1,"top alu csr_op mcause_En", false,-1);
        tracep->declQuad(c+113,"top alu csr_op mepc_Write_Data", false,-1, 63,0);
        tracep->declQuad(c+115,"top alu csr_op mepc_Read_Data", false,-1, 63,0);
        tracep->declBit(c+117,"top alu csr_op mepc_En", false,-1);
        tracep->declQuad(c+2,"top alu csr_op mtvec_Write_Data", false,-1, 63,0);
        tracep->declQuad(c+118,"top alu csr_op mtvec_Read_Data", false,-1, 63,0);
        tracep->declBit(c+4,"top alu csr_op mtvec_En", false,-1);
        tracep->declBus(c+1260,"top alu csr_op csrrw", false,-1, 3,0);
        tracep->declBus(c+1261,"top alu csr_op csrrs", false,-1, 3,0);
        tracep->declBus(c+1262,"top alu csr_op ecall", false,-1, 3,0);
        tracep->declBus(c+1263,"top alu csr_op mret", false,-1, 3,0);
        tracep->declQuad(c+1290,"top alu csr_op t", false,-1, 63,0);
        tracep->declBus(c+1292,"top alu Adder_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1268,"top alu Adder_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top alu Adder_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+94,"top alu Adder_mux out", false,-1, 63,0);
        tracep->declBus(c+96,"top alu Adder_mux key", false,-1, 3,0);
        tracep->declQuad(c+1240,"top alu Adder_mux default_out", false,-1, 63,0);
        tracep->declArray(c+1097,"top alu Adder_mux lut", false,-1, 611,0);
        tracep->declBus(c+1292,"top alu Adder_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1268,"top alu Adder_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1246,"top alu Adder_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1247,"top alu Adder_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+94,"top alu Adder_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+96,"top alu Adder_mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+1240,"top alu Adder_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1097,"top alu Adder_mux i0 lut", false,-1, 611,0);
        tracep->declBus(c+1288,"top alu Adder_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<9; i++) {
                tracep->declArray(c+1117+i*3,"top alu Adder_mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+1144+i*1,"top alu Adder_mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declQuad(c+1153+i*2,"top alu Adder_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1171,"top alu Adder_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1173,"top alu Adder_mux i0 hit", false,-1);
        tracep->declBus(c+1293,"top alu Adder_mux i0 i", false,-1, 31,0);
        tracep->declBit(c+1175,"top csr rst", false,-1);
        tracep->declBit(c+1174,"top csr clk", false,-1);
        tracep->declBus(c+103,"top csr read_address", false,-1, 11,0);
        tracep->declQuad(c+104,"top csr read_result", false,-1, 63,0);
        tracep->declBus(c+106,"top csr write_address", false,-1, 11,0);
        tracep->declQuad(c+107,"top csr wirte_date", false,-1, 63,0);
        tracep->declBit(c+1238,"top csr write_en", false,-1);
        tracep->declQuad(c+109,"top csr mcause_in", false,-1, 63,0);
        tracep->declQuad(c+111,"top csr mcause", false,-1, 63,0);
        tracep->declBit(c+1,"top csr mcause_wen", false,-1);
        tracep->declQuad(c+113,"top csr mepc_in", false,-1, 63,0);
        tracep->declQuad(c+115,"top csr mepc", false,-1, 63,0);
        tracep->declBit(c+117,"top csr mepc_wen", false,-1);
        tracep->declQuad(c+2,"top csr mtvec_in", false,-1, 63,0);
        tracep->declQuad(c+118,"top csr mtvec", false,-1, 63,0);
        tracep->declBit(c+4,"top csr mtvec_wen", false,-1);
        tracep->declQuad(c+111,"top csr mcause_reg", false,-1, 63,0);
        tracep->declQuad(c+115,"top csr mepc_reg", false,-1, 63,0);
        tracep->declQuad(c+118,"top csr mtvec_reg", false,-1, 63,0);
        tracep->declBus(c+1294,"top csr mtvec_address", false,-1, 11,0);
        tracep->declBus(c+1295,"top csr mepc_address", false,-1, 11,0);
        tracep->declBus(c+1296,"top csr mcause_address", false,-1, 11,0);
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
    VlWide<6>/*191:0*/ __Vtemp1792;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__mcause_En));
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__mtvec_Write_Data),64);
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__mtvec_En));
        tracep->fullSData(oldp+5,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+6,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+7,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+8,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[3]),10);
        tracep->fullSData(oldp+9,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[4]),10);
        tracep->fullSData(oldp+10,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[5]),10);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[0]),6);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[1]),6);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[2]),6);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[3]),6);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[4]),6);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[5]),6);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[3]),4);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[4]),4);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[5]),4);
        tracep->fullSData(oldp+23,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[0]),16);
        tracep->fullSData(oldp+24,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[1]),16);
        tracep->fullSData(oldp+25,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[2]),16);
        tracep->fullSData(oldp+26,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[3]),16);
        tracep->fullSData(oldp+27,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[4]),16);
        tracep->fullSData(oldp+28,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[5]),16);
        tracep->fullSData(oldp+29,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[6]),16);
        tracep->fullSData(oldp+30,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[7]),16);
        tracep->fullSData(oldp+31,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[8]),16);
        tracep->fullSData(oldp+32,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[9]),16);
        tracep->fullSData(oldp+33,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[10]),16);
        tracep->fullSData(oldp+34,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[11]),16);
        tracep->fullSData(oldp+35,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[0]),12);
        tracep->fullSData(oldp+36,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[1]),12);
        tracep->fullSData(oldp+37,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[2]),12);
        tracep->fullSData(oldp+38,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[3]),12);
        tracep->fullSData(oldp+39,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[4]),12);
        tracep->fullSData(oldp+40,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[5]),12);
        tracep->fullSData(oldp+41,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[6]),12);
        tracep->fullSData(oldp+42,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[7]),12);
        tracep->fullSData(oldp+43,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[8]),12);
        tracep->fullSData(oldp+44,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[9]),12);
        tracep->fullSData(oldp+45,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[10]),12);
        tracep->fullSData(oldp+46,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[11]),12);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[3]),4);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[4]),4);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[5]),4);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[6]),4);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[7]),4);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[8]),4);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[9]),4);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[10]),4);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[11]),4);
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[3]),8);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[4]),8);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[0]),3);
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[1]),3);
        tracep->fullCData(oldp+71,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[2]),3);
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[3]),3);
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[4]),3);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__PC_TO_IFU),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__INSTR_TO_IFU),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__INSTR_ADDR),64);
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__READ_INSTR_START));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__READ_INSTR_FINISH));
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__RS1_Reg),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__RS2_Reg),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__SEXT_out),64);
        tracep->fullQData(oldp+88,((4ULL + vlSelf->top__DOT__PC_TO_IFU)),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__ALU_Number_1),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__ALU_Number_2),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__ALU_Result),64);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__ALU_Control),4);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__ALU_Inside_Control),4);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__SEXT_Control),3);
        tracep->fullBit(oldp+99,((1U & (~ ((((((((((IData)(vlSelf->top__DOT__CU__DOT__bne) 
                                                   | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                                  | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                                 | (IData)(vlSelf->top__DOT__CU__DOT__blt)) 
                                                | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                               | (IData)(vlSelf->top__DOT__CU__DOT__bgeu)) 
                                              | (IData)(vlSelf->top__DOT__CU__DOT__sd)) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__sh))))));
        tracep->fullBit(oldp+100,((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
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
        tracep->fullCData(oldp+101,(vlSelf->top__DOT__MEM_Ctrl),4);
        tracep->fullBit(oldp+102,((((((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
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
        tracep->fullSData(oldp+103,(vlSelf->top__DOT__CSR_Read_Addr),12);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__CSR_Read_Data),64);
        tracep->fullSData(oldp+106,(vlSelf->top__DOT__CSR_Write_Addr),12);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__CSR_Write_Data),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__mcause_Write_Data),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__csr__DOT__mcause_reg),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__mepc_Write_Data),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__csr__DOT__mepc_reg),64);
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__mepc_En));
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__csr__DOT__mtvec_reg),64);
        tracep->fullIData(oldp+120,((IData)(vlSelf->top__DOT__INSTR_TO_IFU)),32);
        tracep->fullCData(oldp+121,(((IData)(vlSelf->top__DOT__READ_INSTR_START) 
                                     << 1U)),2);
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel),2);
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release));
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_addr),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data),64);
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish));
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state),3);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state),3);
        tracep->fullCData(oldp+132,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri),2);
        tracep->fullCData(oldp+133,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot),2);
        tracep->fullCData(oldp+134,(((~ ((4U | (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot)) 
                                         - (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri))) 
                                     & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot))),3);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR),64);
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY));
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf),64);
        tracep->fullCData(oldp+141,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_RESP),2);
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID));
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY));
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state));
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__reg_file__DOT__Zero),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__reg_file__DOT__ra),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__reg_file__DOT__sp),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__reg_file__DOT__gp),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__reg_file__DOT__tp),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__reg_file__DOT__t0),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__reg_file__DOT__t1),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__reg_file__DOT__t2),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__reg_file__DOT__s0),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__reg_file__DOT__s1),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__reg_file__DOT__a0),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__reg_file__DOT__a1),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__reg_file__DOT__a2),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__reg_file__DOT__a3),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__reg_file__DOT__a4),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__reg_file__DOT__a5),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__reg_file__DOT__a6),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__reg_file__DOT__a7),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__reg_file__DOT__s2),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__reg_file__DOT__s3),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__reg_file__DOT__s4),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__reg_file__DOT__s5),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__reg_file__DOT__s6),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__reg_file__DOT__s7),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__reg_file__DOT__s8),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__reg_file__DOT__s9),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__reg_file__DOT__s10),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__reg_file__DOT__s11),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__reg_file__DOT__t3),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__reg_file__DOT__t4),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__reg_file__DOT__t5),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__reg_file__DOT__t6),64);
        tracep->fullWData(oldp+211,(vlSelf->top__DOT__reg_file__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
        tracep->fullWData(oldp+280,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+283,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+286,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+289,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+292,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+295,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+298,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+301,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+304,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+307,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+310,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+313,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+316,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+319,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+322,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+325,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+328,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+331,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+334,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+337,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+340,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+343,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+346,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+349,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+352,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+355,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+358,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+361,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+364,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+367,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+370,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullWData(oldp+373,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
        tracep->fullCData(oldp+376,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+377,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+378,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+379,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+380,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+381,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+382,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+383,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+384,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+385,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+386,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+387,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+388,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+389,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+390,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+391,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+392,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+393,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+394,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+395,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+396,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+397,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+398,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+399,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+400,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+401,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+402,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+403,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+404,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+405,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+406,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
        tracep->fullCData(oldp+407,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+424,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+428,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+430,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+448,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+450,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+454,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+456,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+458,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+460,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+462,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+464,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+470,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
        tracep->fullQData(oldp+472,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+474,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+475,(vlSelf->top__DOT__reg_file__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
        tracep->fullWData(oldp+544,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+547,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+550,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+553,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+556,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+559,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+562,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+565,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+568,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+571,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+574,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+577,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+580,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+583,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+586,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+589,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+592,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+595,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+598,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+601,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+604,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+607,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+610,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+613,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+616,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+619,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+622,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+625,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+628,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+631,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+634,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullWData(oldp+637,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
        tracep->fullCData(oldp+640,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+641,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+642,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+643,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+644,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+645,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+646,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+647,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+648,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+649,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+650,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+651,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+652,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+653,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+654,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+655,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+656,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+657,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+658,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+659,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+660,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+661,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+662,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+663,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+664,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+665,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+666,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+667,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+668,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+669,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+670,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
        tracep->fullCData(oldp+671,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
        tracep->fullQData(oldp+672,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+674,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+676,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+678,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+680,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+682,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+684,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+686,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+688,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+690,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+692,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+694,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+696,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+698,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+700,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+702,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+704,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+706,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+708,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+710,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+712,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+714,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+716,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+718,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+720,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+722,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+724,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+726,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+728,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+730,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+732,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+734,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
        tracep->fullQData(oldp+736,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+738,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+739,(vlSelf->top__DOT__sign_extend__DOT__immS),12);
        tracep->fullIData(oldp+740,(vlSelf->top__DOT__sign_extend__DOT__immJ),21);
        tracep->fullSData(oldp+741,(vlSelf->top__DOT__sign_extend__DOT__immB),13);
        tracep->fullWData(oldp+742,(vlSelf->top__DOT__sign_extend__DOT____Vcellinp__SEXT____pinNumber4),335);
        tracep->fullWData(oldp+753,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+756,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+759,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+762,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+765,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+768,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+769,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+770,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+771,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+772,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
        tracep->fullQData(oldp+773,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+775,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+777,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+779,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+781,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+783,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+785,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+786,(vlSelf->top__DOT____Vcellinp__MUX_REG1_PC____pinNumber4),130);
        tracep->fullWData(oldp+791,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+794,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+797,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+798,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+799,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+801,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+803,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+805,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+806,(vlSelf->top__DOT____Vcellinp__MUX_REG2_SEXT____pinNumber4),130);
        tracep->fullWData(oldp+811,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+814,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+817,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+818,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+819,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+821,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+823,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+825,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+826,(vlSelf->top__DOT__CU__DOT__Match_31_25_0100000));
        tracep->fullBit(oldp+827,(vlSelf->top__DOT__CU__DOT__addi));
        tracep->fullBit(oldp+828,(vlSelf->top__DOT__CU__DOT__addiw));
        tracep->fullBit(oldp+829,(vlSelf->top__DOT__CU__DOT__addw));
        tracep->fullBit(oldp+830,(vlSelf->top__DOT__CU__DOT__subw));
        tracep->fullBit(oldp+831,(vlSelf->top__DOT__CU__DOT__add));
        tracep->fullBit(oldp+832,(vlSelf->top__DOT__CU__DOT__sub));
        tracep->fullBit(oldp+833,(vlSelf->top__DOT__CU__DOT__mulw));
        tracep->fullBit(oldp+834,(vlSelf->top__DOT__CU__DOT__divw));
        tracep->fullBit(oldp+835,(vlSelf->top__DOT__CU__DOT__mul));
        tracep->fullBit(oldp+836,(vlSelf->top__DOT__CU__DOT__divu));
        tracep->fullBit(oldp+837,(vlSelf->top__DOT__CU__DOT__divuw));
        tracep->fullBit(oldp+838,(vlSelf->top__DOT__CU__DOT__remw));
        tracep->fullBit(oldp+839,(vlSelf->top__DOT__CU__DOT__remu));
        tracep->fullBit(oldp+840,(vlSelf->top__DOT__CU__DOT__remuw));
        tracep->fullBit(oldp+841,(vlSelf->top__DOT__CU__DOT__sltiu));
        tracep->fullBit(oldp+842,(vlSelf->top__DOT__CU__DOT__sltu));
        tracep->fullBit(oldp+843,(vlSelf->top__DOT__CU__DOT__slt));
        tracep->fullBit(oldp+844,(vlSelf->top__DOT__CU__DOT__slti));
        tracep->fullBit(oldp+845,(vlSelf->top__DOT__CU__DOT__sraw));
        tracep->fullBit(oldp+846,(vlSelf->top__DOT__CU__DOT__sllw));
        tracep->fullBit(oldp+847,(vlSelf->top__DOT__CU__DOT__srlw));
        tracep->fullBit(oldp+848,(vlSelf->top__DOT__CU__DOT__slli));
        tracep->fullBit(oldp+849,(vlSelf->top__DOT__CU__DOT__srli));
        tracep->fullBit(oldp+850,(vlSelf->top__DOT__CU__DOT__srai));
        tracep->fullBit(oldp+851,(vlSelf->top__DOT__CU__DOT__srliw));
        tracep->fullBit(oldp+852,(vlSelf->top__DOT__CU__DOT__slliw));
        tracep->fullBit(oldp+853,(vlSelf->top__DOT__CU__DOT__sraiw));
        tracep->fullBit(oldp+854,(vlSelf->top__DOT__CU__DOT__sll));
        tracep->fullBit(oldp+855,(vlSelf->top__DOT__CU__DOT__ld));
        tracep->fullBit(oldp+856,(vlSelf->top__DOT__CU__DOT__lw));
        tracep->fullBit(oldp+857,(vlSelf->top__DOT__CU__DOT__lbu));
        tracep->fullBit(oldp+858,(vlSelf->top__DOT__CU__DOT__lh));
        tracep->fullBit(oldp+859,(vlSelf->top__DOT__CU__DOT__lhu));
        tracep->fullBit(oldp+860,(vlSelf->top__DOT__CU__DOT__sd));
        tracep->fullBit(oldp+861,(vlSelf->top__DOT__CU__DOT__sw));
        tracep->fullBit(oldp+862,(vlSelf->top__DOT__CU__DOT__sb));
        tracep->fullBit(oldp+863,(vlSelf->top__DOT__CU__DOT__sh));
        tracep->fullBit(oldp+864,(vlSelf->top__DOT__CU__DOT__lb));
        tracep->fullBit(oldp+865,(vlSelf->top__DOT__CU__DOT__lwu));
        tracep->fullBit(oldp+866,(vlSelf->top__DOT__CU__DOT__andi));
        tracep->fullBit(oldp+867,(vlSelf->top__DOT__CU__DOT__xori));
        tracep->fullBit(oldp+868,(vlSelf->top__DOT__CU__DOT__ori));
        tracep->fullBit(oldp+869,(vlSelf->top__DOT__CU__DOT__bne));
        tracep->fullBit(oldp+870,(vlSelf->top__DOT__CU__DOT__beq));
        tracep->fullBit(oldp+871,(vlSelf->top__DOT__CU__DOT__bge));
        tracep->fullBit(oldp+872,(vlSelf->top__DOT__CU__DOT__blt));
        tracep->fullBit(oldp+873,(vlSelf->top__DOT__CU__DOT__bltu));
        tracep->fullBit(oldp+874,(vlSelf->top__DOT__CU__DOT__bgeu));
        tracep->fullBit(oldp+875,(vlSelf->top__DOT__CU__DOT__jalr));
        tracep->fullBit(oldp+876,(vlSelf->top__DOT__CU__DOT__csrrw));
        tracep->fullBit(oldp+877,(vlSelf->top__DOT__CU__DOT__csrrs));
        tracep->fullBit(oldp+878,(((((IData)(vlSelf->top__DOT__CU__DOT__sd) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__sh))));
        tracep->fullBit(oldp+879,(((((((IData)(vlSelf->top__DOT__CU__DOT__bne) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__blt)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__bgeu))));
        tracep->fullBit(oldp+880,((((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__addiw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__addw)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__subw)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__add)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__sub)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__jalr))));
        tracep->fullBit(oldp+881,(((IData)(vlSelf->top__DOT__CU__DOT__mulw) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__mul))));
        tracep->fullBit(oldp+882,(((((((IData)(vlSelf->top__DOT__CU__DOT__divw) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__remw)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__divu)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__divuw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__remu)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__remuw))));
        tracep->fullBit(oldp+883,(((((IData)(vlSelf->top__DOT__CU__DOT__sltiu) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__sltu)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__slt)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__slti))));
        tracep->fullBit(oldp+884,(((((((((((IData)(vlSelf->top__DOT__CU__DOT__sraw) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__sllw)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__srlw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__slli)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__srli)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__srai)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__srliw)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__slliw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__sraiw)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__sll))));
        tracep->fullBit(oldp+885,((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
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
        tracep->fullBit(oldp+886,(((((((IData)(vlSelf->top__DOT__CU__DOT__andi) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__xori)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT___or)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT___and)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT___xor)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__ori))));
        tracep->fullBit(oldp+887,((((((((((IData)(vlSelf->top__DOT__CU__DOT__sub) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__mul)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__remw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__xori)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__srliw)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__srlw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT___xor)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__csrrs))));
        tracep->fullBit(oldp+888,((((((((IData)(vlSelf->top__DOT__CU__DOT__sltiu) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__sltu)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__slli)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__jalr)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__remu)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__sll))));
        tracep->fullBit(oldp+889,((((IData)(vlSelf->top__DOT__CU__DOT__srai) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__remuw)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__bgeu))));
        tracep->fullSData(oldp+890,(vlSelf->top__DOT__CU__DOT__func_signal),12);
        tracep->fullCData(oldp+891,(vlSelf->top__DOT__CU__DOT__ALU_inside_signal),6);
        tracep->fullCData(oldp+892,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+893,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+894,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+895,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+896,(vlSelf->top__DOT__CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
        tracep->fullCData(oldp+897,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
        tracep->fullBit(oldp+898,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+899,(vlSelf->top__DOT__alu__DOT__Adder_out),64);
        tracep->fullQData(oldp+901,(vlSelf->top__DOT__alu__DOT__Shift_out),64);
        tracep->fullQData(oldp+903,(vlSelf->top__DOT__alu__DOT__Compare_out),64);
        tracep->fullQData(oldp+905,(vlSelf->top__DOT__alu__DOT__DIV_out),64);
        tracep->fullQData(oldp+907,(vlSelf->top__DOT__alu__DOT__Logic_out),64);
        tracep->fullQData(oldp+909,(vlSelf->top__DOT__alu__DOT__MUL_out),64);
        tracep->fullQData(oldp+911,(((8U & (IData)(vlSelf->top__DOT__ALU_Inside_Control))
                                      ? 0ULL : ((4U 
                                                 & (IData)(vlSelf->top__DOT__ALU_Inside_Control))
                                                 ? 0ULL
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ALU_Inside_Control))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALU_Inside_Control))
                                                   ? vlSelf->top__DOT__CSR_Read_Data
                                                   : vlSelf->top__DOT__csr__DOT__mtvec_reg)
                                                  : vlSelf->top__DOT__CSR_Read_Data)))),64);
        tracep->fullQData(oldp+913,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__resultAdd),64);
        tracep->fullQData(oldp+915,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__resultSub),64);
        tracep->fullWData(oldp+917,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4),340);
        tracep->fullWData(oldp+928,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+931,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+934,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+937,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+940,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullCData(oldp+943,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+944,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+945,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+946,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+947,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
        tracep->fullQData(oldp+948,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+950,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+952,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+954,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+956,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+958,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+960,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+961,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__result),64);
        tracep->fullWData(oldp+963,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4),136);
        tracep->fullWData(oldp+968,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+971,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+974,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+975,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[1]),4);
        tracep->fullQData(oldp+976,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+978,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+980,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+982,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+983,((vlSelf->top__DOT__ALU_Number_1 
                                     & vlSelf->top__DOT__ALU_Number_2)),64);
        tracep->fullQData(oldp+985,((vlSelf->top__DOT__ALU_Number_1 
                                     ^ vlSelf->top__DOT__ALU_Number_2)),64);
        tracep->fullQData(oldp+987,((vlSelf->top__DOT__ALU_Number_1 
                                     | vlSelf->top__DOT__ALU_Number_2)),64);
        tracep->fullWData(oldp+989,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4),204);
        tracep->fullWData(oldp+996,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+999,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+1002,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullCData(oldp+1005,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1006,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1007,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullQData(oldp+1008,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1010,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1012,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1014,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1016,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1017,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer),64);
        tracep->fullQData(oldp+1019,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer1),64);
        tracep->fullQData(oldp+1021,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer2),64);
        tracep->fullQData(oldp+1023,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer3),64);
        tracep->fullQData(oldp+1025,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer4),64);
        tracep->fullQData(oldp+1027,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer5),64);
        tracep->fullBit(oldp+1029,((vlSelf->top__DOT__ALU_Number_1 
                                    != vlSelf->top__DOT__ALU_Number_2)));
        tracep->fullBit(oldp+1030,((vlSelf->top__DOT__ALU_Number_1 
                                    == vlSelf->top__DOT__ALU_Number_2)));
        tracep->fullBit(oldp+1031,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ALU_Number_1, vlSelf->top__DOT__ALU_Number_2)));
        tracep->fullBit(oldp+1032,(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__ALU_Number_1, vlSelf->top__DOT__ALU_Number_2)));
        tracep->fullBit(oldp+1033,((vlSelf->top__DOT__ALU_Number_1 
                                    < vlSelf->top__DOT__ALU_Number_2)));
        tracep->fullBit(oldp+1034,((vlSelf->top__DOT__ALU_Number_1 
                                    >= vlSelf->top__DOT__ALU_Number_2)));
        tracep->fullIData(oldp+1035,((IData)(vlSelf->top__DOT__ALU_Number_1)),32);
        tracep->fullIData(oldp+1036,((IData)(vlSelf->top__DOT__ALU_Number_2)),32);
        tracep->fullIData(oldp+1037,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__divw),32);
        tracep->fullIData(oldp+1038,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__remw),32);
        tracep->fullQData(oldp+1039,(VL_DIV_QQQ(64, vlSelf->top__DOT__ALU_Number_1, vlSelf->top__DOT__ALU_Number_2)),64);
        tracep->fullIData(oldp+1041,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__divuw),32);
        tracep->fullQData(oldp+1042,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ALU_Number_1, vlSelf->top__DOT__ALU_Number_2)),64);
        tracep->fullIData(oldp+1044,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__remuw),32);
        tracep->fullWData(oldp+1045,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4),408);
        tracep->fullWData(oldp+1058,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+1061,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+1064,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+1067,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+1070,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+1073,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[5]),68);
        tracep->fullCData(oldp+1076,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1077,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1078,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+1079,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+1080,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+1081,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[5]),4);
        tracep->fullQData(oldp+1082,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1084,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1086,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1088,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1090,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1092,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1094,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1096,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1097,(vlSelf->top__DOT__alu__DOT____Vcellinp__Adder_mux____pinNumber4),612);
        tracep->fullWData(oldp+1117,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+1120,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+1123,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+1126,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+1129,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+1132,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+1135,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[6]),68);
        tracep->fullWData(oldp+1138,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[7]),68);
        tracep->fullWData(oldp+1141,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[8]),68);
        tracep->fullCData(oldp+1144,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1145,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1146,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+1147,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+1148,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+1149,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+1150,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+1151,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+1152,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[8]),4);
        tracep->fullQData(oldp+1153,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1155,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1157,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1159,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1161,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1163,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1165,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1167,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1169,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1171,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1173,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1174,(vlSelf->clk));
        tracep->fullBit(oldp+1175,(vlSelf->rst));
        tracep->fullQData(oldp+1176,(vlSelf->READ_DATA),64);
        tracep->fullBit(oldp+1178,(vlSelf->READ_FINISH));
        tracep->fullBit(oldp+1179,(vlSelf->READ_SIGNAL));
        tracep->fullQData(oldp+1180,(vlSelf->READ_ADDR),64);
        tracep->fullBit(oldp+1182,(vlSelf->ec_finish));
        tracep->fullQData(oldp+1183,(vlSelf->ex_data),64);
        tracep->fullBit(oldp+1185,(vlSelf->INSTR_ARRIVE));
        tracep->fullBit(oldp+1186,(vlSelf->INSTR_Complete));
        tracep->fullIData(oldp+1187,(vlSelf->INSTR_DATA),32);
        tracep->fullBit(oldp+1188,(((0x17U == (0x7fU 
                                               & vlSelf->INSTR_DATA)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->INSTR_DATA)))));
        tracep->fullBit(oldp+1189,(((((((((((((((((
                                                   ((((((((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
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
                                          | (0x37U 
                                             == (0x7fU 
                                                 & vlSelf->INSTR_DATA))) 
                                         | (0x6fU == 
                                            (0x7fU 
                                             & vlSelf->INSTR_DATA))) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__jalr)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__slti)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__lb)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__lwu)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__ori))));
        tracep->fullBit(oldp+1190,(((0x6fU == (0x7fU 
                                               & vlSelf->INSTR_DATA)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__jalr))));
        tracep->fullCData(oldp+1191,((((IData)(vlSelf->top__DOT__CU__DOT__jalr) 
                                       << 1U) | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->INSTR_DATA)))),2);
        tracep->fullCData(oldp+1192,((0x1fU & (vlSelf->INSTR_DATA 
                                               >> 0xfU))),5);
        tracep->fullCData(oldp+1193,((0x1fU & (vlSelf->INSTR_DATA 
                                               >> 0x14U))),5);
        tracep->fullCData(oldp+1194,((0x1fU & (vlSelf->INSTR_DATA 
                                               >> 7U))),5);
        tracep->fullSData(oldp+1195,((vlSelf->INSTR_DATA 
                                      >> 0x14U)),12);
        tracep->fullIData(oldp+1196,((0xfffff000U & vlSelf->INSTR_DATA)),32);
        tracep->fullCData(oldp+1197,((0xffU & (- (IData)(
                                                         (0x100073U 
                                                          == vlSelf->INSTR_DATA))))),8);
        tracep->fullCData(oldp+1198,((0x7fU & vlSelf->INSTR_DATA)),7);
        tracep->fullCData(oldp+1199,((7U & (vlSelf->INSTR_DATA 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+1200,((vlSelf->INSTR_DATA 
                                      >> 0x19U)),7);
        tracep->fullCData(oldp+1201,((vlSelf->INSTR_DATA 
                                      >> 0x1aU)),6);
        tracep->fullBit(oldp+1202,((0x13U == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1203,((0x3bU == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1204,((0x33U == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1205,((0x1bU == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1206,((3U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1207,((0x23U == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1208,((0x63U == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1209,((0x6fU == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1210,((0x67U == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1211,((0x17U == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1212,((0x37U == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1213,((0x73U == (0x7fU 
                                              & vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1214,((0U == (7U & (vlSelf->INSTR_DATA 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1215,((4U == (7U & (vlSelf->INSTR_DATA 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1216,((6U == (7U & (vlSelf->INSTR_DATA 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1217,((3U == (7U & (vlSelf->INSTR_DATA 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1218,((2U == (7U & (vlSelf->INSTR_DATA 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1219,((5U == (7U & (vlSelf->INSTR_DATA 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1220,((1U == (7U & (vlSelf->INSTR_DATA 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1221,((7U == (7U & (vlSelf->INSTR_DATA 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1222,((0U == (vlSelf->INSTR_DATA 
                                           >> 0x19U))));
        tracep->fullBit(oldp+1223,((1U == (vlSelf->INSTR_DATA 
                                           >> 0x19U))));
        tracep->fullBit(oldp+1224,((0U == (vlSelf->INSTR_DATA 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+1225,((0x10U == (vlSelf->INSTR_DATA 
                                              >> 0x1aU))));
        tracep->fullBit(oldp+1226,(((IData)((0x6033U 
                                             == (0x707fU 
                                                 & vlSelf->INSTR_DATA))) 
                                    & (1U == (vlSelf->INSTR_DATA 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+1227,(((IData)((0x5033U 
                                             == (0x707fU 
                                                 & vlSelf->INSTR_DATA))) 
                                    & (0U == (vlSelf->INSTR_DATA 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+1228,((0x100073U == vlSelf->INSTR_DATA)));
        tracep->fullBit(oldp+1229,((0x73U == vlSelf->INSTR_DATA)));
        tracep->fullBit(oldp+1230,((0x30200073U == vlSelf->INSTR_DATA)));
        tracep->fullBit(oldp+1231,(((((((((((((((((
                                                   ((((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
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
        tracep->fullBit(oldp+1232,(((0x17U == (0x7fU 
                                               & vlSelf->INSTR_DATA)) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->INSTR_DATA)))));
        tracep->fullBit(oldp+1233,(((((((((((((((((
                                                   ((((((((IData)(vlSelf->top__DOT__CU__DOT__addw) 
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
                                    | (0x30200073U 
                                       == vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1234,(((((IData)(vlSelf->top__DOT__CU__DOT__csrrw) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__csrrs)) 
                                     | (0x73U == vlSelf->INSTR_DATA)) 
                                    | (0x30200073U 
                                       == vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1235,(((((((((((((((((
                                                   (((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
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
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->INSTR_DATA))) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__lb)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__lwu)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__csrrw))));
        tracep->fullBit(oldp+1236,(((((((((((IData)(vlSelf->top__DOT__CU__DOT__addiw) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__add)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__sllw)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__slliw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT___or)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__addw)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__divu)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__ori)) 
                                    | (0x73U == vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1237,((((((((IData)(vlSelf->top__DOT__CU__DOT__subw) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__slt)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__srli)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__blt)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__divuw)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__slti)) 
                                    | (0x30200073U 
                                       == vlSelf->INSTR_DATA))));
        tracep->fullBit(oldp+1238,(vlSelf->top__DOT__Write_En));
        tracep->fullBit(oldp+1239,(0U));
        tracep->fullQData(oldp+1240,(0ULL),64);
        tracep->fullCData(oldp+1242,(1U),3);
        tracep->fullCData(oldp+1243,(2U),3);
        tracep->fullIData(oldp+1244,(0x20U),32);
        tracep->fullIData(oldp+1245,(5U),32);
        tracep->fullIData(oldp+1246,(0x40U),32);
        tracep->fullIData(oldp+1247,(1U),32);
        tracep->fullIData(oldp+1248,(0x45U),32);
        tracep->fullIData(oldp+1249,(0x20U),32);
        tracep->fullIData(oldp+1250,(3U),32);
        tracep->fullIData(oldp+1251,(0x43U),32);
        tracep->fullIData(oldp+1252,(5U),32);
        tracep->fullIData(oldp+1253,(2U),32);
        tracep->fullIData(oldp+1254,(0x41U),32);
        tracep->fullIData(oldp+1255,(2U),32);
        tracep->fullBit(oldp+1256,(1U));
        tracep->fullCData(oldp+1257,(3U),3);
        tracep->fullCData(oldp+1258,(4U),3);
        tracep->fullCData(oldp+1259,(5U),3);
        tracep->fullCData(oldp+1260,(0U),4);
        tracep->fullCData(oldp+1261,(1U),4);
        tracep->fullCData(oldp+1262,(2U),4);
        tracep->fullCData(oldp+1263,(3U),4);
        tracep->fullCData(oldp+1264,(4U),4);
        tracep->fullCData(oldp+1265,(5U),4);
        tracep->fullCData(oldp+1266,(8U),4);
        tracep->fullIData(oldp+1267,(6U),32);
        tracep->fullIData(oldp+1268,(4U),32);
        tracep->fullCData(oldp+1269,(0xfU),4);
        tracep->fullQData(oldp+1270,(0x801012084309015ULL),60);
        tracep->fullIData(oldp+1272,(0xaU),32);
        tracep->fullIData(oldp+1273,(6U),32);
        tracep->fullIData(oldp+1274,(0xcU),32);
        __Vtemp1792[0U] = 0x270028U;
        __Vtemp1792[1U] = 0x800046U;
        __Vtemp1792[2U] = 0x2040102U;
        __Vtemp1792[3U] = 0x8010400U;
        __Vtemp1792[4U] = 0x20031002U;
        __Vtemp1792[5U] = 0x80004005U;
        tracep->fullWData(oldp+1275,(__Vtemp1792),192);
        tracep->fullIData(oldp+1281,(0x10U),32);
        tracep->fullIData(oldp+1282,(0xcU),32);
        tracep->fullQData(oldp+1283,(0x814223140dULL),40);
        tracep->fullIData(oldp+1285,(8U),32);
        tracep->fullCData(oldp+1286,(6U),4);
        tracep->fullCData(oldp+1287,(7U),4);
        tracep->fullIData(oldp+1288,(0x44U),32);
        tracep->fullIData(oldp+1289,(3U),32);
        tracep->fullQData(oldp+1290,(vlSelf->top__DOT__alu__DOT__csr_op__DOT__t),64);
        tracep->fullIData(oldp+1292,(9U),32);
        tracep->fullIData(oldp+1293,(9U),32);
        tracep->fullSData(oldp+1294,(0x305U),12);
        tracep->fullSData(oldp+1295,(0x341U),12);
        tracep->fullSData(oldp+1296,(0x342U),12);
    }
}
