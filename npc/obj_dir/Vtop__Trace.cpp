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
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__MEM_Enable_Connector));
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__MEM_Ctrl_connector),4);
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__WriteBack_Enable));
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC));
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm));
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__C_ALU_MEM_Connector));
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__C_ALU_NPC_In_Connector));
            tracep->chgCData(oldp+89,(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector),2);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__MEM_Result_Connector),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__Write_Back_Reg),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__ALU_Result_Connector),64);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__Insider_Control_Connector),4);
            tracep->chgBit(oldp+97,((1U & (IData)(vlSelf->top__DOT__ALU_Result_Connector))));
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__HY_CU__DOT__addi));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__HY_CU__DOT__addiw));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__HY_CU__DOT__addw));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__HY_CU__DOT__subw));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__HY_CU__DOT__add));
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__HY_CU__DOT__sub));
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__HY_CU__DOT__mulw));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__HY_CU__DOT__divw));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__HY_CU__DOT__mul));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__HY_CU__DOT__divu));
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__HY_CU__DOT__divuw));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__HY_CU__DOT__remw));
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__HY_CU__DOT__remu));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__HY_CU__DOT__remuw));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__HY_CU__DOT__sltiu));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__HY_CU__DOT__sltu));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__HY_CU__DOT__slt));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__HY_CU__DOT__slti));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__HY_CU__DOT__sraw));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__HY_CU__DOT__sllw));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__HY_CU__DOT__srlw));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__HY_CU__DOT__slli));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__HY_CU__DOT__srli));
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__HY_CU__DOT__srai));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__HY_CU__DOT__srliw));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__HY_CU__DOT__slliw));
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__HY_CU__DOT__sraiw));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__HY_CU__DOT__sll));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__HY_CU__DOT__ld));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__HY_CU__DOT__lw));
            tracep->chgBit(oldp+129,(vlSelf->top__DOT__HY_CU__DOT__lbu));
            tracep->chgBit(oldp+130,(vlSelf->top__DOT__HY_CU__DOT__lh));
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__HY_CU__DOT__lhu));
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__HY_CU__DOT__sd));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__HY_CU__DOT__sw));
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__HY_CU__DOT__sb));
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__HY_CU__DOT__sh));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__HY_CU__DOT__lb));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__HY_CU__DOT__lwu));
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__HY_CU__DOT__andi));
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__HY_CU__DOT__xori));
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__HY_CU__DOT__ori));
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__HY_CU__DOT__bne));
            tracep->chgBit(oldp+142,(vlSelf->top__DOT__HY_CU__DOT__beq));
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__HY_CU__DOT__bge));
            tracep->chgBit(oldp+144,(vlSelf->top__DOT__HY_CU__DOT__blt));
            tracep->chgBit(oldp+145,(vlSelf->top__DOT__HY_CU__DOT__bltu));
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__HY_CU__DOT__bgeu));
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__HY_CU__DOT__jalr));
            tracep->chgBit(oldp+148,(((((((((((((((
                                                   (((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__slti)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__lb)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__lwu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__ori))));
            tracep->chgBit(oldp+149,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
            tracep->chgBit(oldp+150,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__bgeu))));
            tracep->chgBit(oldp+151,(((((((((((((((
                                                   (((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addw) 
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
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT___and)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__divu)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__divuw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__remu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__remuw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sll)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT___xor))));
            tracep->chgBit(oldp+152,((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
            tracep->chgBit(oldp+153,(((IData)(vlSelf->top__DOT__HY_CU__DOT__mulw) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul))));
            tracep->chgBit(oldp+154,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__divw) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__divu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__divuw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__remu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__remuw))));
            tracep->chgBit(oldp+155,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__slti))));
            tracep->chgBit(oldp+156,(((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sraw) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sll))));
            tracep->chgBit(oldp+157,((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__lb)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__lwu))));
            tracep->chgBit(oldp+158,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__andi) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT___and)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT___xor)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__ori))));
            tracep->chgBit(oldp+159,(((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sub) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT___xor))));
            tracep->chgBit(oldp+160,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addiw) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__divu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__ori))));
            tracep->chgBit(oldp+161,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__subw) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__divuw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__slti))));
            tracep->chgBit(oldp+162,((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__remu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sll))));
            tracep->chgBit(oldp+163,((((IData)(vlSelf->top__DOT__HY_CU__DOT__srai) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__remuw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__bgeu))));
            tracep->chgSData(oldp+164,(vlSelf->top__DOT__HY_CU__DOT__func_signal),11);
            tracep->chgCData(oldp+165,(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal),6);
            tracep->chgCData(oldp+166,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+167,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+168,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+169,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+170,(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
            tracep->chgCData(oldp+171,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
            tracep->chgBit(oldp+172,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
            tracep->chgSData(oldp+173,(vlSelf->top__DOT__Sign_Extend__DOT__immS),12);
            tracep->chgIData(oldp+174,(vlSelf->top__DOT__Sign_Extend__DOT__immJ),21);
            tracep->chgSData(oldp+175,(vlSelf->top__DOT__Sign_Extend__DOT__immB),13);
            tracep->chgWData(oldp+176,(vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4),335);
            tracep->chgWData(oldp+187,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+190,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+193,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+196,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+199,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+202,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+203,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+204,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+205,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+206,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+225,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+226,(vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4),130);
            tracep->chgWData(oldp+231,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+234,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+246,(vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4),130);
            tracep->chgWData(oldp+251,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+254,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+266,(vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4),130);
            tracep->chgWData(oldp+271,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+274,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+286,(vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4),130);
            tracep->chgWData(oldp+291,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+294,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+298,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+305,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+306,(vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4),198);
            tracep->chgWData(oldp+313,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+316,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+319,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+322,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+323,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+324,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+331,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+333,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out),64);
            tracep->chgQData(oldp+336,(vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out),64);
            tracep->chgQData(oldp+338,(vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out),64);
            tracep->chgQData(oldp+340,(vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out),64);
            tracep->chgQData(oldp+342,(vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out),64);
            tracep->chgQData(oldp+344,(vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out),64);
            tracep->chgQData(oldp+346,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd),64);
            tracep->chgQData(oldp+348,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub),64);
            tracep->chgWData(oldp+350,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4),340);
            tracep->chgWData(oldp+361,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+364,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+367,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+370,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+373,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgCData(oldp+376,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+377,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+378,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+379,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+380,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
            tracep->chgQData(oldp+381,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+383,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+385,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+387,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+389,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+391,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+393,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result),64);
            tracep->chgWData(oldp+396,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4),136);
            tracep->chgWData(oldp+401,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+404,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+407,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+408,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+409,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+411,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+413,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+415,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+416,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                        & vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgQData(oldp+418,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                        ^ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgQData(oldp+420,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                        | vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgWData(oldp+422,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4),204);
            tracep->chgWData(oldp+429,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+432,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+435,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgCData(oldp+438,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+439,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+440,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgQData(oldp+441,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+443,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+445,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+447,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+449,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+450,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer),64);
            tracep->chgQData(oldp+452,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1),64);
            tracep->chgQData(oldp+454,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2),64);
            tracep->chgQData(oldp+456,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3),64);
            tracep->chgQData(oldp+458,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4),64);
            tracep->chgQData(oldp+460,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5),64);
            tracep->chgBit(oldp+462,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                      != vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+463,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                      == vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+464,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+465,(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+466,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                      < vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgBit(oldp+467,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                      >= vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
            tracep->chgIData(oldp+468,((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result)),32);
            tracep->chgIData(oldp+469,((IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),32);
            tracep->chgIData(oldp+470,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw),32);
            tracep->chgIData(oldp+471,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw),32);
            tracep->chgQData(oldp+472,(VL_DIV_QQQ(64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgIData(oldp+474,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divuw),32);
            tracep->chgQData(oldp+475,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
            tracep->chgIData(oldp+477,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remuw),32);
            tracep->chgWData(oldp+478,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4),408);
            tracep->chgWData(oldp+491,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+494,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+497,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+500,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+503,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+506,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[5]),68);
            tracep->chgCData(oldp+509,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+510,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+511,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+512,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+513,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+514,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[5]),4);
            tracep->chgQData(oldp+515,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+517,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+519,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+521,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+523,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+525,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+527,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+529,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+530,(vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4),544);
            tracep->chgWData(oldp+547,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+550,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+553,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+556,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+559,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+562,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+565,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[6]),68);
            tracep->chgWData(oldp+568,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[7]),68);
            tracep->chgCData(oldp+571,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+572,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+573,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+574,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+575,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+576,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+577,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[6]),4);
            tracep->chgCData(oldp+578,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[7]),4);
            tracep->chgQData(oldp+579,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+581,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+583,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+585,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+587,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+589,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+591,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+593,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+595,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+597,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+598,(vlSelf->top__DOT__PC_Wire),64);
            tracep->chgQData(oldp+600,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
            tracep->chgQData(oldp+602,(vlSelf->top__DOT__HY_RegFile__DOT__Zero),64);
            tracep->chgQData(oldp+604,(vlSelf->top__DOT__HY_RegFile__DOT__ra),64);
            tracep->chgQData(oldp+606,(vlSelf->top__DOT__HY_RegFile__DOT__sp),64);
            tracep->chgQData(oldp+608,(vlSelf->top__DOT__HY_RegFile__DOT__gp),64);
            tracep->chgQData(oldp+610,(vlSelf->top__DOT__HY_RegFile__DOT__tp),64);
            tracep->chgQData(oldp+612,(vlSelf->top__DOT__HY_RegFile__DOT__t0),64);
            tracep->chgQData(oldp+614,(vlSelf->top__DOT__HY_RegFile__DOT__t1),64);
            tracep->chgQData(oldp+616,(vlSelf->top__DOT__HY_RegFile__DOT__t2),64);
            tracep->chgQData(oldp+618,(vlSelf->top__DOT__HY_RegFile__DOT__s0),64);
            tracep->chgQData(oldp+620,(vlSelf->top__DOT__HY_RegFile__DOT__s1),64);
            tracep->chgQData(oldp+622,(vlSelf->top__DOT__HY_RegFile__DOT__a0),64);
            tracep->chgQData(oldp+624,(vlSelf->top__DOT__HY_RegFile__DOT__a1),64);
            tracep->chgQData(oldp+626,(vlSelf->top__DOT__HY_RegFile__DOT__a2),64);
            tracep->chgQData(oldp+628,(vlSelf->top__DOT__HY_RegFile__DOT__a3),64);
            tracep->chgQData(oldp+630,(vlSelf->top__DOT__HY_RegFile__DOT__a4),64);
            tracep->chgQData(oldp+632,(vlSelf->top__DOT__HY_RegFile__DOT__a5),64);
            tracep->chgQData(oldp+634,(vlSelf->top__DOT__HY_RegFile__DOT__a6),64);
            tracep->chgQData(oldp+636,(vlSelf->top__DOT__HY_RegFile__DOT__a7),64);
            tracep->chgQData(oldp+638,(vlSelf->top__DOT__HY_RegFile__DOT__s2),64);
            tracep->chgQData(oldp+640,(vlSelf->top__DOT__HY_RegFile__DOT__s3),64);
            tracep->chgQData(oldp+642,(vlSelf->top__DOT__HY_RegFile__DOT__s4),64);
            tracep->chgQData(oldp+644,(vlSelf->top__DOT__HY_RegFile__DOT__s5),64);
            tracep->chgQData(oldp+646,(vlSelf->top__DOT__HY_RegFile__DOT__s6),64);
            tracep->chgQData(oldp+648,(vlSelf->top__DOT__HY_RegFile__DOT__s7),64);
            tracep->chgQData(oldp+650,(vlSelf->top__DOT__HY_RegFile__DOT__s8),64);
            tracep->chgQData(oldp+652,(vlSelf->top__DOT__HY_RegFile__DOT__s9),64);
            tracep->chgQData(oldp+654,(vlSelf->top__DOT__HY_RegFile__DOT__s10),64);
            tracep->chgQData(oldp+656,(vlSelf->top__DOT__HY_RegFile__DOT__s11),64);
            tracep->chgQData(oldp+658,(vlSelf->top__DOT__HY_RegFile__DOT__t3),64);
            tracep->chgQData(oldp+660,(vlSelf->top__DOT__HY_RegFile__DOT__t4),64);
            tracep->chgQData(oldp+662,(vlSelf->top__DOT__HY_RegFile__DOT__t5),64);
            tracep->chgQData(oldp+664,(vlSelf->top__DOT__HY_RegFile__DOT__t6),64);
            tracep->chgWData(oldp+666,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
            tracep->chgWData(oldp+735,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+738,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+741,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+744,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+747,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+750,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+753,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+756,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+759,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+762,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+765,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+768,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+771,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+774,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+777,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+780,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+783,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+786,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+789,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+792,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+795,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+798,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+801,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+804,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+807,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+810,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+813,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+816,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+819,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+822,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+825,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+828,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+831,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+832,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+833,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+834,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+835,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+836,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+837,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+838,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+839,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+840,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+841,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+842,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+843,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+844,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+845,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+846,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+847,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+848,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+849,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+850,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+851,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+852,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+853,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+854,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+855,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+856,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+857,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+858,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+859,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+860,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+861,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+862,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+863,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+865,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+867,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+869,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+871,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+873,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+875,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+877,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+879,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+881,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+883,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+885,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+887,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+889,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+891,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+893,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+895,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+897,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+899,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+901,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+903,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+905,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+907,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+909,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+911,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+913,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+915,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+917,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+919,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+921,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+923,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+925,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
            tracep->chgWData(oldp+927,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
            tracep->chgWData(oldp+996,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+999,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+1002,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+1005,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+1008,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+1011,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+1014,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+1017,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+1020,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+1023,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+1026,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+1029,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+1032,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+1035,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+1038,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+1041,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+1044,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+1047,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+1050,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+1053,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+1056,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+1059,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+1062,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+1065,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+1068,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+1071,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+1074,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+1077,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+1080,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+1083,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+1086,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+1089,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+1092,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+1093,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+1094,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+1095,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+1096,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+1097,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+1098,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+1099,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+1100,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+1101,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+1102,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+1103,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+1104,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+1105,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+1106,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+1107,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+1108,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+1109,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+1110,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+1111,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+1112,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+1113,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+1114,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+1115,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+1116,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+1117,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+1118,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+1119,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+1120,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+1121,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+1122,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+1123,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+1124,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1126,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1128,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1130,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1132,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1134,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1136,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+1138,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+1140,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+1142,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+1144,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+1146,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+1148,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+1150,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+1152,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+1154,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+1156,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+1158,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+1160,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+1162,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+1164,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+1166,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+1168,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+1170,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+1172,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+1174,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+1176,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+1178,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+1180,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+1182,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+1184,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+1186,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
        }
        tracep->chgBit(oldp+1188,(vlSelf->clk));
        tracep->chgBit(oldp+1189,(vlSelf->rst));
        tracep->chgIData(oldp+1190,(vlSelf->instr_in),32);
        tracep->chgQData(oldp+1191,(vlSelf->SEXT_result),64);
        tracep->chgQData(oldp+1193,(vlSelf->PC_Test),64);
        tracep->chgCData(oldp+1195,(vlSelf->SEXT_Control_out),3);
        tracep->chgQData(oldp+1196,(vlSelf->RS1_OUTPUT),64);
        tracep->chgQData(oldp+1198,(vlSelf->RS2_OUTPUT),64);
        tracep->chgQData(oldp+1200,(vlSelf->ALU_Result),64);
        tracep->chgBit(oldp+1202,(vlSelf->MEM_Enable));
        tracep->chgBit(oldp+1203,(vlSelf->MEM_Read));
        tracep->chgCData(oldp+1204,(vlSelf->MEM_DataLenth),4);
        tracep->chgQData(oldp+1205,(vlSelf->MEM_Addr),64);
        tracep->chgQData(oldp+1207,(vlSelf->MEM_Dataoutput),64);
        tracep->chgQData(oldp+1209,(vlSelf->MEM_Datainput),64);
        tracep->chgBit(oldp+1211,(vlSelf->WriteBack_Enable_result));
        tracep->chgBit(oldp+1212,(vlSelf->C_RS1_PC_Connector_result));
        tracep->chgBit(oldp+1213,(vlSelf->C_RS2_imm_Connector_result));
        tracep->chgBit(oldp+1214,(vlSelf->C_ALU_MEM_Connector_result));
        tracep->chgBit(oldp+1215,(vlSelf->C_ALU_NPC_In_Connector_result));
        tracep->chgCData(oldp+1216,(vlSelf->C_NPC_Branch_Jump_Connector_result),2);
        tracep->chgQData(oldp+1217,((vlSelf->top__DOT__PC_Wire 
                                     + vlSelf->top__DOT__SEXT_Connector)),64);
        tracep->chgCData(oldp+1219,((0xffU & (- (IData)(
                                                        (0x100073U 
                                                         == vlSelf->instr_in))))),8);
        tracep->chgCData(oldp+1220,((0x7fU & vlSelf->instr_in)),7);
        tracep->chgCData(oldp+1221,((7U & (vlSelf->instr_in 
                                           >> 0xcU))),3);
        tracep->chgCData(oldp+1222,((vlSelf->instr_in 
                                     >> 0x19U)),7);
        tracep->chgCData(oldp+1223,((vlSelf->instr_in 
                                     >> 0x1aU)),6);
        tracep->chgBit(oldp+1224,((0x13U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1225,((0x3bU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1226,((0x33U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1227,((0x1bU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1228,((3U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+1229,((0x23U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1230,((0x63U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1231,((0x6fU == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1232,((0x67U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1233,((0x17U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1234,((0x37U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1235,((0x73U == (0x7fU 
                                             & vlSelf->instr_in))));
        tracep->chgBit(oldp+1236,((0U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1237,((4U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1238,((6U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1239,((3U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1240,((2U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1241,((5U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1242,((1U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1243,((7U == (7U & (vlSelf->instr_in 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1244,((0U == (vlSelf->instr_in 
                                          >> 0x19U))));
        tracep->chgBit(oldp+1245,((1U == (vlSelf->instr_in 
                                          >> 0x19U))));
        tracep->chgBit(oldp+1246,((0U == (vlSelf->instr_in 
                                          >> 0x1aU))));
        tracep->chgBit(oldp+1247,((0x10U == (vlSelf->instr_in 
                                             >> 0x1aU))));
        tracep->chgBit(oldp+1248,((0x100073U == vlSelf->instr_in)));
        tracep->chgBit(oldp+1249,(((0x17U == (0x7fU 
                                              & vlSelf->instr_in)) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->instr_in)))));
        tracep->chgBit(oldp+1250,((((((((((((((((((
                                                   (((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
                                                  & vlSelf->instr_in))) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__lb)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__lwu))));
        tracep->chgSData(oldp+1251,((vlSelf->instr_in 
                                     >> 0x14U)),12);
        tracep->chgIData(oldp+1252,((0xfffff000U & vlSelf->instr_in)),32);
        tracep->chgCData(oldp+1253,((0x1fU & (vlSelf->instr_in 
                                              >> 0xfU))),5);
        tracep->chgCData(oldp+1254,((0x1fU & (vlSelf->instr_in 
                                              >> 0x14U))),5);
        tracep->chgCData(oldp+1255,((0x1fU & (vlSelf->instr_in 
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
