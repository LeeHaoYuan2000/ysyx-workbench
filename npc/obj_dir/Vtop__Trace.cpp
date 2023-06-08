// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[0]),15);
            tracep->chgSData(oldp+1,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[1]),15);
            tracep->chgSData(oldp+2,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[2]),15);
            tracep->chgSData(oldp+3,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[3]),15);
            tracep->chgSData(oldp+4,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[4]),15);
            tracep->chgSData(oldp+5,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[5]),15);
            tracep->chgSData(oldp+6,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[6]),15);
            tracep->chgSData(oldp+7,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[7]),15);
            tracep->chgSData(oldp+8,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[8]),15);
            tracep->chgSData(oldp+9,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[9]),15);
            tracep->chgSData(oldp+10,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[10]),15);
            tracep->chgSData(oldp+11,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[0]),11);
            tracep->chgSData(oldp+12,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[1]),11);
            tracep->chgSData(oldp+13,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[2]),11);
            tracep->chgSData(oldp+14,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[3]),11);
            tracep->chgSData(oldp+15,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[4]),11);
            tracep->chgSData(oldp+16,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[5]),11);
            tracep->chgSData(oldp+17,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[6]),11);
            tracep->chgSData(oldp+18,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[7]),11);
            tracep->chgSData(oldp+19,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[8]),11);
            tracep->chgSData(oldp+20,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[9]),11);
            tracep->chgSData(oldp+21,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[10]),11);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[3]),4);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[4]),4);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[5]),4);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[6]),4);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[7]),4);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[8]),4);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[9]),4);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[10]),4);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[3]),8);
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[4]),8);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[0]),3);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[1]),3);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[2]),3);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[3]),3);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[4]),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__HY_CU__DOT__addw));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__HY_CU__DOT__subw));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__HY_CU__DOT__add));
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__HY_CU__DOT__sub));
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__HY_CU__DOT__sltiu));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__HY_CU__DOT__sraw));
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__HY_CU__DOT__slli));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__HY_CU__DOT__ld));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__HY_CU__DOT__mulw));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__HY_CU__DOT__divw));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__HY_CU__DOT__mul));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__HY_CU__DOT__remw));
            tracep->chgBit(oldp+61,(((IData)(vlSelf->top__DOT__HY_CU__DOT__mulw) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul))));
            tracep->chgBit(oldp+62,(((IData)(vlSelf->top__DOT__HY_CU__DOT__divw) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__HY_CU__DOT__sltu));
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__HY_CU__DOT__slt));
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__HY_CU__DOT__sllw));
            tracep->chgBit(oldp+66,(vlSelf->top__DOT__HY_CU__DOT__srlw));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__HY_CU__DOT__addi));
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__HY_CU__DOT__addiw));
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__HY_CU__DOT__srliw));
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__HY_CU__DOT__slliw));
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__HY_CU__DOT__sraiw));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__HY_CU__DOT__lw));
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__HY_CU__DOT__lbu));
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__HY_CU__DOT__lh));
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__HY_CU__DOT__lhu));
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__HY_CU__DOT__sd));
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__HY_CU__DOT__sw));
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__HY_CU__DOT__sb));
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__HY_CU__DOT__sh));
            tracep->chgBit(oldp+80,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__HY_CU__DOT__andi));
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__HY_CU__DOT__xori));
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__HY_CU__DOT__bne));
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__HY_CU__DOT__beq));
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__HY_CU__DOT__bge));
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__HY_CU__DOT__blt));
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__HY_CU__DOT__bltu));
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__HY_CU__DOT__jalr));
            tracep->chgBit(oldp+89,((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
            tracep->chgSData(oldp+90,(vlSelf->top__DOT__Sign_Extend__DOT__immS),12);
            tracep->chgIData(oldp+91,(vlSelf->top__DOT__Sign_Extend__DOT__immJ),21);
            tracep->chgSData(oldp+92,(vlSelf->top__DOT__Sign_Extend__DOT__immB),13);
            tracep->chgWData(oldp+93,(vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4),335);
            tracep->chgWData(oldp+104,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+107,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+110,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+113,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+116,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+119,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+120,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+122,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+123,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
            tracep->chgCData(oldp+134,(vlSelf->top__DOT__ALU_Control_wire),4);
            tracep->chgCData(oldp+135,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
            tracep->chgCData(oldp+137,(vlSelf->top__DOT__SEXT_Control),3);
            tracep->chgCData(oldp+138,(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
            tracep->chgCData(oldp+139,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+144,(vlSelf->clk));
        tracep->chgBit(oldp+145,(vlSelf->rst));
        tracep->chgIData(oldp+146,(vlSelf->instr_in),32);
        tracep->chgQData(oldp+147,(vlSelf->SEXT_result),64);
        tracep->chgQData(oldp+149,(vlSelf->PC_Test),64);
        tracep->chgQData(oldp+151,(vlSelf->top__DOT__PC_Wire),64);
        tracep->chgQData(oldp+153,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
        tracep->chgCData(oldp+155,((0x7fU & vlSelf->instr_in)),7);
        tracep->chgCData(oldp+156,((7U & (vlSelf->instr_in 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+157,((vlSelf->instr_in 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+158,((vlSelf->instr_in 
                                    >> 0x1aU)),6);
        tracep->chgBit(oldp+159,((0x13U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+160,((0x3bU == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+161,((0x33U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+162,((0x1bU == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+163,((3U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+164,((0x23U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+165,((0x63U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+166,((0x6fU == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+167,((0x67U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+168,((0x17U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+169,((0x37U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+170,((0x73U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+171,((0U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+172,((4U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+173,((6U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+174,((3U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+175,((2U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+176,((5U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+177,((1U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+178,((7U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+179,((0U == (vlSelf->instr_in 
                                         >> 0x19U))));
        tracep->chgBit(oldp+180,((1U == (vlSelf->instr_in 
                                         >> 0x19U))));
        tracep->chgBit(oldp+181,((0U == (vlSelf->instr_in 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+182,((0x10U == (vlSelf->instr_in 
                                            >> 0x1aU))));
        tracep->chgBit(oldp+183,(vlSelf->top__DOT__HY_CU__DOT__srli));
        tracep->chgBit(oldp+184,(vlSelf->top__DOT__HY_CU__DOT__srai));
        tracep->chgBit(oldp+185,((0x100073U == vlSelf->instr_in)));
        tracep->chgBit(oldp+186,(((((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
        tracep->chgBit(oldp+187,(((0x17U == (0x7fU 
                                             & vlSelf->instr_in)) 
                                  | (0x37U == (0x7fU 
                                               & vlSelf->instr_in)))));
        tracep->chgBit(oldp+188,((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addw) 
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
        tracep->chgBit(oldp+189,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub))));
        tracep->chgBit(oldp+190,((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt))));
        tracep->chgBit(oldp+191,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sraw) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw))));
        tracep->chgBit(oldp+192,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
        tracep->chgBit(oldp+193,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__andi) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT___and))));
        tracep->chgBit(oldp+194,(((0x6fU == (0x7fU 
                                             & vlSelf->instr_in)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->chgSData(oldp+195,(vlSelf->top__DOT__HY_CU__DOT__func_signal),11);
        tracep->chgSData(oldp+196,((vlSelf->instr_in 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+197,((0xfffff000U & vlSelf->instr_in)),32);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    }
}
