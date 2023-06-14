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
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[0]),10);
            tracep->chgSData(oldp+1,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[1]),10);
            tracep->chgSData(oldp+2,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[2]),10);
            tracep->chgSData(oldp+3,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[3]),10);
            tracep->chgSData(oldp+4,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[4]),10);
            tracep->chgSData(oldp+5,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[5]),10);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[0]),6);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[1]),6);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[2]),6);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[3]),6);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[4]),6);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[5]),6);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[3]),4);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[4]),4);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[5]),4);
            tracep->chgSData(oldp+18,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[0]),15);
            tracep->chgSData(oldp+19,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[1]),15);
            tracep->chgSData(oldp+20,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[2]),15);
            tracep->chgSData(oldp+21,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[3]),15);
            tracep->chgSData(oldp+22,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[4]),15);
            tracep->chgSData(oldp+23,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[5]),15);
            tracep->chgSData(oldp+24,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[6]),15);
            tracep->chgSData(oldp+25,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[7]),15);
            tracep->chgSData(oldp+26,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[8]),15);
            tracep->chgSData(oldp+27,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[9]),15);
            tracep->chgSData(oldp+28,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[10]),15);
            tracep->chgSData(oldp+29,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[0]),11);
            tracep->chgSData(oldp+30,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[1]),11);
            tracep->chgSData(oldp+31,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[2]),11);
            tracep->chgSData(oldp+32,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[3]),11);
            tracep->chgSData(oldp+33,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[4]),11);
            tracep->chgSData(oldp+34,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[5]),11);
            tracep->chgSData(oldp+35,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[6]),11);
            tracep->chgSData(oldp+36,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[7]),11);
            tracep->chgSData(oldp+37,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[8]),11);
            tracep->chgSData(oldp+38,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[9]),11);
            tracep->chgSData(oldp+39,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[10]),11);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[3]),4);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[4]),4);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[5]),4);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[6]),4);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[7]),4);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[8]),4);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[9]),4);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[10]),4);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[3]),8);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[4]),8);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[0]),3);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[1]),3);
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[2]),3);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[3]),3);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[4]),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__SEXT_Control),3);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__ALU_Control_wire),4);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__SEXT_Connector),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__RS1_Connector),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__RS2_Connector),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result),64);
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__WriteBack_Enable));
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm));
            tracep->chgBit(oldp+81,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector),2);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__ALU_Result_Connector),64);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__Insider_Control_Connector),4);
            tracep->chgBit(oldp+86,((1U & (IData)(vlSelf->top__DOT__ALU_Result_Connector))));
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__HY_CU__DOT__addi));
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__HY_CU__DOT__addiw));
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__HY_CU__DOT__addw));
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__HY_CU__DOT__subw));
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__HY_CU__DOT__add));
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__HY_CU__DOT__sub));
            tracep->chgBit(oldp+94,(vlSelf->top__DOT__HY_CU__DOT__mulw));
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__HY_CU__DOT__divw));
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__HY_CU__DOT__mul));
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__HY_CU__DOT__remw));
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__HY_CU__DOT__sltiu));
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__HY_CU__DOT__sltu));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__HY_CU__DOT__slt));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__HY_CU__DOT__sraw));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__HY_CU__DOT__sllw));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__HY_CU__DOT__srlw));
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__HY_CU__DOT__slli));
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__HY_CU__DOT__srli));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__HY_CU__DOT__srai));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__HY_CU__DOT__srliw));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__HY_CU__DOT__slliw));
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__HY_CU__DOT__sraiw));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__HY_CU__DOT__ld));
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__HY_CU__DOT__lw));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__HY_CU__DOT__lbu));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__HY_CU__DOT__lh));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__HY_CU__DOT__lhu));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__HY_CU__DOT__sd));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__HY_CU__DOT__sw));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__HY_CU__DOT__sb));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__HY_CU__DOT__sh));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__HY_CU__DOT__andi));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__HY_CU__DOT__xori));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__HY_CU__DOT__bne));
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__HY_CU__DOT__beq));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__HY_CU__DOT__bge));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__HY_CU__DOT__blt));
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__HY_CU__DOT__bltu));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__HY_CU__DOT__jalr));
            tracep->chgBit(oldp+127,(((((((((((((((
                                                   (((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
            tracep->chgBit(oldp+128,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
            tracep->chgBit(oldp+129,((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu))));
            tracep->chgBit(oldp+130,((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addw) 
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
            tracep->chgBit(oldp+131,((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
            tracep->chgBit(oldp+132,(((IData)(vlSelf->top__DOT__HY_CU__DOT__mulw) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul))));
            tracep->chgBit(oldp+133,(((IData)(vlSelf->top__DOT__HY_CU__DOT__divw) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw))));
            tracep->chgBit(oldp+134,((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt))));
            tracep->chgBit(oldp+135,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sraw) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw))));
            tracep->chgBit(oldp+136,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__andi) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT___and))));
            tracep->chgBit(oldp+137,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sub) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori))));
            tracep->chgBit(oldp+138,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addiw) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge))));
            tracep->chgBit(oldp+139,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__subw) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt))));
            tracep->chgBit(oldp+140,((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
            tracep->chgSData(oldp+141,(vlSelf->top__DOT__HY_CU__DOT__func_signal),11);
            tracep->chgCData(oldp+142,(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal),6);
            tracep->chgCData(oldp+143,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+144,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+145,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+147,(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
            tracep->chgCData(oldp+148,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
            tracep->chgBit(oldp+149,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
            tracep->chgSData(oldp+150,(vlSelf->top__DOT__Sign_Extend__DOT__immS),12);
            tracep->chgIData(oldp+151,(vlSelf->top__DOT__Sign_Extend__DOT__immJ),21);
            tracep->chgSData(oldp+152,(vlSelf->top__DOT__Sign_Extend__DOT__immB),13);
            tracep->chgWData(oldp+153,(vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4),335);
            tracep->chgWData(oldp+164,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+167,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+170,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+173,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+176,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+179,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+180,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+181,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+182,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+183,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+196,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+199,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+202,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+203,(vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4),130);
            tracep->chgWData(oldp+208,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+211,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+214,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+215,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+223,(vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4),130);
            tracep->chgWData(oldp+228,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+231,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub),64);
            tracep->chgWData(oldp+259,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4),340);
            tracep->chgWData(oldp+270,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+273,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+276,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+279,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+282,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgCData(oldp+285,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+286,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+287,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+288,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+289,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+302,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result),64);
            tracep->chgWData(oldp+305,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4),136);
            tracep->chgWData(oldp+310,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+313,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+316,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+317,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+324,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+325,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                        & vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgQData(oldp+327,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                        ^ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgQData(oldp+329,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                        | vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgWData(oldp+331,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4),204);
            tracep->chgWData(oldp+338,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+341,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+344,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgCData(oldp+347,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+348,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+349,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgQData(oldp+350,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+352,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+354,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+356,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+358,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+359,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer),64);
            tracep->chgQData(oldp+361,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1),64);
            tracep->chgQData(oldp+363,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2),64);
            tracep->chgQData(oldp+365,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3),64);
            tracep->chgQData(oldp+367,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4),64);
            tracep->chgQData(oldp+369,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5),64);
            tracep->chgBit(oldp+371,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                      != vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+372,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                      == vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+373,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+374,(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+375,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                      < vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgIData(oldp+376,((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result)),32);
            tracep->chgIData(oldp+377,((IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),32);
            tracep->chgIData(oldp+378,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw),32);
            tracep->chgIData(oldp+379,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw),32);
            tracep->chgWData(oldp+380,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4),136);
            tracep->chgWData(oldp+385,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+388,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+391,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+392,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+393,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+395,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+397,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+399,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+400,(vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4),544);
            tracep->chgWData(oldp+417,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+420,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+423,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+426,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+429,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+432,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+435,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[6]),68);
            tracep->chgWData(oldp+438,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[7]),68);
            tracep->chgCData(oldp+441,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+442,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+443,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+444,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+445,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+446,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+447,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[6]),4);
            tracep->chgCData(oldp+448,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[7]),4);
            tracep->chgQData(oldp+449,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+451,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+453,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+455,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+457,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+459,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+461,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+463,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+465,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+467,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+468,(vlSelf->top__DOT__PC_Wire),64);
            tracep->chgQData(oldp+470,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
            tracep->chgQData(oldp+472,(vlSelf->top__DOT__HY_RegFile__DOT__Zero),64);
            tracep->chgQData(oldp+474,(vlSelf->top__DOT__HY_RegFile__DOT__ra),64);
            tracep->chgQData(oldp+476,(vlSelf->top__DOT__HY_RegFile__DOT__sp),64);
            tracep->chgQData(oldp+478,(vlSelf->top__DOT__HY_RegFile__DOT__gp),64);
            tracep->chgQData(oldp+480,(vlSelf->top__DOT__HY_RegFile__DOT__tp),64);
            tracep->chgQData(oldp+482,(vlSelf->top__DOT__HY_RegFile__DOT__t0),64);
            tracep->chgQData(oldp+484,(vlSelf->top__DOT__HY_RegFile__DOT__t1),64);
            tracep->chgQData(oldp+486,(vlSelf->top__DOT__HY_RegFile__DOT__t2),64);
            tracep->chgQData(oldp+488,(vlSelf->top__DOT__HY_RegFile__DOT__s0),64);
            tracep->chgQData(oldp+490,(vlSelf->top__DOT__HY_RegFile__DOT__s1),64);
            tracep->chgQData(oldp+492,(vlSelf->top__DOT__HY_RegFile__DOT__a0),64);
            tracep->chgQData(oldp+494,(vlSelf->top__DOT__HY_RegFile__DOT__a1),64);
            tracep->chgQData(oldp+496,(vlSelf->top__DOT__HY_RegFile__DOT__a2),64);
            tracep->chgQData(oldp+498,(vlSelf->top__DOT__HY_RegFile__DOT__a3),64);
            tracep->chgQData(oldp+500,(vlSelf->top__DOT__HY_RegFile__DOT__a4),64);
            tracep->chgQData(oldp+502,(vlSelf->top__DOT__HY_RegFile__DOT__a5),64);
            tracep->chgQData(oldp+504,(vlSelf->top__DOT__HY_RegFile__DOT__a6),64);
            tracep->chgQData(oldp+506,(vlSelf->top__DOT__HY_RegFile__DOT__a7),64);
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__HY_RegFile__DOT__s2),64);
            tracep->chgQData(oldp+510,(vlSelf->top__DOT__HY_RegFile__DOT__s3),64);
            tracep->chgQData(oldp+512,(vlSelf->top__DOT__HY_RegFile__DOT__s4),64);
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__HY_RegFile__DOT__s5),64);
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__HY_RegFile__DOT__s6),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__HY_RegFile__DOT__s7),64);
            tracep->chgQData(oldp+520,(vlSelf->top__DOT__HY_RegFile__DOT__s8),64);
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__HY_RegFile__DOT__s9),64);
            tracep->chgQData(oldp+524,(vlSelf->top__DOT__HY_RegFile__DOT__s10),64);
            tracep->chgQData(oldp+526,(vlSelf->top__DOT__HY_RegFile__DOT__s11),64);
            tracep->chgQData(oldp+528,(vlSelf->top__DOT__HY_RegFile__DOT__t3),64);
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__HY_RegFile__DOT__t4),64);
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__HY_RegFile__DOT__t5),64);
            tracep->chgQData(oldp+534,(vlSelf->top__DOT__HY_RegFile__DOT__t6),64);
            tracep->chgWData(oldp+536,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
            tracep->chgWData(oldp+605,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+608,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+611,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+614,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+617,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+620,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+623,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+626,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+629,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+632,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+635,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+638,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+641,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+644,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+647,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+650,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+653,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+656,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+659,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+662,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+665,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+668,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+671,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+674,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+677,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+680,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+683,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+686,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+689,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+692,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+695,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+698,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+701,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+702,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+703,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+704,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+705,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+706,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+707,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+708,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+709,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+710,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+711,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+712,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+713,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+714,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+715,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+716,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+717,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+718,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+719,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+720,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+721,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+722,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+723,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+724,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+725,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+726,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+727,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+728,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+729,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+730,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+731,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+732,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+733,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+735,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+737,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+739,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+741,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+743,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+745,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+747,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+749,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+751,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+753,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+755,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+757,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+759,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+761,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+763,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+765,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+767,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+769,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+771,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+773,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+775,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+777,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+779,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+781,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+783,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+785,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+787,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+789,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+791,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+793,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+795,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
            tracep->chgWData(oldp+797,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
            tracep->chgWData(oldp+866,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+869,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+872,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+875,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+878,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+881,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+884,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+887,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+890,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+893,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+896,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+899,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+902,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+905,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+908,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+911,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+914,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+917,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+920,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+923,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+926,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+929,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+932,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+935,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+938,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+941,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+944,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+947,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+950,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+953,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+956,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+959,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+962,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+963,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+964,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+965,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+966,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+967,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+968,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+969,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+970,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+971,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+972,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+973,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+974,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+975,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+976,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+977,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+978,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+979,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+980,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+981,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+982,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+983,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+984,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+985,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+986,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+987,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+988,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+989,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+990,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+991,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+992,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+993,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+994,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+996,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+998,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1000,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1002,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1004,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1006,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+1008,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+1010,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+1012,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+1014,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+1016,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+1018,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+1020,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+1022,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+1024,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+1026,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+1028,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+1030,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+1032,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+1034,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+1036,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+1038,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+1040,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+1042,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+1044,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+1046,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+1048,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+1050,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+1052,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+1054,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+1056,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
        }
        tracep->chgBit(oldp+1058,(vlSelf->clk));
        tracep->chgBit(oldp+1059,(vlSelf->rst));
        tracep->chgIData(oldp+1060,(vlSelf->instr_in),32);
        tracep->chgQData(oldp+1061,(vlSelf->SEXT_result),64);
        tracep->chgQData(oldp+1063,(vlSelf->PC_Test),64);
        tracep->chgCData(oldp+1065,(vlSelf->SEXT_Control_out),3);
        tracep->chgQData(oldp+1066,(vlSelf->RS1_OUTPUT),64);
        tracep->chgQData(oldp+1068,(vlSelf->RS2_OUTPUT),64);
        tracep->chgQData(oldp+1070,(vlSelf->ALU_Result),64);
        tracep->chgBit(oldp+1072,(vlSelf->WriteBack_Enable_result));
        tracep->chgBit(oldp+1073,(vlSelf->C_RS1_PC_Connector_result));
        tracep->chgBit(oldp+1074,(vlSelf->C_RS2_imm_Connector_result));
        tracep->chgBit(oldp+1075,(vlSelf->C_ALU_MEM_Connector_result));
        tracep->chgBit(oldp+1076,(vlSelf->C_ALU_NPC_In_Connector_result));
        tracep->chgCData(oldp+1077,(vlSelf->C_NPC_Branch_Jump_Connector_result),2);
        tracep->chgBit(oldp+1078,(((0x6fU == (0x7fU 
                                              & vlSelf->instr_in)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->chgCData(oldp+1079,((0x7fU & vlSelf->instr_in)),7);
        tracep->chgCData(oldp+1080,((7U & (vlSelf->instr_in 
                                           >> 0xcU))),3);
        tracep->chgCData(oldp+1081,((vlSelf->instr_in 
                                     >> 0x19U)),7);
        tracep->chgCData(oldp+1082,((vlSelf->instr_in 
                                     >> 0x1aU)),6);
        tracep->chgBit(oldp+1083,((0x13U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1084,((0x3bU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1085,((0x33U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1086,((0x1bU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1087,((3U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+1088,((0x23U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1089,((0x63U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1090,((0x6fU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1091,((0x67U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1092,((0x17U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1093,((0x37U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1094,((0x73U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1095,((0U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1096,((4U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1097,((6U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1098,((3U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1099,((2U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1100,((5U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1101,((1U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1102,((7U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1103,((0U == (vlSelf->instr_in 
                                          >> 0x19U))));
        tracep->chgBit(oldp+1104,((1U == (vlSelf->instr_in 
                                          >> 0x19U))));
        tracep->chgBit(oldp+1105,((0U == (vlSelf->instr_in 
                                          >> 0x1aU))));
        tracep->chgBit(oldp+1106,((0x10U == (vlSelf->instr_in 
                                             >> 0x1aU))));
        tracep->chgBit(oldp+1107,((0x100073U == vlSelf->instr_in)));
        tracep->chgBit(oldp+1108,(((0x17U == (0x7fU 
                                              & vlSelf->instr_in)) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->instr_in)))));
        tracep->chgBit(oldp+1109,((((((((((((((((((
                                                   (((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__mulw)) 
                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__divw)) 
                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraw)) 
                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw)) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__andi)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT___and)) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__bne)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__ld)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->instr_in))) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->instr_in)))));
        tracep->chgSData(oldp+1110,((vlSelf->instr_in 
                                     >> 0x14U)),12);
        tracep->chgIData(oldp+1111,((0xfffff000U & vlSelf->instr_in)),32);
        tracep->chgCData(oldp+1112,((0x1fU & (vlSelf->instr_in 
                                              >> 0xfU))),5);
        tracep->chgCData(oldp+1113,((0x1fU & (vlSelf->instr_in 
                                              >> 0x14U))),5);
        tracep->chgCData(oldp+1114,((0x1fU & (vlSelf->instr_in 
                                              >> 7U))),5);
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
    }
}
