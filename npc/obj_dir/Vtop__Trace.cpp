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
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__mcause_En));
            tracep->chgQData(oldp+1,(vlSelf->top__DOT__mtvec_Write_Data),64);
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__mtvec_En));
            tracep->chgSData(oldp+4,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[0]),10);
            tracep->chgSData(oldp+5,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[1]),10);
            tracep->chgSData(oldp+6,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[2]),10);
            tracep->chgSData(oldp+7,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[3]),10);
            tracep->chgSData(oldp+8,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[4]),10);
            tracep->chgSData(oldp+9,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[5]),10);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[0]),6);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[1]),6);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[2]),6);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[3]),6);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[4]),6);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[5]),6);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[3]),4);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[4]),4);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[5]),4);
            tracep->chgSData(oldp+22,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[0]),16);
            tracep->chgSData(oldp+23,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[1]),16);
            tracep->chgSData(oldp+24,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[2]),16);
            tracep->chgSData(oldp+25,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[3]),16);
            tracep->chgSData(oldp+26,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[4]),16);
            tracep->chgSData(oldp+27,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[5]),16);
            tracep->chgSData(oldp+28,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[6]),16);
            tracep->chgSData(oldp+29,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[7]),16);
            tracep->chgSData(oldp+30,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[8]),16);
            tracep->chgSData(oldp+31,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[9]),16);
            tracep->chgSData(oldp+32,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[10]),16);
            tracep->chgSData(oldp+33,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__pair_list[11]),16);
            tracep->chgSData(oldp+34,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[0]),12);
            tracep->chgSData(oldp+35,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[1]),12);
            tracep->chgSData(oldp+36,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[2]),12);
            tracep->chgSData(oldp+37,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[3]),12);
            tracep->chgSData(oldp+38,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[4]),12);
            tracep->chgSData(oldp+39,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[5]),12);
            tracep->chgSData(oldp+40,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[6]),12);
            tracep->chgSData(oldp+41,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[7]),12);
            tracep->chgSData(oldp+42,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[8]),12);
            tracep->chgSData(oldp+43,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[9]),12);
            tracep->chgSData(oldp+44,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[10]),12);
            tracep->chgSData(oldp+45,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__key_list[11]),12);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[3]),4);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[4]),4);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[5]),4);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[6]),4);
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[7]),4);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[8]),4);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[9]),4);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[10]),4);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__data_list[11]),4);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[3]),8);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[4]),8);
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[0]),3);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[1]),3);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[2]),3);
            tracep->chgCData(oldp+71,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[3]),3);
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[4]),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__PC_TO_IFU),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__INSTR_TO_IFU),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__INSTR_ADDR),64);
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__READ_INSTR_START));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__READ_INSTR_FINISH));
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__RS1_Reg),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__RS2_Reg),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__SEXT_out),64);
            tracep->chgQData(oldp+87,((4ULL + vlSelf->top__DOT__PC_TO_IFU)),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__ALU_Number_1),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__ALU_Number_2),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__ALU_Result),64);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__ALU_Control),4);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__ALU_Inside_Control),4);
            tracep->chgCData(oldp+97,(vlSelf->top__DOT__SEXT_Control),3);
            tracep->chgBit(oldp+98,((1U & (~ ((((((
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
            tracep->chgBit(oldp+99,((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
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
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__MEM_Ctrl),4);
            tracep->chgBit(oldp+101,((((((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
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
            tracep->chgSData(oldp+102,(vlSelf->top__DOT__CSR_Read_Addr),12);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__CSR_Read_Data),64);
            tracep->chgSData(oldp+105,(vlSelf->top__DOT__CSR_Write_Addr),12);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__CSR_Write_Data),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__mcause_Write_Data),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__csr__DOT__mcause_reg),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__mepc_Write_Data),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__csr__DOT__mepc_reg),64);
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__mepc_En));
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__csr__DOT__mtvec_reg),64);
            tracep->chgIData(oldp+119,((IData)(vlSelf->top__DOT__INSTR_TO_IFU)),32);
            tracep->chgCData(oldp+120,(((IData)(vlSelf->top__DOT__READ_INSTR_START) 
                                        << 1U)),2);
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel),2);
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release));
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_addr),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data),64);
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish));
            tracep->chgCData(oldp+129,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state),3);
            tracep->chgCData(oldp+130,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state),3);
            tracep->chgCData(oldp+131,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri),2);
            tracep->chgCData(oldp+132,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot),2);
            tracep->chgCData(oldp+133,(((~ ((4U | (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot)) 
                                            - (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri))) 
                                        & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot))),3);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR),64);
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY));
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf),64);
            tracep->chgCData(oldp+140,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_RESP),2);
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID));
            tracep->chgBit(oldp+142,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY));
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state));
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__reg_file__DOT__Zero),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__reg_file__DOT__ra),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__reg_file__DOT__sp),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__reg_file__DOT__gp),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__reg_file__DOT__tp),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__reg_file__DOT__t0),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__reg_file__DOT__t1),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__reg_file__DOT__t2),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__reg_file__DOT__s0),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__reg_file__DOT__s1),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__reg_file__DOT__a0),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__reg_file__DOT__a1),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__reg_file__DOT__a2),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__reg_file__DOT__a3),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__reg_file__DOT__a4),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__reg_file__DOT__a5),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__reg_file__DOT__a6),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__reg_file__DOT__a7),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__reg_file__DOT__s2),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__reg_file__DOT__s3),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__reg_file__DOT__s4),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__reg_file__DOT__s5),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__reg_file__DOT__s6),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__reg_file__DOT__s7),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__reg_file__DOT__s8),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__reg_file__DOT__s9),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__reg_file__DOT__s10),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__reg_file__DOT__s11),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__reg_file__DOT__t3),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__reg_file__DOT__t4),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__reg_file__DOT__t5),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__reg_file__DOT__t6),64);
            tracep->chgWData(oldp+210,(vlSelf->top__DOT__reg_file__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
            tracep->chgWData(oldp+279,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+282,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+285,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+288,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+291,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+294,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+297,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+300,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+303,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+306,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+309,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+312,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+315,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+318,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+321,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+324,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+327,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+330,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+333,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+336,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+339,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+342,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+345,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+348,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+351,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+354,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+357,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+360,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+363,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+366,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+369,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+372,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+375,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+376,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+377,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+378,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+379,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+380,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+381,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+382,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+383,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+384,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+385,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+386,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+387,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+388,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+389,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+390,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+391,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+392,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+393,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+394,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+395,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+396,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+397,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+398,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+399,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+400,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+401,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+402,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+403,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+404,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+405,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+406,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+407,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+409,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+411,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+413,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+415,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+417,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+419,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+421,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+423,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+425,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+427,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+429,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+431,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+433,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+435,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+437,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+439,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+441,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+443,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+445,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+447,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+449,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+451,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+453,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+455,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+457,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+459,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+461,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+463,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+465,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+467,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+469,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
            tracep->chgQData(oldp+471,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+473,(vlSelf->top__DOT__reg_file__DOT__RS1_Out__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+474,(vlSelf->top__DOT__reg_file__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
            tracep->chgWData(oldp+543,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+546,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+549,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+552,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+555,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+558,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+561,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+564,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+567,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+570,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+573,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+576,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+579,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+582,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+585,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+588,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+591,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+594,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+597,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+600,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+603,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+606,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+609,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+612,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+615,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+618,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+621,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+624,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+627,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+630,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+633,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+636,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+639,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+640,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+641,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+642,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+643,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+644,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+645,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+646,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+647,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+648,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+649,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+650,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+651,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+652,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+653,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+654,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+655,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+656,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+657,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+658,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+659,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+660,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+661,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+662,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+663,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+664,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+665,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+666,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+667,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+668,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+669,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+670,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+671,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+673,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+675,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+677,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+679,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+681,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+683,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+685,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+687,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+689,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+691,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+693,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+695,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+697,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+699,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+701,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+703,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+705,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+707,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+709,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+711,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+713,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+715,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+717,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+719,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+721,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+723,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+725,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+727,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+729,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+731,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+733,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
            tracep->chgQData(oldp+735,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+737,(vlSelf->top__DOT__reg_file__DOT__RS2_Out__DOT__i0__DOT__hit));
            tracep->chgSData(oldp+738,(vlSelf->top__DOT__sign_extend__DOT__immS),12);
            tracep->chgIData(oldp+739,(vlSelf->top__DOT__sign_extend__DOT__immJ),21);
            tracep->chgSData(oldp+740,(vlSelf->top__DOT__sign_extend__DOT__immB),13);
            tracep->chgWData(oldp+741,(vlSelf->top__DOT__sign_extend__DOT____Vcellinp__SEXT____pinNumber4),335);
            tracep->chgWData(oldp+752,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+755,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+758,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+761,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+764,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+767,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+768,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+769,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+770,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+771,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+772,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+774,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+776,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+778,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+780,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+782,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+784,(vlSelf->top__DOT__sign_extend__DOT__SEXT__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+785,(vlSelf->top__DOT____Vcellinp__MUX_REG1_PC____pinNumber4),130);
            tracep->chgWData(oldp+790,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+793,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+796,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+797,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+798,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+800,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+802,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+804,(vlSelf->top__DOT__MUX_REG1_PC__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+805,(vlSelf->top__DOT____Vcellinp__MUX_REG2_SEXT____pinNumber4),130);
            tracep->chgWData(oldp+810,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+813,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+816,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+817,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+818,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+820,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+822,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+824,(vlSelf->top__DOT__MUX_REG2_SEXT__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+825,(vlSelf->top__DOT__CU__DOT__Match_31_25_0100000));
            tracep->chgBit(oldp+826,(vlSelf->top__DOT__CU__DOT__addi));
            tracep->chgBit(oldp+827,(vlSelf->top__DOT__CU__DOT__addiw));
            tracep->chgBit(oldp+828,(vlSelf->top__DOT__CU__DOT__addw));
            tracep->chgBit(oldp+829,(vlSelf->top__DOT__CU__DOT__subw));
            tracep->chgBit(oldp+830,(vlSelf->top__DOT__CU__DOT__add));
            tracep->chgBit(oldp+831,(vlSelf->top__DOT__CU__DOT__sub));
            tracep->chgBit(oldp+832,(vlSelf->top__DOT__CU__DOT__mulw));
            tracep->chgBit(oldp+833,(vlSelf->top__DOT__CU__DOT__divw));
            tracep->chgBit(oldp+834,(vlSelf->top__DOT__CU__DOT__mul));
            tracep->chgBit(oldp+835,(vlSelf->top__DOT__CU__DOT__divu));
            tracep->chgBit(oldp+836,(vlSelf->top__DOT__CU__DOT__divuw));
            tracep->chgBit(oldp+837,(vlSelf->top__DOT__CU__DOT__remw));
            tracep->chgBit(oldp+838,(vlSelf->top__DOT__CU__DOT__remu));
            tracep->chgBit(oldp+839,(vlSelf->top__DOT__CU__DOT__remuw));
            tracep->chgBit(oldp+840,(vlSelf->top__DOT__CU__DOT__sltiu));
            tracep->chgBit(oldp+841,(vlSelf->top__DOT__CU__DOT__sltu));
            tracep->chgBit(oldp+842,(vlSelf->top__DOT__CU__DOT__slt));
            tracep->chgBit(oldp+843,(vlSelf->top__DOT__CU__DOT__slti));
            tracep->chgBit(oldp+844,(vlSelf->top__DOT__CU__DOT__sraw));
            tracep->chgBit(oldp+845,(vlSelf->top__DOT__CU__DOT__sllw));
            tracep->chgBit(oldp+846,(vlSelf->top__DOT__CU__DOT__srlw));
            tracep->chgBit(oldp+847,(vlSelf->top__DOT__CU__DOT__slli));
            tracep->chgBit(oldp+848,(vlSelf->top__DOT__CU__DOT__srli));
            tracep->chgBit(oldp+849,(vlSelf->top__DOT__CU__DOT__srai));
            tracep->chgBit(oldp+850,(vlSelf->top__DOT__CU__DOT__srliw));
            tracep->chgBit(oldp+851,(vlSelf->top__DOT__CU__DOT__slliw));
            tracep->chgBit(oldp+852,(vlSelf->top__DOT__CU__DOT__sraiw));
            tracep->chgBit(oldp+853,(vlSelf->top__DOT__CU__DOT__sll));
            tracep->chgBit(oldp+854,(vlSelf->top__DOT__CU__DOT__ld));
            tracep->chgBit(oldp+855,(vlSelf->top__DOT__CU__DOT__lw));
            tracep->chgBit(oldp+856,(vlSelf->top__DOT__CU__DOT__lbu));
            tracep->chgBit(oldp+857,(vlSelf->top__DOT__CU__DOT__lh));
            tracep->chgBit(oldp+858,(vlSelf->top__DOT__CU__DOT__lhu));
            tracep->chgBit(oldp+859,(vlSelf->top__DOT__CU__DOT__sd));
            tracep->chgBit(oldp+860,(vlSelf->top__DOT__CU__DOT__sw));
            tracep->chgBit(oldp+861,(vlSelf->top__DOT__CU__DOT__sb));
            tracep->chgBit(oldp+862,(vlSelf->top__DOT__CU__DOT__sh));
            tracep->chgBit(oldp+863,(vlSelf->top__DOT__CU__DOT__lb));
            tracep->chgBit(oldp+864,(vlSelf->top__DOT__CU__DOT__lwu));
            tracep->chgBit(oldp+865,(vlSelf->top__DOT__CU__DOT__andi));
            tracep->chgBit(oldp+866,(vlSelf->top__DOT__CU__DOT__xori));
            tracep->chgBit(oldp+867,(vlSelf->top__DOT__CU__DOT__ori));
            tracep->chgBit(oldp+868,(vlSelf->top__DOT__CU__DOT__bne));
            tracep->chgBit(oldp+869,(vlSelf->top__DOT__CU__DOT__beq));
            tracep->chgBit(oldp+870,(vlSelf->top__DOT__CU__DOT__bge));
            tracep->chgBit(oldp+871,(vlSelf->top__DOT__CU__DOT__blt));
            tracep->chgBit(oldp+872,(vlSelf->top__DOT__CU__DOT__bltu));
            tracep->chgBit(oldp+873,(vlSelf->top__DOT__CU__DOT__bgeu));
            tracep->chgBit(oldp+874,(vlSelf->top__DOT__CU__DOT__jalr));
            tracep->chgBit(oldp+875,(vlSelf->top__DOT__CU__DOT__csrrw));
            tracep->chgBit(oldp+876,(vlSelf->top__DOT__CU__DOT__csrrs));
            tracep->chgBit(oldp+877,(((((IData)(vlSelf->top__DOT__CU__DOT__sd) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__sw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__sb)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__sh))));
            tracep->chgBit(oldp+878,(((((((IData)(vlSelf->top__DOT__CU__DOT__bne) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__blt)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__bgeu))));
            tracep->chgBit(oldp+879,((((((((IData)(vlSelf->top__DOT__CU__DOT__addi) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__addiw)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__addw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__subw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__add)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__sub)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__jalr))));
            tracep->chgBit(oldp+880,(((IData)(vlSelf->top__DOT__CU__DOT__mulw) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__mul))));
            tracep->chgBit(oldp+881,(((((((IData)(vlSelf->top__DOT__CU__DOT__divw) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__remw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__divu)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__divuw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__remu)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__remuw))));
            tracep->chgBit(oldp+882,(((((IData)(vlSelf->top__DOT__CU__DOT__sltiu) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__sltu)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__slt)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__slti))));
            tracep->chgBit(oldp+883,(((((((((((IData)(vlSelf->top__DOT__CU__DOT__sraw) 
                                              | (IData)(vlSelf->top__DOT__CU__DOT__sllw)) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT__srlw)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__slli)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__srli)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__srai)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__srliw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__slliw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__sraiw)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__sll))));
            tracep->chgBit(oldp+884,((((((((((((IData)(vlSelf->top__DOT__CU__DOT__ld) 
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
            tracep->chgBit(oldp+885,(((((((IData)(vlSelf->top__DOT__CU__DOT__andi) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__xori)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT___or)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT___and)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT___xor)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__ori))));
            tracep->chgBit(oldp+886,((((((((((IData)(vlSelf->top__DOT__CU__DOT__sub) 
                                             | (IData)(vlSelf->top__DOT__CU__DOT__mul)) 
                                            | (IData)(vlSelf->top__DOT__CU__DOT__remw)) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__xori)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__beq)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__srliw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__srlw)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT___xor)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__csrrs))));
            tracep->chgBit(oldp+887,((((((((IData)(vlSelf->top__DOT__CU__DOT__sltiu) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__sltu)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__slli)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__bltu)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT__jalr)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__remu)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__sll))));
            tracep->chgBit(oldp+888,((((IData)(vlSelf->top__DOT__CU__DOT__srai) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__remuw)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__bgeu))));
            tracep->chgSData(oldp+889,(vlSelf->top__DOT__CU__DOT__func_signal),12);
            tracep->chgCData(oldp+890,(vlSelf->top__DOT__CU__DOT__ALU_inside_signal),6);
            tracep->chgCData(oldp+891,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+892,(vlSelf->top__DOT__CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+893,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+894,(vlSelf->top__DOT__CU__DOT__func_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+895,(vlSelf->top__DOT__CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
            tracep->chgCData(oldp+896,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
            tracep->chgBit(oldp+897,(vlSelf->top__DOT__CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+898,(vlSelf->top__DOT__alu__DOT__Adder_out),64);
            tracep->chgQData(oldp+900,(vlSelf->top__DOT__alu__DOT__Shift_out),64);
            tracep->chgQData(oldp+902,(vlSelf->top__DOT__alu__DOT__Compare_out),64);
            tracep->chgQData(oldp+904,(vlSelf->top__DOT__alu__DOT__DIV_out),64);
            tracep->chgQData(oldp+906,(vlSelf->top__DOT__alu__DOT__Logic_out),64);
            tracep->chgQData(oldp+908,(vlSelf->top__DOT__alu__DOT__MUL_out),64);
            tracep->chgQData(oldp+910,(((8U & (IData)(vlSelf->top__DOT__ALU_Inside_Control))
                                         ? 0ULL : (
                                                   (4U 
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
            tracep->chgQData(oldp+912,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__resultAdd),64);
            tracep->chgQData(oldp+914,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__resultSub),64);
            tracep->chgWData(oldp+916,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4),340);
            tracep->chgWData(oldp+927,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+930,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+933,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+936,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+939,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgCData(oldp+942,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+943,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+944,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+945,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+946,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
            tracep->chgQData(oldp+947,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+949,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+951,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+953,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+955,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+957,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+959,(vlSelf->top__DOT__alu__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+960,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__result),64);
            tracep->chgWData(oldp+962,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4),136);
            tracep->chgWData(oldp+967,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+970,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+973,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+974,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+975,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+977,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+979,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+981,(vlSelf->top__DOT__alu__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+982,((vlSelf->top__DOT__ALU_Number_1 
                                        & vlSelf->top__DOT__ALU_Number_2)),64);
            tracep->chgQData(oldp+984,((vlSelf->top__DOT__ALU_Number_1 
                                        ^ vlSelf->top__DOT__ALU_Number_2)),64);
            tracep->chgQData(oldp+986,((vlSelf->top__DOT__ALU_Number_1 
                                        | vlSelf->top__DOT__ALU_Number_2)),64);
            tracep->chgWData(oldp+988,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4),204);
            tracep->chgWData(oldp+995,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+998,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+1001,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgCData(oldp+1004,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1005,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1006,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgQData(oldp+1007,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1009,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1011,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1013,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1015,(vlSelf->top__DOT__alu__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1016,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer),64);
            tracep->chgQData(oldp+1018,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer1),64);
            tracep->chgQData(oldp+1020,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer2),64);
            tracep->chgQData(oldp+1022,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer3),64);
            tracep->chgQData(oldp+1024,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer4),64);
            tracep->chgQData(oldp+1026,(vlSelf->top__DOT__alu__DOT__ALU_Shift__DOT__buffer5),64);
            tracep->chgBit(oldp+1028,((vlSelf->top__DOT__ALU_Number_1 
                                       != vlSelf->top__DOT__ALU_Number_2)));
            tracep->chgBit(oldp+1029,((vlSelf->top__DOT__ALU_Number_1 
                                       == vlSelf->top__DOT__ALU_Number_2)));
            tracep->chgBit(oldp+1030,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ALU_Number_1, vlSelf->top__DOT__ALU_Number_2)));
            tracep->chgBit(oldp+1031,(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__ALU_Number_1, vlSelf->top__DOT__ALU_Number_2)));
            tracep->chgBit(oldp+1032,((vlSelf->top__DOT__ALU_Number_1 
                                       < vlSelf->top__DOT__ALU_Number_2)));
            tracep->chgBit(oldp+1033,((vlSelf->top__DOT__ALU_Number_1 
                                       >= vlSelf->top__DOT__ALU_Number_2)));
            tracep->chgIData(oldp+1034,((IData)(vlSelf->top__DOT__ALU_Number_1)),32);
            tracep->chgIData(oldp+1035,((IData)(vlSelf->top__DOT__ALU_Number_2)),32);
            tracep->chgIData(oldp+1036,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__divw),32);
            tracep->chgIData(oldp+1037,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__remw),32);
            tracep->chgQData(oldp+1038,(VL_DIV_QQQ(64, vlSelf->top__DOT__ALU_Number_1, vlSelf->top__DOT__ALU_Number_2)),64);
            tracep->chgIData(oldp+1040,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__divuw),32);
            tracep->chgQData(oldp+1041,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ALU_Number_1, vlSelf->top__DOT__ALU_Number_2)),64);
            tracep->chgIData(oldp+1043,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__remuw),32);
            tracep->chgWData(oldp+1044,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4),408);
            tracep->chgWData(oldp+1057,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+1060,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+1063,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+1066,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+1069,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+1072,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[5]),68);
            tracep->chgCData(oldp+1075,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1076,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1077,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+1078,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+1079,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+1080,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[5]),4);
            tracep->chgQData(oldp+1081,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1083,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1085,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1087,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1089,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1091,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1093,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1095,(vlSelf->top__DOT__alu__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1096,(vlSelf->top__DOT__alu__DOT____Vcellinp__Adder_mux____pinNumber4),612);
            tracep->chgWData(oldp+1116,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+1119,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+1122,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+1125,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+1128,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+1131,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+1134,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[6]),68);
            tracep->chgWData(oldp+1137,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[7]),68);
            tracep->chgWData(oldp+1140,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__pair_list[8]),68);
            tracep->chgCData(oldp+1143,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1144,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1145,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+1146,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+1147,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+1148,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+1149,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[6]),4);
            tracep->chgCData(oldp+1150,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[7]),4);
            tracep->chgCData(oldp+1151,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__key_list[8]),4);
            tracep->chgQData(oldp+1152,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1154,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1156,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1158,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1160,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1162,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1164,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+1166,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+1168,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+1170,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1172,(vlSelf->top__DOT__alu__DOT__Adder_mux__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+1173,(vlSelf->clk));
        tracep->chgBit(oldp+1174,(vlSelf->rst));
        tracep->chgQData(oldp+1175,(vlSelf->READ_DATA),64);
        tracep->chgBit(oldp+1177,(vlSelf->READ_FINISH));
        tracep->chgBit(oldp+1178,(vlSelf->READ_SIGNAL));
        tracep->chgQData(oldp+1179,(vlSelf->READ_ADDR),64);
        tracep->chgBit(oldp+1181,(vlSelf->ec_finish));
        tracep->chgQData(oldp+1182,(vlSelf->ex_data),64);
        tracep->chgBit(oldp+1184,(vlSelf->INSTR_ARRIVE));
        tracep->chgBit(oldp+1185,(vlSelf->INSTR_Complete));
        tracep->chgIData(oldp+1186,(vlSelf->INSTR_DATA),32);
        tracep->chgBit(oldp+1187,(((0x17U == (0x7fU 
                                              & vlSelf->INSTR_DATA)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->INSTR_DATA)))));
        tracep->chgBit(oldp+1188,((((((((((((((((((
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
        tracep->chgBit(oldp+1189,(((0x6fU == (0x7fU 
                                              & vlSelf->INSTR_DATA)) 
                                   | (IData)(vlSelf->top__DOT__CU__DOT__jalr))));
        tracep->chgCData(oldp+1190,((((IData)(vlSelf->top__DOT__CU__DOT__jalr) 
                                      << 1U) | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->INSTR_DATA)))),2);
        tracep->chgCData(oldp+1191,((0x1fU & (vlSelf->INSTR_DATA 
                                              >> 0xfU))),5);
        tracep->chgCData(oldp+1192,((0x1fU & (vlSelf->INSTR_DATA 
                                              >> 0x14U))),5);
        tracep->chgCData(oldp+1193,((0x1fU & (vlSelf->INSTR_DATA 
                                              >> 7U))),5);
        tracep->chgSData(oldp+1194,((vlSelf->INSTR_DATA 
                                     >> 0x14U)),12);
        tracep->chgIData(oldp+1195,((0xfffff000U & vlSelf->INSTR_DATA)),32);
        tracep->chgCData(oldp+1196,((0xffU & (- (IData)(
                                                        (0x100073U 
                                                         == vlSelf->INSTR_DATA))))),8);
        tracep->chgCData(oldp+1197,((0x7fU & vlSelf->INSTR_DATA)),7);
        tracep->chgCData(oldp+1198,((7U & (vlSelf->INSTR_DATA 
                                           >> 0xcU))),3);
        tracep->chgCData(oldp+1199,((vlSelf->INSTR_DATA 
                                     >> 0x19U)),7);
        tracep->chgCData(oldp+1200,((vlSelf->INSTR_DATA 
                                     >> 0x1aU)),6);
        tracep->chgBit(oldp+1201,((0x13U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1202,((0x3bU == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1203,((0x33U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1204,((0x1bU == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1205,((3U == (0x7fU & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1206,((0x23U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1207,((0x63U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1208,((0x6fU == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1209,((0x67U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1210,((0x17U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1211,((0x37U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1212,((0x73U == (0x7fU 
                                             & vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1213,((0U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1214,((4U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1215,((6U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1216,((3U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1217,((2U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1218,((5U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1219,((1U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1220,((7U == (7U & (vlSelf->INSTR_DATA 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+1221,((0U == (vlSelf->INSTR_DATA 
                                          >> 0x19U))));
        tracep->chgBit(oldp+1222,((1U == (vlSelf->INSTR_DATA 
                                          >> 0x19U))));
        tracep->chgBit(oldp+1223,((0U == (vlSelf->INSTR_DATA 
                                          >> 0x1aU))));
        tracep->chgBit(oldp+1224,((0x10U == (vlSelf->INSTR_DATA 
                                             >> 0x1aU))));
        tracep->chgBit(oldp+1225,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->INSTR_DATA))) 
                                   & (1U == (vlSelf->INSTR_DATA 
                                             >> 0x19U)))));
        tracep->chgBit(oldp+1226,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->INSTR_DATA))) 
                                   & (0U == (vlSelf->INSTR_DATA 
                                             >> 0x19U)))));
        tracep->chgBit(oldp+1227,((0x100073U == vlSelf->INSTR_DATA)));
        tracep->chgBit(oldp+1228,((0x73U == vlSelf->INSTR_DATA)));
        tracep->chgBit(oldp+1229,((0x30200073U == vlSelf->INSTR_DATA)));
        tracep->chgBit(oldp+1230,((((((((((((((((((
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
        tracep->chgBit(oldp+1231,(((0x17U == (0x7fU 
                                              & vlSelf->INSTR_DATA)) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->INSTR_DATA)))));
        tracep->chgBit(oldp+1232,((((((((((((((((((
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
        tracep->chgBit(oldp+1233,(((((IData)(vlSelf->top__DOT__CU__DOT__csrrw) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__csrrs)) 
                                    | (0x73U == vlSelf->INSTR_DATA)) 
                                   | (0x30200073U == vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1234,((((((((((((((((((
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
        tracep->chgBit(oldp+1235,(((((((((((IData)(vlSelf->top__DOT__CU__DOT__addiw) 
                                           | (IData)(vlSelf->top__DOT__CU__DOT__add)) 
                                          | (IData)(vlSelf->top__DOT__CU__DOT__sllw)) 
                                         | (IData)(vlSelf->top__DOT__CU__DOT__slliw)) 
                                        | (IData)(vlSelf->top__DOT__CU__DOT___or)) 
                                       | (IData)(vlSelf->top__DOT__CU__DOT__bge)) 
                                      | (IData)(vlSelf->top__DOT__CU__DOT__addw)) 
                                     | (IData)(vlSelf->top__DOT__CU__DOT__divu)) 
                                    | (IData)(vlSelf->top__DOT__CU__DOT__ori)) 
                                   | (0x73U == vlSelf->INSTR_DATA))));
        tracep->chgBit(oldp+1236,((((((((IData)(vlSelf->top__DOT__CU__DOT__subw) 
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
