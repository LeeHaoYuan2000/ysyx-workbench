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
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__PC_Next_Next),64);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__SEXT_Control),3);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__ALU_Control_wire),4);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__SEXT_Connector),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__RS1_Connector),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__RS2_Connector),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__MUX_ALU_MEM_Result),64);
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__MEM_Ctrl_connector),4);
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__WriteBack_Enable));
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC));
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm));
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__C_ALU_MEM_Connector));
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__C_ALU_NPC_In_Connector));
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector),2);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__MEM_Result_Connector),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__Write_Back_Reg),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__ALU_Result_Connector),64);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__Insider_Control_Connector),4);
            tracep->chgBit(oldp+96,((1U & (IData)(vlSelf->top__DOT__ALU_Result_Connector))));
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__HY_CU__DOT__addi));
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__HY_CU__DOT__addiw));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__HY_CU__DOT__addw));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__HY_CU__DOT__subw));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__HY_CU__DOT__add));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__HY_CU__DOT__sub));
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__HY_CU__DOT__mulw));
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__HY_CU__DOT__divw));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__HY_CU__DOT__mul));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__HY_CU__DOT__remw));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__HY_CU__DOT__sltiu));
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__HY_CU__DOT__sltu));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__HY_CU__DOT__slt));
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__HY_CU__DOT__sraw));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__HY_CU__DOT__sllw));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__HY_CU__DOT__srlw));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__HY_CU__DOT__slli));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__HY_CU__DOT__srli));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__HY_CU__DOT__srai));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__HY_CU__DOT__srliw));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__HY_CU__DOT__slliw));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__HY_CU__DOT__sraiw));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__HY_CU__DOT__ld));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__HY_CU__DOT__lw));
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__HY_CU__DOT__lbu));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__HY_CU__DOT__lh));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__HY_CU__DOT__lhu));
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__HY_CU__DOT__sd));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__HY_CU__DOT__sw));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__HY_CU__DOT__sb));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__HY_CU__DOT__sh));
            tracep->chgBit(oldp+129,(vlSelf->top__DOT__HY_CU__DOT__andi));
            tracep->chgBit(oldp+130,(vlSelf->top__DOT__HY_CU__DOT__xori));
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__HY_CU__DOT__bne));
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__HY_CU__DOT__beq));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__HY_CU__DOT__bge));
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__HY_CU__DOT__blt));
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__HY_CU__DOT__bltu));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__HY_CU__DOT__jalr));
            tracep->chgBit(oldp+137,(((((((((((((((
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
            tracep->chgBit(oldp+138,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
            tracep->chgBit(oldp+139,((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu))));
            tracep->chgBit(oldp+140,((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addw) 
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
            tracep->chgBit(oldp+141,((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
            tracep->chgBit(oldp+142,(((IData)(vlSelf->top__DOT__HY_CU__DOT__mulw) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul))));
            tracep->chgBit(oldp+143,(((IData)(vlSelf->top__DOT__HY_CU__DOT__divw) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw))));
            tracep->chgBit(oldp+144,((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt))));
            tracep->chgBit(oldp+145,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sraw) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw))));
            tracep->chgBit(oldp+146,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
            tracep->chgBit(oldp+147,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__andi) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT___and))));
            tracep->chgBit(oldp+148,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sub) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori))));
            tracep->chgBit(oldp+149,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addiw) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge))));
            tracep->chgBit(oldp+150,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__subw) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt))));
            tracep->chgBit(oldp+151,((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
            tracep->chgSData(oldp+152,(vlSelf->top__DOT__HY_CU__DOT__func_signal),11);
            tracep->chgCData(oldp+153,(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal),6);
            tracep->chgCData(oldp+154,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+157,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+158,(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
            tracep->chgCData(oldp+159,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
            tracep->chgBit(oldp+160,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
            tracep->chgSData(oldp+161,(vlSelf->top__DOT__Sign_Extend__DOT__immS),12);
            tracep->chgIData(oldp+162,(vlSelf->top__DOT__Sign_Extend__DOT__immJ),21);
            tracep->chgSData(oldp+163,(vlSelf->top__DOT__Sign_Extend__DOT__immB),13);
            tracep->chgWData(oldp+164,(vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4),335);
            tracep->chgWData(oldp+175,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+178,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+181,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+184,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+187,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+190,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+191,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+192,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+193,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+194,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+210,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+213,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM),64);
            tracep->chgWData(oldp+216,(vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4),130);
            tracep->chgWData(oldp+221,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+224,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+227,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+228,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+236,(vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4),130);
            tracep->chgWData(oldp+241,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+244,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+255,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+256,(vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4),130);
            tracep->chgWData(oldp+261,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+264,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+275,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+276,(vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4),130);
            tracep->chgWData(oldp+281,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+284,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+287,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+288,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+295,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+296,(vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4),198);
            tracep->chgWData(oldp+303,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+306,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+309,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+312,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+313,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+314,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+323,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out),64);
            tracep->chgQData(oldp+330,(vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out),64);
            tracep->chgQData(oldp+332,(vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out),64);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out),64);
            tracep->chgQData(oldp+336,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd),64);
            tracep->chgQData(oldp+338,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub),64);
            tracep->chgWData(oldp+340,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4),340);
            tracep->chgWData(oldp+351,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+354,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+357,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+360,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+363,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgCData(oldp+366,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+367,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+368,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+369,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+370,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
            tracep->chgQData(oldp+371,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+373,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+375,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+377,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+379,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+381,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+383,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result),64);
            tracep->chgWData(oldp+386,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4),136);
            tracep->chgWData(oldp+391,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+394,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+397,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+398,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+399,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+401,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+403,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+405,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+406,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                        & vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgQData(oldp+408,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                        ^ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgQData(oldp+410,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                        | vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgWData(oldp+412,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4),204);
            tracep->chgWData(oldp+419,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+422,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+425,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgCData(oldp+428,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+429,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+430,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgQData(oldp+431,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+433,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+435,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+437,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+439,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+440,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer),64);
            tracep->chgQData(oldp+442,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1),64);
            tracep->chgQData(oldp+444,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2),64);
            tracep->chgQData(oldp+446,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3),64);
            tracep->chgQData(oldp+448,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4),64);
            tracep->chgQData(oldp+450,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5),64);
            tracep->chgBit(oldp+452,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                      != vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+453,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                      == vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+454,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+455,(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+456,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                      < vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgIData(oldp+457,((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result)),32);
            tracep->chgIData(oldp+458,((IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),32);
            tracep->chgIData(oldp+459,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw),32);
            tracep->chgIData(oldp+460,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw),32);
            tracep->chgWData(oldp+461,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4),136);
            tracep->chgWData(oldp+466,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+469,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+472,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+473,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+474,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+476,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+478,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+480,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+481,(vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4),544);
            tracep->chgWData(oldp+498,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+501,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+504,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+507,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+510,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+513,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+516,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[6]),68);
            tracep->chgWData(oldp+519,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[7]),68);
            tracep->chgCData(oldp+522,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+523,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+524,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+525,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+526,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+527,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+528,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[6]),4);
            tracep->chgCData(oldp+529,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[7]),4);
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+534,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+536,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+538,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+540,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+546,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+548,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+549,(vlSelf->top__DOT__PC_Wire),64);
            tracep->chgQData(oldp+551,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
            tracep->chgQData(oldp+553,(vlSelf->top__DOT__HY_RegFile__DOT__Zero),64);
            tracep->chgQData(oldp+555,(vlSelf->top__DOT__HY_RegFile__DOT__ra),64);
            tracep->chgQData(oldp+557,(vlSelf->top__DOT__HY_RegFile__DOT__sp),64);
            tracep->chgQData(oldp+559,(vlSelf->top__DOT__HY_RegFile__DOT__gp),64);
            tracep->chgQData(oldp+561,(vlSelf->top__DOT__HY_RegFile__DOT__tp),64);
            tracep->chgQData(oldp+563,(vlSelf->top__DOT__HY_RegFile__DOT__t0),64);
            tracep->chgQData(oldp+565,(vlSelf->top__DOT__HY_RegFile__DOT__t1),64);
            tracep->chgQData(oldp+567,(vlSelf->top__DOT__HY_RegFile__DOT__t2),64);
            tracep->chgQData(oldp+569,(vlSelf->top__DOT__HY_RegFile__DOT__s0),64);
            tracep->chgQData(oldp+571,(vlSelf->top__DOT__HY_RegFile__DOT__s1),64);
            tracep->chgQData(oldp+573,(vlSelf->top__DOT__HY_RegFile__DOT__a0),64);
            tracep->chgQData(oldp+575,(vlSelf->top__DOT__HY_RegFile__DOT__a1),64);
            tracep->chgQData(oldp+577,(vlSelf->top__DOT__HY_RegFile__DOT__a2),64);
            tracep->chgQData(oldp+579,(vlSelf->top__DOT__HY_RegFile__DOT__a3),64);
            tracep->chgQData(oldp+581,(vlSelf->top__DOT__HY_RegFile__DOT__a4),64);
            tracep->chgQData(oldp+583,(vlSelf->top__DOT__HY_RegFile__DOT__a5),64);
            tracep->chgQData(oldp+585,(vlSelf->top__DOT__HY_RegFile__DOT__a6),64);
            tracep->chgQData(oldp+587,(vlSelf->top__DOT__HY_RegFile__DOT__a7),64);
            tracep->chgQData(oldp+589,(vlSelf->top__DOT__HY_RegFile__DOT__s2),64);
            tracep->chgQData(oldp+591,(vlSelf->top__DOT__HY_RegFile__DOT__s3),64);
            tracep->chgQData(oldp+593,(vlSelf->top__DOT__HY_RegFile__DOT__s4),64);
            tracep->chgQData(oldp+595,(vlSelf->top__DOT__HY_RegFile__DOT__s5),64);
            tracep->chgQData(oldp+597,(vlSelf->top__DOT__HY_RegFile__DOT__s6),64);
            tracep->chgQData(oldp+599,(vlSelf->top__DOT__HY_RegFile__DOT__s7),64);
            tracep->chgQData(oldp+601,(vlSelf->top__DOT__HY_RegFile__DOT__s8),64);
            tracep->chgQData(oldp+603,(vlSelf->top__DOT__HY_RegFile__DOT__s9),64);
            tracep->chgQData(oldp+605,(vlSelf->top__DOT__HY_RegFile__DOT__s10),64);
            tracep->chgQData(oldp+607,(vlSelf->top__DOT__HY_RegFile__DOT__s11),64);
            tracep->chgQData(oldp+609,(vlSelf->top__DOT__HY_RegFile__DOT__t3),64);
            tracep->chgQData(oldp+611,(vlSelf->top__DOT__HY_RegFile__DOT__t4),64);
            tracep->chgQData(oldp+613,(vlSelf->top__DOT__HY_RegFile__DOT__t5),64);
            tracep->chgQData(oldp+615,(vlSelf->top__DOT__HY_RegFile__DOT__t6),64);
            tracep->chgWData(oldp+617,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
            tracep->chgWData(oldp+686,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+689,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+692,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+695,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+698,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+701,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+704,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+707,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+710,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+713,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+716,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+719,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+722,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+725,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+728,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+731,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+734,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+737,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+740,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+743,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+746,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+749,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+752,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+755,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+758,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+761,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+764,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+767,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+770,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+773,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+776,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+779,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+782,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+783,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+784,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+785,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+786,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+787,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+788,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+789,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+790,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+791,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+792,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+793,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+794,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+795,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+796,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+797,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+798,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+799,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+800,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+801,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+802,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+803,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+804,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+805,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+806,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+807,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+808,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+809,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+810,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+811,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+812,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+813,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+814,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+816,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+818,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+820,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+822,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+824,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+826,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+828,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+830,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+832,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+834,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+836,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+838,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+840,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+842,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+844,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+846,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+848,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+850,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+852,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+854,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+856,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+858,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+860,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+862,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+864,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+866,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+868,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+870,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+872,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+874,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+876,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
            tracep->chgWData(oldp+878,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
            tracep->chgWData(oldp+947,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+950,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+953,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+956,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+959,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+962,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+965,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+968,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+971,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+974,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+977,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+980,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+983,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+986,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+989,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+992,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+995,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+998,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+1001,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+1004,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+1007,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+1010,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+1013,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+1016,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+1019,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+1022,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+1025,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+1028,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+1031,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+1034,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+1037,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+1040,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+1043,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+1044,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+1045,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+1046,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+1047,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+1048,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+1049,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+1050,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+1051,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+1052,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+1053,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+1054,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+1055,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+1056,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+1057,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+1058,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+1059,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+1060,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+1061,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+1062,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+1063,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+1064,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+1065,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+1066,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+1067,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+1068,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+1069,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+1070,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+1071,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+1072,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+1073,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+1074,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+1075,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1077,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1079,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1081,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1083,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1085,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1087,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+1089,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+1091,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+1093,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+1095,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+1097,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+1099,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+1101,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+1103,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+1105,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+1107,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+1109,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+1111,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+1113,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+1115,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+1117,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+1119,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+1121,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+1123,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+1125,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+1127,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+1129,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+1131,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+1133,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+1135,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+1137,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
        }
        tracep->chgBit(oldp+1139,(vlSelf->clk));
        tracep->chgBit(oldp+1140,(vlSelf->rst));
        tracep->chgIData(oldp+1141,(vlSelf->instr_in),32);
        tracep->chgQData(oldp+1142,(vlSelf->SEXT_result),64);
        tracep->chgQData(oldp+1144,(vlSelf->PC_Test),64);
        tracep->chgCData(oldp+1146,(vlSelf->SEXT_Control_out),3);
        tracep->chgQData(oldp+1147,(vlSelf->RS1_OUTPUT),64);
        tracep->chgQData(oldp+1149,(vlSelf->RS2_OUTPUT),64);
        tracep->chgQData(oldp+1151,(vlSelf->ALU_Result),64);
        tracep->chgBit(oldp+1153,(vlSelf->WriteBack_Enable_result));
        tracep->chgBit(oldp+1154,(vlSelf->C_RS1_PC_Connector_result));
        tracep->chgBit(oldp+1155,(vlSelf->C_RS2_imm_Connector_result));
        tracep->chgBit(oldp+1156,(vlSelf->C_ALU_MEM_Connector_result));
        tracep->chgBit(oldp+1157,(vlSelf->C_ALU_NPC_In_Connector_result));
        tracep->chgCData(oldp+1158,(vlSelf->C_NPC_Branch_Jump_Connector_result),2);
        tracep->chgCData(oldp+1159,((0x7fU & vlSelf->instr_in)),7);
        tracep->chgCData(oldp+1160,((7U & (vlSelf->instr_in 
                                           >> 0xcU))),3);
        tracep->chgCData(oldp+1161,((vlSelf->instr_in 
                                     >> 0x19U)),7);
        tracep->chgCData(oldp+1162,((vlSelf->instr_in 
                                     >> 0x1aU)),6);
        tracep->chgBit(oldp+1163,((0x13U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1164,((0x3bU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1165,((0x33U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1166,((0x1bU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1167,((3U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+1168,((0x23U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1169,((0x63U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1170,((0x6fU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1171,((0x67U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1172,((0x17U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1173,((0x37U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1174,((0x73U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1175,((0U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1176,((4U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1177,((6U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1178,((3U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1179,((2U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1180,((5U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1181,((1U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1182,((7U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1183,((0U == (vlSelf->instr_in 
                                          >> 0x19U))));
        tracep->chgBit(oldp+1184,((1U == (vlSelf->instr_in 
                                          >> 0x19U))));
        tracep->chgBit(oldp+1185,((0U == (vlSelf->instr_in 
                                          >> 0x1aU))));
        tracep->chgBit(oldp+1186,((0x10U == (vlSelf->instr_in 
                                             >> 0x1aU))));
        tracep->chgBit(oldp+1187,((0x100073U == vlSelf->instr_in)));
        tracep->chgBit(oldp+1188,(((0x17U == (0x7fU 
                                              & vlSelf->instr_in)) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->instr_in)))));
        tracep->chgBit(oldp+1189,(((0x6fU == (0x7fU 
                                              & vlSelf->instr_in)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->chgBit(oldp+1190,((((((((((((((((((
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
        tracep->chgSData(oldp+1191,((vlSelf->instr_in 
                                     >> 0x14U)),12);
        tracep->chgIData(oldp+1192,((0xfffff000U & vlSelf->instr_in)),32);
        tracep->chgCData(oldp+1193,((0x1fU & (vlSelf->instr_in 
                                              >> 0xfU))),5);
        tracep->chgCData(oldp+1194,((0x1fU & (vlSelf->instr_in 
                                              >> 0x14U))),5);
        tracep->chgCData(oldp+1195,((0x1fU & (vlSelf->instr_in 
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
