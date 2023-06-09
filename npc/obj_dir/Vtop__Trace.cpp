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
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__PC_Wire),64);
            tracep->chgQData(oldp+50,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__HY_RegFile__DOT__Zero),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__HY_RegFile__DOT__ra),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__HY_RegFile__DOT__sp),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__HY_RegFile__DOT__gp),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__HY_RegFile__DOT__tp),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__HY_RegFile__DOT__t0),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__HY_RegFile__DOT__t1),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__HY_RegFile__DOT__t2),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__HY_RegFile__DOT__s0),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__HY_RegFile__DOT__s1),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__HY_RegFile__DOT__a0),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__HY_RegFile__DOT__a1),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__HY_RegFile__DOT__a2),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__HY_RegFile__DOT__a3),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__HY_RegFile__DOT__a4),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__HY_RegFile__DOT__a5),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__HY_RegFile__DOT__a6),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__HY_RegFile__DOT__a7),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__HY_RegFile__DOT__s2),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__HY_RegFile__DOT__s3),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__HY_RegFile__DOT__s4),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__HY_RegFile__DOT__s5),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__HY_RegFile__DOT__s6),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__HY_RegFile__DOT__s7),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__HY_RegFile__DOT__s8),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__HY_RegFile__DOT__s9),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__HY_RegFile__DOT__s10),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__HY_RegFile__DOT__s11),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__HY_RegFile__DOT__t3),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__HY_RegFile__DOT__t4),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__HY_RegFile__DOT__t5),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__HY_RegFile__DOT__t6),64);
            tracep->chgWData(oldp+116,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
            tracep->chgWData(oldp+185,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+188,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+191,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+194,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+197,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+200,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+203,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+206,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+209,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+212,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+215,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+218,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+221,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+224,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+227,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+230,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+233,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+236,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+239,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+242,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+245,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+248,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+251,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+254,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+257,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+260,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+263,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+266,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+269,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+272,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+275,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+278,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+281,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+282,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+283,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+284,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+285,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+286,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+287,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+288,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+289,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+290,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+291,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+292,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+293,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+294,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+295,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+296,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+297,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+298,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+299,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+300,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+301,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+302,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+303,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+304,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+305,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+306,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+307,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+308,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+309,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+310,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+311,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+312,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+331,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+333,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+335,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+337,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+339,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+341,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+343,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+345,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+347,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+349,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+351,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+353,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+355,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+357,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+359,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+361,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+363,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+365,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+367,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+369,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+371,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+373,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+375,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
            tracep->chgWData(oldp+377,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
            tracep->chgWData(oldp+446,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+449,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+452,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+455,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+458,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+461,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+464,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+467,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+470,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+473,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+476,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+479,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+482,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+485,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+488,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+491,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+494,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+497,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+500,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+503,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+506,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+509,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+512,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+515,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+518,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+521,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+524,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+527,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+530,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+533,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+536,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+539,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+542,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+543,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+544,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+545,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+546,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+547,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+548,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+549,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+550,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+551,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+552,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+553,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+554,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+555,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+556,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+557,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+558,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+559,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+560,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+561,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+562,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+563,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+564,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+565,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+566,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+567,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+568,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+569,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+570,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+571,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+572,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+573,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+574,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+576,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+578,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+580,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+582,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+584,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+586,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+588,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+590,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+592,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+594,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+596,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+598,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+600,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+602,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+604,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+606,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+608,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+610,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+612,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+614,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+616,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+618,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+620,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+622,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+624,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+626,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+628,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+630,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+632,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+634,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+636,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+638,(vlSelf->top__DOT__SEXT_Control),3);
            tracep->chgCData(oldp+639,(vlSelf->top__DOT__ALU_Control_wire),4);
            tracep->chgBit(oldp+640,(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
            tracep->chgBit(oldp+641,(vlSelf->top__DOT__HY_CU__DOT__addi));
            tracep->chgBit(oldp+642,(vlSelf->top__DOT__HY_CU__DOT__addiw));
            tracep->chgBit(oldp+643,(vlSelf->top__DOT__HY_CU__DOT__addw));
            tracep->chgBit(oldp+644,(vlSelf->top__DOT__HY_CU__DOT__subw));
            tracep->chgBit(oldp+645,(vlSelf->top__DOT__HY_CU__DOT__add));
            tracep->chgBit(oldp+646,(vlSelf->top__DOT__HY_CU__DOT__sub));
            tracep->chgBit(oldp+647,(vlSelf->top__DOT__HY_CU__DOT__mulw));
            tracep->chgBit(oldp+648,(vlSelf->top__DOT__HY_CU__DOT__divw));
            tracep->chgBit(oldp+649,(vlSelf->top__DOT__HY_CU__DOT__mul));
            tracep->chgBit(oldp+650,(vlSelf->top__DOT__HY_CU__DOT__remw));
            tracep->chgBit(oldp+651,(vlSelf->top__DOT__HY_CU__DOT__sltiu));
            tracep->chgBit(oldp+652,(vlSelf->top__DOT__HY_CU__DOT__sltu));
            tracep->chgBit(oldp+653,(vlSelf->top__DOT__HY_CU__DOT__slt));
            tracep->chgBit(oldp+654,(vlSelf->top__DOT__HY_CU__DOT__sraw));
            tracep->chgBit(oldp+655,(vlSelf->top__DOT__HY_CU__DOT__sllw));
            tracep->chgBit(oldp+656,(vlSelf->top__DOT__HY_CU__DOT__srlw));
            tracep->chgBit(oldp+657,(vlSelf->top__DOT__HY_CU__DOT__slli));
            tracep->chgBit(oldp+658,(vlSelf->top__DOT__HY_CU__DOT__srli));
            tracep->chgBit(oldp+659,(vlSelf->top__DOT__HY_CU__DOT__srai));
            tracep->chgBit(oldp+660,(vlSelf->top__DOT__HY_CU__DOT__srliw));
            tracep->chgBit(oldp+661,(vlSelf->top__DOT__HY_CU__DOT__slliw));
            tracep->chgBit(oldp+662,(vlSelf->top__DOT__HY_CU__DOT__sraiw));
            tracep->chgBit(oldp+663,(vlSelf->top__DOT__HY_CU__DOT__ld));
            tracep->chgBit(oldp+664,(vlSelf->top__DOT__HY_CU__DOT__lw));
            tracep->chgBit(oldp+665,(vlSelf->top__DOT__HY_CU__DOT__lbu));
            tracep->chgBit(oldp+666,(vlSelf->top__DOT__HY_CU__DOT__lh));
            tracep->chgBit(oldp+667,(vlSelf->top__DOT__HY_CU__DOT__lhu));
            tracep->chgBit(oldp+668,(vlSelf->top__DOT__HY_CU__DOT__sd));
            tracep->chgBit(oldp+669,(vlSelf->top__DOT__HY_CU__DOT__sw));
            tracep->chgBit(oldp+670,(vlSelf->top__DOT__HY_CU__DOT__sb));
            tracep->chgBit(oldp+671,(vlSelf->top__DOT__HY_CU__DOT__sh));
            tracep->chgBit(oldp+672,(vlSelf->top__DOT__HY_CU__DOT__andi));
            tracep->chgBit(oldp+673,(vlSelf->top__DOT__HY_CU__DOT__xori));
            tracep->chgBit(oldp+674,(vlSelf->top__DOT__HY_CU__DOT__bne));
            tracep->chgBit(oldp+675,(vlSelf->top__DOT__HY_CU__DOT__beq));
            tracep->chgBit(oldp+676,(vlSelf->top__DOT__HY_CU__DOT__bge));
            tracep->chgBit(oldp+677,(vlSelf->top__DOT__HY_CU__DOT__blt));
            tracep->chgBit(oldp+678,(vlSelf->top__DOT__HY_CU__DOT__bltu));
            tracep->chgBit(oldp+679,(vlSelf->top__DOT__HY_CU__DOT__jalr));
            tracep->chgBit(oldp+680,(((((((((((((((
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
            tracep->chgBit(oldp+681,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
            tracep->chgBit(oldp+682,((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu))));
            tracep->chgBit(oldp+683,((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addw) 
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
            tracep->chgBit(oldp+684,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub))));
            tracep->chgBit(oldp+685,(((IData)(vlSelf->top__DOT__HY_CU__DOT__mulw) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul))));
            tracep->chgBit(oldp+686,(((IData)(vlSelf->top__DOT__HY_CU__DOT__divw) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw))));
            tracep->chgBit(oldp+687,((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt))));
            tracep->chgBit(oldp+688,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sraw) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw))));
            tracep->chgBit(oldp+689,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
            tracep->chgBit(oldp+690,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__andi) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT___and))));
            tracep->chgSData(oldp+691,(vlSelf->top__DOT__HY_CU__DOT__func_signal),11);
            tracep->chgCData(oldp+692,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+693,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+694,(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
            tracep->chgCData(oldp+695,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
            tracep->chgBit(oldp+696,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
            tracep->chgSData(oldp+697,(vlSelf->top__DOT__Sign_Extend__DOT__immS),12);
            tracep->chgIData(oldp+698,(vlSelf->top__DOT__Sign_Extend__DOT__immJ),21);
            tracep->chgSData(oldp+699,(vlSelf->top__DOT__Sign_Extend__DOT__immB),13);
            tracep->chgWData(oldp+700,(vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4),335);
            tracep->chgWData(oldp+711,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+714,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+717,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+720,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+723,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+726,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+727,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+728,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+729,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+730,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+731,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+733,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+735,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+737,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+739,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+741,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+743,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+744,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+746,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+747,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+749,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+750,(vlSelf->clk));
        tracep->chgBit(oldp+751,(vlSelf->rst));
        tracep->chgIData(oldp+752,(vlSelf->instr_in),32);
        tracep->chgQData(oldp+753,(vlSelf->SEXT_result),64);
        tracep->chgQData(oldp+755,(vlSelf->PC_Test),64);
        tracep->chgCData(oldp+757,(vlSelf->SEXT_Control_out),3);
        tracep->chgQData(oldp+758,(vlSelf->RS1_OUTPUT),64);
        tracep->chgQData(oldp+760,(vlSelf->RS2_OUTPUT),64);
        tracep->chgCData(oldp+762,((0x7fU & vlSelf->instr_in)),7);
        tracep->chgCData(oldp+763,((7U & (vlSelf->instr_in 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+764,((vlSelf->instr_in 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+765,((vlSelf->instr_in 
                                    >> 0x1aU)),6);
        tracep->chgBit(oldp+766,((0x13U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+767,((0x3bU == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+768,((0x33U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+769,((0x1bU == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+770,((3U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+771,((0x23U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+772,((0x63U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+773,((0x6fU == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+774,((0x67U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+775,((0x17U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+776,((0x37U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+777,((0x73U == (0x7fU & vlSelf->instr_in))));
        tracep->chgBit(oldp+778,((0U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+779,((4U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+780,((6U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+781,((3U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+782,((2U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+783,((5U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+784,((1U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+785,((7U == (7U & (vlSelf->instr_in 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+786,((0U == (vlSelf->instr_in 
                                         >> 0x19U))));
        tracep->chgBit(oldp+787,((1U == (vlSelf->instr_in 
                                         >> 0x19U))));
        tracep->chgBit(oldp+788,((0U == (vlSelf->instr_in 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+789,((0x10U == (vlSelf->instr_in 
                                            >> 0x1aU))));
        tracep->chgBit(oldp+790,((0x100073U == vlSelf->instr_in)));
        tracep->chgBit(oldp+791,(((0x17U == (0x7fU 
                                             & vlSelf->instr_in)) 
                                  | (0x37U == (0x7fU 
                                               & vlSelf->instr_in)))));
        tracep->chgBit(oldp+792,(((0x6fU == (0x7fU 
                                             & vlSelf->instr_in)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->chgSData(oldp+793,((vlSelf->instr_in 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+794,((0xfffff000U & vlSelf->instr_in)),32);
        tracep->chgCData(oldp+795,((0x1fU & (vlSelf->instr_in 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+796,((0x1fU & (vlSelf->instr_in 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+797,((0x1fU & (vlSelf->instr_in 
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
