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
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[0]),10);
            tracep->chgSData(oldp+1,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[1]),10);
            tracep->chgSData(oldp+2,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[2]),10);
            tracep->chgSData(oldp+3,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[3]),10);
            tracep->chgSData(oldp+4,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[4]),10);
            tracep->chgSData(oldp+5,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[5]),10);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[0]),6);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[1]),6);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[2]),6);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[3]),6);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[4]),6);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[5]),6);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[3]),4);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[4]),4);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[5]),4);
            tracep->chgSData(oldp+18,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[0]),16);
            tracep->chgSData(oldp+19,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[1]),16);
            tracep->chgSData(oldp+20,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[2]),16);
            tracep->chgSData(oldp+21,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[3]),16);
            tracep->chgSData(oldp+22,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[4]),16);
            tracep->chgSData(oldp+23,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[5]),16);
            tracep->chgSData(oldp+24,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[6]),16);
            tracep->chgSData(oldp+25,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[7]),16);
            tracep->chgSData(oldp+26,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[8]),16);
            tracep->chgSData(oldp+27,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[9]),16);
            tracep->chgSData(oldp+28,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[10]),16);
            tracep->chgSData(oldp+29,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[11]),16);
            tracep->chgSData(oldp+30,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[0]),12);
            tracep->chgSData(oldp+31,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[1]),12);
            tracep->chgSData(oldp+32,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[2]),12);
            tracep->chgSData(oldp+33,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[3]),12);
            tracep->chgSData(oldp+34,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[4]),12);
            tracep->chgSData(oldp+35,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[5]),12);
            tracep->chgSData(oldp+36,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[6]),12);
            tracep->chgSData(oldp+37,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[7]),12);
            tracep->chgSData(oldp+38,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[8]),12);
            tracep->chgSData(oldp+39,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[9]),12);
            tracep->chgSData(oldp+40,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[10]),12);
            tracep->chgSData(oldp+41,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[11]),12);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[3]),4);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[4]),4);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[5]),4);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[6]),4);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[7]),4);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[8]),4);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[9]),4);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[10]),4);
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[11]),4);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[3]),8);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[4]),8);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[0]),3);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[1]),3);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[2]),3);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[3]),3);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[4]),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__PC_TO_IFU),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__INSTR_TO_IFU),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__INSTR_ADDR),64);
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__READ_INSTR_START));
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__READ_INSTR_FINISH));
            tracep->chgQData(oldp+77,((4ULL + vlSelf->top__DOT__PC_TO_IFU)),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__ALU_Number_1),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__ALu_Number_2),64);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__ALU_Control),4);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__ALU_Inside_Control),4);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__SEXT_Control),3);
            tracep->chgBit(oldp+86,((1U & (~ ((((((
                                                   ((((IData)(vlSelf->top__DOT__CU__DOT__bne) 
                                                      | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                                     | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                                    | (IData)(vlSelf->top__DOT__CU__DOT__blt)) 
                                                   | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                                  | (IData)(vlSelf->top__DOT__CU__DOT__bgeu)) 
                                                 | (IData)(vlSelf->top__DOT__CU__DOT__sd)) 
                                                | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                               | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                              | (IData)(vlSelf->top__DOT__CU__DOT__sh))))));
            tracep->chgBit(oldp+87,((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
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
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__MEM_Ctrl),4);
            tracep->chgBit(oldp+89,((((((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
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
            tracep->chgIData(oldp+90,((IData)(vlSelf->top__DOT__INSTR_TO_IFU)),32);
            tracep->chgCData(oldp+91,(((IData)(vlSelf->top__DOT__READ_INSTR_START) 
                                       << 1U)),2);
            tracep->chgCData(oldp+92,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel),2);
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release));
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_addr),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data),64);
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req));
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish));
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state),3);
            tracep->chgCData(oldp+101,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state),3);
            tracep->chgCData(oldp+102,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri),2);
            tracep->chgCData(oldp+103,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot),2);
            tracep->chgCData(oldp+104,(((~ ((4U | (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot)) 
                                            - (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri))) 
                                        & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot))),3);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR),64);
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY));
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf),64);
            tracep->chgCData(oldp+111,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_RESP),2);
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state));
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__reg_file__DOT__Zero),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__reg_file__DOT__ra),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__reg_file__DOT__sp),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__reg_file__DOT__gp),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__reg_file__DOT__tp),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__reg_file__DOT__t0),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__reg_file__DOT__t1),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__reg_file__DOT__t2),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__reg_file__DOT__s0),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__reg_file__DOT__s1),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__reg_file__DOT__a0),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__reg_file__DOT__a1),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__reg_file__DOT__a2),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__reg_file__DOT__a3),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__reg_file__DOT__a4),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__reg_file__DOT__a5),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__reg_file__DOT__a6),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__reg_file__DOT__a7),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__reg_file__DOT__s2),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__reg_file__DOT__s3),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__reg_file__DOT__s4),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__reg_file__DOT__s5),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__reg_file__DOT__s6),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__reg_file__DOT__s7),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__reg_file__DOT__s8),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__reg_file__DOT__s9),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__reg_file__DOT__s10),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__reg_file__DOT__s11),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__reg_file__DOT__t3),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__reg_file__DOT__t4),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__reg_file__DOT__t5),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__reg_file__DOT__t6),64);
            tracep->chgWData(oldp+181,(vlSelf->top__DOT__reg_file__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
            tracep->chgWData(oldp+250,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+253,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+256,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+259,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+262,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+265,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+268,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+271,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+274,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+277,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+280,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+283,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+286,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+289,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+292,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+295,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+298,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+301,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+304,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+307,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+310,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+313,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+316,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+319,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+322,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+325,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+328,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+331,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+334,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+337,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+340,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+343,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+346,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+347,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+348,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+349,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+350,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+351,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+352,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+353,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+354,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+355,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+356,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+357,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+358,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+359,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+360,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+361,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+362,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+363,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+364,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+365,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+366,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+367,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+368,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+369,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+370,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+371,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+372,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+373,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+374,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+375,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+376,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+377,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+386,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+388,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+390,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+392,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+396,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+398,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+400,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+406,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+408,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+412,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+414,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+418,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+420,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+422,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+424,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+426,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+432,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+434,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+436,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+438,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+440,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
            tracep->chgQData(oldp+442,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+444,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+445,(vlSelf->top__DOT__reg_file__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
            tracep->chgWData(oldp+514,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+517,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+520,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+523,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+526,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+529,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+532,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+535,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+538,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+541,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+544,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+547,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+550,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+553,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+556,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+559,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+562,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+565,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+568,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+571,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+574,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+577,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+580,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+583,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+586,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+589,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+592,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+595,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+598,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+601,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+604,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+607,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+610,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+611,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+612,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+613,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+614,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+615,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+616,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+617,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+618,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+619,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+620,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+621,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+622,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+623,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+624,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+625,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+626,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+627,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+628,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+629,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+630,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+631,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+632,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+633,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+634,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+635,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+636,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+637,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+638,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+639,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+640,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+641,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+642,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+644,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+646,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+648,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+650,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+652,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+654,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+656,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+658,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+660,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+662,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+664,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+666,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+668,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+670,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+672,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+674,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+676,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+678,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+680,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+682,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+684,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+686,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+688,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+690,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+692,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+694,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+696,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+698,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+700,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+702,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+704,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
            tracep->chgQData(oldp+706,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+708,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__hit));
            tracep->chgSData(oldp+709,(vlSelf->top__DOT__sign_extend__DOT__immS),12);
            tracep->chgIData(oldp+710,(vlSelf->top__DOT__sign_extend__DOT__immJ),21);
            tracep->chgSData(oldp+711,(vlSelf->top__DOT__sign_extend__DOT__immB),13);
            tracep->chgWData(oldp+712,(vlSelf->top__DOT__sign_extend__DOT____Vcellinp__SEXT____pinNumber4),335);
            tracep->chgWData(oldp+723,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+726,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+729,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+732,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+735,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+738,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+739,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+740,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+741,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+742,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+743,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+745,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+747,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+749,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+751,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+753,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+755,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+756,(vlSelf->top__DOT____Vcellinp__MUX_REG1_PC____pinNumber4),130);
            tracep->chgWData(oldp+761,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+764,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+767,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+768,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+769,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+771,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+773,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+775,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+776,(vlSelf->top__DOT____Vcellinp__MUX_REG2_SEXT____pinNumber4),130);
            tracep->chgWData(oldp+781,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+784,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+787,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+788,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+789,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+791,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+793,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+795,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+796,(vlSelf->top__DOT__CU__DOT__Match_31_25_0100000));
            tracep->chgBit(oldp+797,(vlSelf->top__DOT__CU__DOT__addi));
            tracep->chgBit(oldp+798,(vlSelf->top__DOT__CU__DOT__addiw));
            tracep->chgBit(oldp+799,(vlSelf->top__DOT__CU__DOT__addw));
            tracep->chgBit(oldp+800,(vlSelf->top__DOT__CU__DOT__subw));
            tracep->chgBit(oldp+801,(vlSelf->top__DOT__CU__DOT__add));
            tracep->chgBit(oldp+802,(vlSelf->top__DOT__CU__DOT__sub));
            tracep->chgBit(oldp+803,(vlSelf->top__DOT__CU__DOT__mulw));
            tracep->chgBit(oldp+804,(vlSelf->top__DOT__CU__DOT__divw));
            tracep->chgBit(oldp+805,(vlSelf->top__DOT__CU__DOT__mul));
            tracep->chgBit(oldp+806,(vlSelf->top__DOT__CU__DOT__divu));
            tracep->chgBit(oldp+807,(vlSelf->top__DOT__CU__DOT__divuw));
            tracep->chgBit(oldp+808,(vlSelf->top__DOT__CU__DOT__remw));
            tracep->chgBit(oldp+809,(vlSelf->top__DOT__CU__DOT__remu));
            tracep->chgBit(oldp+810,(vlSelf->top__DOT__CU__DOT__remuw));
            tracep->chgBit(oldp+811,(vlSelf->top__DOT__CU__DOT__sltiu));
            tracep->chgBit(oldp+812,(vlSelf->top__DOT__CU__DOT__sltu));
            tracep->chgBit(oldp+813,(vlSelf->top__DOT__CU__DOT__slt));
            tracep->chgBit(oldp+814,(vlSelf->top__DOT__CU__DOT__slti));
            tracep->chgBit(oldp+815,(vlSelf->top__DOT__CU__DOT__sraw));
            tracep->chgBit(oldp+816,(vlSelf->top__DOT__CU__DOT__sllw));
            tracep->chgBit(oldp+817,(vlSelf->top__DOT__CU__DOT__srlw));
            tracep->chgBit(oldp+818,(vlSelf->top__DOT__CU__DOT__slli));
            tracep->chgBit(oldp+819,(vlSelf->top__DOT__CU__DOT__srli));
            tracep->chgBit(oldp+820,(vlSelf->top__DOT__CU__DOT__srai));
            tracep->chgBit(oldp+821,(vlSelf->top__DOT__CU__DOT__srliw));
            tracep->chgBit(oldp+822,(vlSelf->top__DOT__CU__DOT__slliw));
            tracep->chgBit(oldp+823,(vlSelf->top__DOT__CU__DOT__sraiw));
            tracep->chgBit(oldp+824,(vlSelf->top__DOT__CU__DOT__sll));
            tracep->chgBit(oldp+825,(vlSelf->top__DOT__CU__DOT__ld));
            tracep->chgBit(oldp+826,(vlSelf->top__DOT__CU__DOT__lw));
            tracep->chgBit(oldp+827,(vlSelf->top__DOT__CU__DOT__lbu));
            tracep->chgBit(oldp+828,(vlSelf->top__DOT__CU__DOT__lh));
            tracep->chgBit(oldp+829,(vlSelf->top__DOT__CU__DOT__lhu));
            tracep->chgBit(oldp+830,(vlSelf->top__DOT__CU__DOT__sd));
            tracep->chgBit(oldp+831,(vlSelf->top__DOT__CU__DOT__sw));
            tracep->chgBit(oldp+832,(vlSelf->top__DOT__CU__DOT__sb));
            tracep->chgBit(oldp+833,(vlSelf->top__DOT__CU__DOT__sh));
            tracep->chgBit(oldp+834,(vlSelf->top__DOT__CU__DOT__lb));
            tracep->chgBit(oldp+835,(vlSelf->top__DOT__CU__DOT__lwu));
            tracep->chgBit(oldp+836,(vlSelf->top__DOT__CU__DOT__andi));
            tracep->chgBit(oldp+837,(vlSelf->top__DOT__CU__DOT__xori));
            tracep->chgBit(oldp+838,(vlSelf->top__DOT__CU__DOT__ori));
            tracep->chgBit(oldp+839,(vlSelf->top__DOT__CU__DOT__bne));
            tracep->chgBit(oldp+840,(vlSelf->top__DOT__CU__DOT__beq));
            tracep->chgBit(oldp+841,(vlSelf->top__DOT__CU__DOT__bge));
            tracep->chgBit(oldp+842,(vlSelf->top__DOT__CU__DOT__blt));
            tracep->chgBit(oldp+843,(vlSelf->top__DOT__CU__DOT__bltu));
            tracep->chgBit(oldp+844,(vlSelf->top__DOT__CU__DOT__bgeu));
            tracep->chgBit(oldp+845,(vlSelf->top__DOT__CU__DOT__jalr));
            tracep->chgBit(oldp+846,(vlSelf->top__DOT__CU__DOT__csrrw));
            tracep->chgBit(oldp+847,(vlSelf->top__DOT__CU__DOT__csrrs));
            tracep->chgBit(oldp+848,(((((IData)(vlSelf->top__DOT__CU__DOT__sd) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__sh))));
            tracep->chgBit(oldp+849,(((((((IData)(vlSelf->top__DOT__CU__DOT__bne) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__blt)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__bgeu))));
            tracep->chgBit(oldp+850,((((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__addiw)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__addw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__subw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__add)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__sub)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__jalr))));
            tracep->chgBit(oldp+851,(((IData)(vlSelf->top__DOT__CU__DOT__mulw) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__mul))));
            tracep->chgBit(oldp+852,(((((((IData)(vlSelf->top__DOT__CU__DOT__divw) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__remw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__divu)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__divuw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__remu)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__remuw))));
            tracep->chgBit(oldp+853,(((((IData)(vlSelf->top__DOT__CU__DOT__sltiu) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__sltu)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__slt)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__slti))));
            tracep->chgBit(oldp+854,(((((((((((IData)(vlSelf->top__DOT__CU__DOT__sraw) 
                                              | (IData)(vlSelf->top__DOT__CU__DOT__sllw)) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT__srlw)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__slli)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__srli)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__srai)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__srliw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__slliw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__sraiw)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__sll))));
            tracep->chgBit(oldp+855,((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
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
            tracep->chgBit(oldp+856,(((((((IData)(vlSelf->top__DOT__CU__DOT__andi) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__xori)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT___or)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT___and)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT___xor)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__ori))));
            tracep->chgBit(oldp+857,((((((((((IData)(vlSelf->top__DOT__CU__DOT__sub) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT__mul)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__remw)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__xori)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__srliw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__srlw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT___xor)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__csrrs))));
            tracep->chgBit(oldp+858,((((((((IData)(vlSelf->top__DOT__CU__DOT__sltiu) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__sltu)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__slli)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__jalr)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__remu)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__sll))));
            tracep->chgBit(oldp+859,((((IData)(vlSelf->top__DOT__CU__DOT__srai) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__remuw)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__bgeu))));
            tracep->chgSData(oldp+860,(vlSelf->top__DOT__CU__DOT__func_signal),12);
            tracep->chgCData(oldp+861,(vlSelf->top__DOT__CU__DOT__ALU_inside_signal),6);
            tracep->chgCData(oldp+862,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+863,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+864,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+865,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+866,(vlSelf->top__DOT__CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
            tracep->chgCData(oldp+867,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
            tracep->chgBit(oldp+868,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+869,(vlSelf->clk));
        tracep->chgBit(oldp+870,(vlSelf->rst));
        tracep->chgQData(oldp+871,(vlSelf->READ_DATA),64);
        tracep->chgBit(oldp+873,(vlSelf->READ_FINISH));
        tracep->chgBit(oldp+874,(vlSelf->READ_SIGNAL));
        tracep->chgQData(oldp+875,(vlSelf->READ_ADDR),64);
        tracep->chgBit(oldp+877,(vlSelf->ec_finish));
        tracep->chgQData(oldp+878,(vlSelf->ex_data),64);
        tracep->chgQData(oldp+880,(vlSelf->RS1_Reg),64);
        tracep->chgQData(oldp+882,(vlSelf->RS2_Reg),64);
        tracep->chgQData(oldp+884,(vlSelf->SEXT_out),64);
        tracep->chgBit(oldp+886,(vlSelf->INSTR_ARRIVE));
        tracep->chgBit(oldp+887,(vlSelf->INSTR_Complete));
        tracep->chgIData(oldp+888,(vlSelf->INSTR_DATA),32);
        tracep->chgBit(oldp+889,(((0x17U == (0x7fU 
                                             & vlSelf->INSTR_DATA)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->INSTR_DATA)))));
        tracep->chgBit(oldp+890,(((((((((((((((((((
                                                   ((((((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
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
                                         | (0x17U == 
                                            (0x7fU 
                                             & vlSelf->INSTR_DATA))) 
                                        | (0x37U == 
                                           (0x7fU & vlSelf->INSTR_DATA))) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->INSTR_DATA))) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__jalr)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__slti)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__lb)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__lwu)) 
                                  | (IData)(vlSelf->top__DOT__CU__DOT__ori))));
        tracep->chgBit(oldp+891,(((0x6fU == (0x7fU 
                                             & vlSelf->INSTR_DATA)) 
                                  | (IData)(vlSelf->top__DOT__CU__DOT__jalr))));
        tracep->chgCData(oldp+892,((((IData)(vlSelf->top__DOT__CU__DOT__jalr) 
                                     << 1U) | (0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->INSTR_DATA)))),2);
        tracep->chgCData(oldp+893,((0x1fU & (vlSelf->INSTR_DATA 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+894,((0x1fU & (vlSelf->INSTR_DATA 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+895,((0x1fU & (vlSelf->INSTR_DATA 
                                             >> 7U))),5);
        tracep->chgSData(oldp+896,((vlSelf->INSTR_DATA 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+897,((0xfffff000U & vlSelf->INSTR_DATA)),32);
        tracep->chgCData(oldp+898,((0xffU & (- (IData)(
                                                       (0x100073U 
                                                        == vlSelf->INSTR_DATA))))),8);
        tracep->chgCData(oldp+899,((0x7fU & vlSelf->INSTR_DATA)),7);
        tracep->chgCData(oldp+900,((7U & (vlSelf->INSTR_DATA 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+901,((vlSelf->INSTR_DATA 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+902,((vlSelf->INSTR_DATA 
                                    >> 0x1aU)),6);
        tracep->chgBit(oldp+903,((0x13U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+904,((0x3bU == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+905,((0x33U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+906,((0x1bU == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+907,((3U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+908,((0x23U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+909,((0x63U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+910,((0x6fU == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+911,((0x67U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+912,((0x17U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+913,((0x37U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+914,((0x73U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+915,((0U == (7U & (vlSelf->INSTR_DATA 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+916,((4U == (7U & (vlSelf->INSTR_DATA 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+917,((6U == (7U & (vlSelf->INSTR_DATA 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+918,((3U == (7U & (vlSelf->INSTR_DATA 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+919,((2U == (7U & (vlSelf->INSTR_DATA 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+920,((5U == (7U & (vlSelf->INSTR_DATA 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+921,((1U == (7U & (vlSelf->INSTR_DATA 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+922,((7U == (7U & (vlSelf->INSTR_DATA 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+923,((0U == (vlSelf->INSTR_DATA 
                                         >> 0x19U))));
        tracep->chgBit(oldp+924,((1U == (vlSelf->INSTR_DATA 
                                         >> 0x19U))));
        tracep->chgBit(oldp+925,((0U == (vlSelf->INSTR_DATA 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+926,((0x10U == (vlSelf->INSTR_DATA 
                                            >> 0x1aU))));
        tracep->chgBit(oldp+927,(((IData)((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->INSTR_DATA))) 
                                  & (1U == (vlSelf->INSTR_DATA 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+928,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->INSTR_DATA))) 
                                  & (0U == (vlSelf->INSTR_DATA 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+929,((0x100073U == vlSelf->INSTR_DATA)));
        tracep->chgBit(oldp+930,((0x73U == vlSelf->INSTR_DATA)));
        tracep->chgBit(oldp+931,((0x30200073U == vlSelf->INSTR_DATA)));
        tracep->chgBit(oldp+932,(((((((((((((((((((
                                                   ((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
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
        tracep->chgBit(oldp+933,(((0x17U == (0x7fU 
                                             & vlSelf->INSTR_DATA)) 
                                  | (0x37U == (0x7fU 
                                               & vlSelf->INSTR_DATA)))));
        tracep->chgBit(oldp+934,(((((((((((((((((((
                                                   ((((((IData)(vlSelf->top__DOT__CU__DOT__addw) 
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
                                               == (0x707fU 
                                                   & vlSelf->INSTR_DATA))) 
                                      & (0U == (vlSelf->INSTR_DATA 
                                                >> 0x19U)))) 
                                  | (0x30200073U == vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+935,(((((IData)(vlSelf->top__DOT__CU__DOT__csrrw) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__csrrs)) 
                                   | (0x73U == vlSelf->INSTR_DATA)) 
                                  | (0x30200073U == vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+936,(((((((((((((((((((
                                                   (((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
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
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->INSTR_DATA))) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->INSTR_DATA))) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__lb)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__lwu)) 
                                  | (IData)(vlSelf->top__DOT__CU__DOT__csrrw))));
        tracep->chgBit(oldp+937,(((((((((((IData)(vlSelf->top__DOT__CU__DOT__addiw) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__add)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__sllw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__slliw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT___or)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__addw)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__divu)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__ori)) 
                                  | (0x73U == vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+938,((((((((IData)(vlSelf->top__DOT__CU__DOT__subw) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__slt)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__srli)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__blt)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__divuw)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__slti)) 
                                  | (0x30200073U == vlSelf->INSTR_DATA))));
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
    }
}
