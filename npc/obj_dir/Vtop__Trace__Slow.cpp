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
        tracep->declBit(c+145,"clk", false,-1);
        tracep->declBit(c+146,"rst", false,-1);
        tracep->declBus(c+147,"instr_in", false,-1, 31,0);
        tracep->declQuad(c+148,"SEXT_result", false,-1, 63,0);
        tracep->declQuad(c+150,"PC_Test", false,-1, 63,0);
        tracep->declBit(c+145,"top clk", false,-1);
        tracep->declBit(c+146,"top rst", false,-1);
        tracep->declBus(c+147,"top instr_in", false,-1, 31,0);
        tracep->declQuad(c+148,"top SEXT_result", false,-1, 63,0);
        tracep->declQuad(c+150,"top PC_Test", false,-1, 63,0);
        tracep->declQuad(c+152,"top PC_Wire", false,-1, 63,0);
        tracep->declQuad(c+154,"top PC_Next_Wire", false,-1, 63,0);
        tracep->declBus(c+147,"top instruction", false,-1, 31,0);
        tracep->declBus(c+138,"top SEXT_Control", false,-1, 2,0);
        tracep->declBus(c+135,"top ALU_Control_wire", false,-1, 3,0);
        tracep->declQuad(c+152,"top pc_adder PC", false,-1, 63,0);
        tracep->declQuad(c+154,"top pc_adder PC_Next", false,-1, 63,0);
        tracep->declBit(c+145,"top pc_reg clk", false,-1);
        tracep->declBit(c+146,"top pc_reg rst", false,-1);
        tracep->declQuad(c+154,"top pc_reg PC_Next", false,-1, 63,0);
        tracep->declQuad(c+152,"top pc_reg PC", false,-1, 63,0);
        tracep->declBus(c+199,"top pc_reg pc_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+200,"top pc_reg pc_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+145,"top pc_reg pc_reg clk", false,-1);
        tracep->declBit(c+146,"top pc_reg pc_reg rst", false,-1);
        tracep->declQuad(c+154,"top pc_reg pc_reg din", false,-1, 63,0);
        tracep->declQuad(c+152,"top pc_reg pc_reg dout", false,-1, 63,0);
        tracep->declBit(c+202,"top pc_reg pc_reg wen", false,-1);
        tracep->declQuad(c+152,"top IFU_Lee PC_IN", false,-1, 63,0);
        tracep->declBus(c+147,"top IFU_Lee Instr_IN", false,-1, 31,0);
        tracep->declQuad(c+150,"top IFU_Lee PC_OUT", false,-1, 63,0);
        tracep->declBus(c+147,"top IFU_Lee Instr_OUT", false,-1, 31,0);
        tracep->declBus(c+147,"top HY_CU instr", false,-1, 31,0);
        tracep->declBus(c+135,"top HY_CU ALU_Control", false,-1, 3,0);
        tracep->declBus(c+138,"top HY_CU SEXT_Control", false,-1, 2,0);
        tracep->declBus(c+156,"top HY_CU instr_6_0", false,-1, 6,0);
        tracep->declBus(c+157,"top HY_CU instr_14_12", false,-1, 2,0);
        tracep->declBus(c+158,"top HY_CU instr_31_25", false,-1, 6,0);
        tracep->declBus(c+159,"top HY_CU instr_31_26", false,-1, 5,0);
        tracep->declBit(c+160,"top HY_CU Match_6_0_0010011", false,-1);
        tracep->declBit(c+161,"top HY_CU Match_6_0_0111011", false,-1);
        tracep->declBit(c+162,"top HY_CU Match_6_0_0110011", false,-1);
        tracep->declBit(c+163,"top HY_CU Match_6_0_0011011", false,-1);
        tracep->declBit(c+164,"top HY_CU Match_6_0_0000011", false,-1);
        tracep->declBit(c+165,"top HY_CU Match_6_0_0100011", false,-1);
        tracep->declBit(c+166,"top HY_CU Match_6_0_1100011", false,-1);
        tracep->declBit(c+167,"top HY_CU Match_6_0_1101111", false,-1);
        tracep->declBit(c+168,"top HY_CU Match_6_0_1100111", false,-1);
        tracep->declBit(c+169,"top HY_CU Match_6_0_0010111", false,-1);
        tracep->declBit(c+170,"top HY_CU Match_6_0_0110111", false,-1);
        tracep->declBit(c+171,"top HY_CU Match_6_0_1110011", false,-1);
        tracep->declBit(c+172,"top HY_CU Match_14_12_000", false,-1);
        tracep->declBit(c+173,"top HY_CU Match_14_12_100", false,-1);
        tracep->declBit(c+174,"top HY_CU Match_14_12_110", false,-1);
        tracep->declBit(c+175,"top HY_CU Match_14_12_011", false,-1);
        tracep->declBit(c+176,"top HY_CU Match_14_12_010", false,-1);
        tracep->declBit(c+177,"top HY_CU Match_14_12_101", false,-1);
        tracep->declBit(c+178,"top HY_CU Match_14_12_001", false,-1);
        tracep->declBit(c+179,"top HY_CU Match_14_12_111", false,-1);
        tracep->declBit(c+180,"top HY_CU Match_31_25_0000000", false,-1);
        tracep->declBit(c+49,"top HY_CU Match_31_25_0100000", false,-1);
        tracep->declBit(c+181,"top HY_CU Match_31_25_0000001", false,-1);
        tracep->declBit(c+182,"top HY_CU Match_31_26_000000", false,-1);
        tracep->declBit(c+183,"top HY_CU Match_31_26_010000", false,-1);
        tracep->declBit(c+68,"top HY_CU addi", false,-1);
        tracep->declBit(c+69,"top HY_CU addiw", false,-1);
        tracep->declBit(c+50,"top HY_CU addw", false,-1);
        tracep->declBit(c+51,"top HY_CU subw", false,-1);
        tracep->declBit(c+52,"top HY_CU add", false,-1);
        tracep->declBit(c+53,"top HY_CU sub", false,-1);
        tracep->declBit(c+58,"top HY_CU mulw", false,-1);
        tracep->declBit(c+59,"top HY_CU divw", false,-1);
        tracep->declBit(c+60,"top HY_CU mul", false,-1);
        tracep->declBit(c+61,"top HY_CU remw", false,-1);
        tracep->declBit(c+54,"top HY_CU sltiu", false,-1);
        tracep->declBit(c+64,"top HY_CU sltu", false,-1);
        tracep->declBit(c+65,"top HY_CU slt", false,-1);
        tracep->declBit(c+55,"top HY_CU sraw", false,-1);
        tracep->declBit(c+66,"top HY_CU sllw", false,-1);
        tracep->declBit(c+67,"top HY_CU srlw", false,-1);
        tracep->declBit(c+56,"top HY_CU slli", false,-1);
        tracep->declBit(c+184,"top HY_CU srli", false,-1);
        tracep->declBit(c+185,"top HY_CU srai", false,-1);
        tracep->declBit(c+70,"top HY_CU srliw", false,-1);
        tracep->declBit(c+71,"top HY_CU slliw", false,-1);
        tracep->declBit(c+72,"top HY_CU sraiw", false,-1);
        tracep->declBit(c+57,"top HY_CU ld", false,-1);
        tracep->declBit(c+73,"top HY_CU lw", false,-1);
        tracep->declBit(c+74,"top HY_CU lbu", false,-1);
        tracep->declBit(c+75,"top HY_CU lh", false,-1);
        tracep->declBit(c+76,"top HY_CU lhu", false,-1);
        tracep->declBit(c+77,"top HY_CU sd", false,-1);
        tracep->declBit(c+78,"top HY_CU sw", false,-1);
        tracep->declBit(c+79,"top HY_CU sb", false,-1);
        tracep->declBit(c+80,"top HY_CU sh", false,-1);
        tracep->declBit(c+82,"top HY_CU andi", false,-1);
        tracep->declBit(c+83,"top HY_CU xori", false,-1);
        tracep->declBit(c+84,"top HY_CU bne", false,-1);
        tracep->declBit(c+85,"top HY_CU beq", false,-1);
        tracep->declBit(c+86,"top HY_CU bge", false,-1);
        tracep->declBit(c+87,"top HY_CU blt", false,-1);
        tracep->declBit(c+88,"top HY_CU bltu", false,-1);
        tracep->declBit(c+167,"top HY_CU jal", false,-1);
        tracep->declBit(c+89,"top HY_CU jalr", false,-1);
        tracep->declBit(c+169,"top HY_CU auipc", false,-1);
        tracep->declBit(c+170,"top HY_CU lui", false,-1);
        tracep->declBit(c+186,"top HY_CU ebreak", false,-1);
        tracep->declBit(c+187,"top HY_CU TypeI", false,-1);
        tracep->declBit(c+188,"top HY_CU TypeU", false,-1);
        tracep->declBit(c+81,"top HY_CU TypeS", false,-1);
        tracep->declBit(c+167,"top HY_CU TypeJ", false,-1);
        tracep->declBit(c+90,"top HY_CU TypeB", false,-1);
        tracep->declBit(c+189,"top HY_CU TypeR", false,-1);
        tracep->declBit(c+190,"top HY_CU ALU_Adder", false,-1);
        tracep->declBit(c+62,"top HY_CU ALU_Mul", false,-1);
        tracep->declBit(c+63,"top HY_CU ALU_Div", false,-1);
        tracep->declBit(c+191,"top HY_CU ALU_Compare", false,-1);
        tracep->declBit(c+192,"top HY_CU ALU_Shift", false,-1);
        tracep->declBit(c+193,"top HY_CU ALU_LS", false,-1);
        tracep->declBit(c+194,"top HY_CU ALU_LogicOpt", false,-1);
        tracep->declBit(c+90,"top HY_CU ALU_Branch", false,-1);
        tracep->declBit(c+195,"top HY_CU ALU_Jump", false,-1);
        tracep->declBit(c+169,"top HY_CU ALU_auipc", false,-1);
        tracep->declBit(c+170,"top HY_CU ALU_lui", false,-1);
        tracep->declBus(c+196,"top HY_CU func_signal", false,-1, 10,0);
        tracep->declBus(c+203,"top HY_CU IMMI", false,-1, 2,0);
        tracep->declBus(c+204,"top HY_CU IMMU", false,-1, 2,0);
        tracep->declBus(c+205,"top HY_CU IMMS", false,-1, 2,0);
        tracep->declBus(c+206,"top HY_CU IMMJ", false,-1, 2,0);
        tracep->declBus(c+207,"top HY_CU IMMB", false,-1, 2,0);
        tracep->declBus(c+208,"top HY_CU MUX_Adder", false,-1, 3,0);
        tracep->declBus(c+209,"top HY_CU MUX_Shift", false,-1, 3,0);
        tracep->declBus(c+210,"top HY_CU MUX_Compare", false,-1, 3,0);
        tracep->declBus(c+211,"top HY_CU MUX_DIV", false,-1, 3,0);
        tracep->declBus(c+212,"top HY_CU MUX_Logic", false,-1, 3,0);
        tracep->declBus(c+213,"top HY_CU MUX_MUL", false,-1, 3,0);
        tracep->declBus(c+214,"top HY_CU func_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+214,"top HY_CU func_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+215,"top HY_CU func_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+135,"top HY_CU func_choose out", false,-1, 3,0);
        tracep->declBus(c+196,"top HY_CU func_choose key", false,-1, 10,0);
        tracep->declBus(c+216,"top HY_CU func_choose default_out", false,-1, 3,0);
        tracep->declArray(c+217,"top HY_CU func_choose lut", false,-1, 164,0);
        tracep->declBus(c+214,"top HY_CU func_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+214,"top HY_CU func_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+215,"top HY_CU func_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+223,"top HY_CU func_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+135,"top HY_CU func_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+196,"top HY_CU func_choose i0 key", false,-1, 10,0);
        tracep->declBus(c+216,"top HY_CU func_choose i0 default_out", false,-1, 3,0);
        tracep->declArray(c+217,"top HY_CU func_choose i0 lut", false,-1, 164,0);
        tracep->declBus(c+224,"top HY_CU func_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+1+i*1,"top HY_CU func_choose i0 pair_list", true,(i+0), 14,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+12+i*1,"top HY_CU func_choose i0 key_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+23+i*1,"top HY_CU func_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+136,"top HY_CU func_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+137,"top HY_CU func_choose i0 hit", false,-1);
        tracep->declBus(c+225,"top HY_CU func_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+226,"top HY_CU CU_ImmType NR_KEY", false,-1, 31,0);
        tracep->declBus(c+226,"top HY_CU CU_ImmType KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+227,"top HY_CU CU_ImmType DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+138,"top HY_CU CU_ImmType out", false,-1, 2,0);
        tracep->declBus(c+139,"top HY_CU CU_ImmType key", false,-1, 4,0);
        tracep->declBus(c+203,"top HY_CU CU_ImmType default_out", false,-1, 2,0);
        tracep->declQuad(c+228,"top HY_CU CU_ImmType lut", false,-1, 39,0);
        tracep->declBus(c+226,"top HY_CU CU_ImmType i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+226,"top HY_CU CU_ImmType i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+227,"top HY_CU CU_ImmType i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+223,"top HY_CU CU_ImmType i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+138,"top HY_CU CU_ImmType i0 out", false,-1, 2,0);
        tracep->declBus(c+139,"top HY_CU CU_ImmType i0 key", false,-1, 4,0);
        tracep->declBus(c+203,"top HY_CU CU_ImmType i0 default_out", false,-1, 2,0);
        tracep->declQuad(c+228,"top HY_CU CU_ImmType i0 lut", false,-1, 39,0);
        tracep->declBus(c+230,"top HY_CU CU_ImmType i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+34+i*1,"top HY_CU CU_ImmType i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+39+i*1,"top HY_CU CU_ImmType i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+44+i*1,"top HY_CU CU_ImmType i0 data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+140,"top HY_CU CU_ImmType i0 lut_out", false,-1, 2,0);
        tracep->declBit(c+141,"top HY_CU CU_ImmType i0 hit", false,-1);
        tracep->declBus(c+231,"top HY_CU CU_ImmType i0 i", false,-1, 31,0);
        tracep->declBus(c+147,"top Sign_Extend Instr", false,-1, 31,0);
        tracep->declBus(c+138,"top Sign_Extend ControlUnit", false,-1, 2,0);
        tracep->declQuad(c+148,"top Sign_Extend SEXT_Out", false,-1, 63,0);
        tracep->declBus(c+197,"top Sign_Extend immI", false,-1, 11,0);
        tracep->declBus(c+198,"top Sign_Extend immU", false,-1, 31,0);
        tracep->declBus(c+91,"top Sign_Extend immS", false,-1, 11,0);
        tracep->declBus(c+92,"top Sign_Extend immJ", false,-1, 20,0);
        tracep->declBus(c+93,"top Sign_Extend immB", false,-1, 12,0);
        tracep->declBus(c+226,"top Sign_Extend SEXT NR_KEY", false,-1, 31,0);
        tracep->declBus(c+227,"top Sign_Extend SEXT KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+199,"top Sign_Extend SEXT DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+148,"top Sign_Extend SEXT out", false,-1, 63,0);
        tracep->declBus(c+138,"top Sign_Extend SEXT key", false,-1, 2,0);
        tracep->declQuad(c+232,"top Sign_Extend SEXT default_out", false,-1, 63,0);
        tracep->declArray(c+94,"top Sign_Extend SEXT lut", false,-1, 334,0);
        tracep->declBus(c+226,"top Sign_Extend SEXT i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+227,"top Sign_Extend SEXT i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+199,"top Sign_Extend SEXT i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+223,"top Sign_Extend SEXT i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+148,"top Sign_Extend SEXT i0 out", false,-1, 63,0);
        tracep->declBus(c+138,"top Sign_Extend SEXT i0 key", false,-1, 2,0);
        tracep->declQuad(c+232,"top Sign_Extend SEXT i0 default_out", false,-1, 63,0);
        tracep->declArray(c+94,"top Sign_Extend SEXT i0 lut", false,-1, 334,0);
        tracep->declBus(c+234,"top Sign_Extend SEXT i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+105+i*3,"top Sign_Extend SEXT i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+120+i*1,"top Sign_Extend SEXT i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+125+i*2,"top Sign_Extend SEXT i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+142,"top Sign_Extend SEXT i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+144,"top Sign_Extend SEXT i0 hit", false,-1);
        tracep->declBus(c+231,"top Sign_Extend SEXT i0 i", false,-1, 31,0);
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
    VlWide<6>/*191:0*/ __Vtemp141;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[0]),15);
        tracep->fullSData(oldp+2,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[1]),15);
        tracep->fullSData(oldp+3,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[2]),15);
        tracep->fullSData(oldp+4,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[3]),15);
        tracep->fullSData(oldp+5,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[4]),15);
        tracep->fullSData(oldp+6,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[5]),15);
        tracep->fullSData(oldp+7,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[6]),15);
        tracep->fullSData(oldp+8,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[7]),15);
        tracep->fullSData(oldp+9,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[8]),15);
        tracep->fullSData(oldp+10,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[9]),15);
        tracep->fullSData(oldp+11,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[10]),15);
        tracep->fullSData(oldp+12,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[0]),11);
        tracep->fullSData(oldp+13,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[1]),11);
        tracep->fullSData(oldp+14,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[2]),11);
        tracep->fullSData(oldp+15,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[3]),11);
        tracep->fullSData(oldp+16,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[4]),11);
        tracep->fullSData(oldp+17,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[5]),11);
        tracep->fullSData(oldp+18,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[6]),11);
        tracep->fullSData(oldp+19,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[7]),11);
        tracep->fullSData(oldp+20,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[8]),11);
        tracep->fullSData(oldp+21,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[9]),11);
        tracep->fullSData(oldp+22,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[10]),11);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[3]),4);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[4]),4);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[5]),4);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[6]),4);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[7]),4);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[8]),4);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[9]),4);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[10]),4);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[3]),8);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[4]),8);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[0]),3);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[1]),3);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[2]),3);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[3]),3);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[4]),3);
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__HY_CU__DOT__addw));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__HY_CU__DOT__subw));
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__HY_CU__DOT__add));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__HY_CU__DOT__sub));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__HY_CU__DOT__sltiu));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__HY_CU__DOT__sraw));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__HY_CU__DOT__slli));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__HY_CU__DOT__ld));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__HY_CU__DOT__mulw));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__HY_CU__DOT__divw));
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__HY_CU__DOT__mul));
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__HY_CU__DOT__remw));
        tracep->fullBit(oldp+62,(((IData)(vlSelf->top__DOT__HY_CU__DOT__mulw) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul))));
        tracep->fullBit(oldp+63,(((IData)(vlSelf->top__DOT__HY_CU__DOT__divw) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw))));
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__HY_CU__DOT__sltu));
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__HY_CU__DOT__slt));
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__HY_CU__DOT__sllw));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__HY_CU__DOT__srlw));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__HY_CU__DOT__addi));
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__HY_CU__DOT__addiw));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__HY_CU__DOT__srliw));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__HY_CU__DOT__slliw));
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__HY_CU__DOT__sraiw));
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__HY_CU__DOT__lw));
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__HY_CU__DOT__lbu));
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__HY_CU__DOT__lh));
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__HY_CU__DOT__lhu));
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__HY_CU__DOT__sd));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__HY_CU__DOT__sw));
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__HY_CU__DOT__sb));
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__HY_CU__DOT__sh));
        tracep->fullBit(oldp+81,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__HY_CU__DOT__andi));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__HY_CU__DOT__xori));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__HY_CU__DOT__bne));
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__HY_CU__DOT__beq));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__HY_CU__DOT__bge));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__HY_CU__DOT__blt));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__HY_CU__DOT__bltu));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__HY_CU__DOT__jalr));
        tracep->fullBit(oldp+90,((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu))));
        tracep->fullSData(oldp+91,(vlSelf->top__DOT__Sign_Extend__DOT__immS),12);
        tracep->fullIData(oldp+92,(vlSelf->top__DOT__Sign_Extend__DOT__immJ),21);
        tracep->fullSData(oldp+93,(vlSelf->top__DOT__Sign_Extend__DOT__immB),13);
        tracep->fullWData(oldp+94,(vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4),335);
        tracep->fullWData(oldp+105,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+108,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+111,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+114,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+117,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+120,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__ALU_Control_wire),4);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+138,(vlSelf->top__DOT__SEXT_Control),3);
        tracep->fullCData(oldp+139,(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
        tracep->fullCData(oldp+140,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+145,(vlSelf->clk));
        tracep->fullBit(oldp+146,(vlSelf->rst));
        tracep->fullIData(oldp+147,(vlSelf->instr_in),32);
        tracep->fullQData(oldp+148,(vlSelf->SEXT_result),64);
        tracep->fullQData(oldp+150,(vlSelf->PC_Test),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__PC_Wire),64);
        tracep->fullQData(oldp+154,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
        tracep->fullCData(oldp+156,((0x7fU & vlSelf->instr_in)),7);
        tracep->fullCData(oldp+157,((7U & (vlSelf->instr_in 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+158,((vlSelf->instr_in 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+159,((vlSelf->instr_in 
                                     >> 0x1aU)),6);
        tracep->fullBit(oldp+160,((0x13U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+161,((0x3bU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+162,((0x33U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+163,((0x1bU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+164,((3U == (0x7fU & vlSelf->instr_in))));
        tracep->fullBit(oldp+165,((0x23U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+166,((0x63U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+167,((0x6fU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+168,((0x67U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+169,((0x17U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+170,((0x37U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+171,((0x73U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->fullBit(oldp+172,((0U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+173,((4U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+174,((6U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+175,((3U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+176,((2U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+177,((5U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+178,((1U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+179,((7U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+180,((0U == (vlSelf->instr_in 
                                          >> 0x19U))));
        tracep->fullBit(oldp+181,((1U == (vlSelf->instr_in 
                                          >> 0x19U))));
        tracep->fullBit(oldp+182,((0U == (vlSelf->instr_in 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+183,((0x10U == (vlSelf->instr_in 
                                             >> 0x1aU))));
        tracep->fullBit(oldp+184,(vlSelf->top__DOT__HY_CU__DOT__srli));
        tracep->fullBit(oldp+185,(vlSelf->top__DOT__HY_CU__DOT__srai));
        tracep->fullBit(oldp+186,((0x100073U == vlSelf->instr_in)));
        tracep->fullBit(oldp+187,(((((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu)) 
                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__ld)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__andi)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->instr_in))) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->fullBit(oldp+188,(((0x17U == (0x7fU 
                                              & vlSelf->instr_in)) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->instr_in)))));
        tracep->fullBit(oldp+189,((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addw) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__mulw)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__divw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT___and))));
        tracep->fullBit(oldp+190,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub))));
        tracep->fullBit(oldp+191,((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt))));
        tracep->fullBit(oldp+192,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sraw) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw))));
        tracep->fullBit(oldp+193,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
        tracep->fullBit(oldp+194,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__andi) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT___and))));
        tracep->fullBit(oldp+195,(((0x6fU == (0x7fU 
                                              & vlSelf->instr_in)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->fullSData(oldp+196,(vlSelf->top__DOT__HY_CU__DOT__func_signal),11);
        tracep->fullSData(oldp+197,((vlSelf->instr_in 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+198,((0xfffff000U & vlSelf->instr_in)),32);
        tracep->fullIData(oldp+199,(0x40U),32);
        tracep->fullQData(oldp+200,(0x80000000ULL),64);
        tracep->fullBit(oldp+202,(1U));
        tracep->fullCData(oldp+203,(1U),3);
        tracep->fullCData(oldp+204,(2U),3);
        tracep->fullCData(oldp+205,(3U),3);
        tracep->fullCData(oldp+206,(4U),3);
        tracep->fullCData(oldp+207,(5U),3);
        tracep->fullCData(oldp+208,(0U),4);
        tracep->fullCData(oldp+209,(1U),4);
        tracep->fullCData(oldp+210,(2U),4);
        tracep->fullCData(oldp+211,(3U),4);
        tracep->fullCData(oldp+212,(4U),4);
        tracep->fullCData(oldp+213,(5U),4);
        tracep->fullIData(oldp+214,(0xbU),32);
        tracep->fullIData(oldp+215,(4U),32);
        tracep->fullCData(oldp+216,(0xfU),4);
        __Vtemp141[0U] = 0x130017U;
        __Vtemp141[1U] = 0x40104010U;
        __Vtemp141[2U] = 0x4100010U;
        __Vtemp141[3U] = 0x3100410U;
        __Vtemp141[4U] = 0x100290U;
        __Vtemp141[5U] = 0x10U;
        tracep->fullWData(oldp+217,(__Vtemp141),165);
        tracep->fullIData(oldp+223,(1U),32);
        tracep->fullIData(oldp+224,(0xfU),32);
        tracep->fullIData(oldp+225,(0xbU),32);
        tracep->fullIData(oldp+226,(5U),32);
        tracep->fullIData(oldp+227,(3U),32);
        tracep->fullQData(oldp+228,(0x814223140dULL),40);
        tracep->fullIData(oldp+230,(8U),32);
        tracep->fullIData(oldp+231,(5U),32);
        tracep->fullQData(oldp+232,(0ULL),64);
        tracep->fullIData(oldp+234,(0x43U),32);
    }
}
