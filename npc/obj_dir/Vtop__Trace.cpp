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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__line2CU),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__rs1data),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__signextension__DOT___SEXTout),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__out),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__addiPC__DOT__pc2adder),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__CSR__DOT__ra),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__CSR__DOT__sp),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__CSR__DOT__gp),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__CSR__DOT__tp),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__CSR__DOT__t0),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__CSR__DOT__t1),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__CSR__DOT__t2),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__CSR__DOT__s0),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__CSR__DOT__s1),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__CSR__DOT__a0),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__CSR__DOT__a1),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__CSR__DOT__a2),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__CSR__DOT__a3),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__CSR__DOT__a4),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__CSR__DOT__a5),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__CSR__DOT__a6),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__CSR__DOT__a7),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__CSR__DOT__s2),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__CSR__DOT__s3),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__CSR__DOT__s4),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__CSR__DOT__s5),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__CSR__DOT__s6),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__CSR__DOT__s7),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__CSR__DOT__s8),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__CSR__DOT__s9),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__CSR__DOT__s10),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__CSR__DOT__s11),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__CSR__DOT__t3),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__CSR__DOT__t4),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__CSR__DOT__t5),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__CSR__DOT__t6),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__CSR__DOT__number),64);
            tracep->chgWData(oldp+80,(vlSelf->top__DOT__CSR__DOT____Vcellinp__mux2rs1____pinNumber3),2208);
            tracep->chgWData(oldp+149,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+152,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+155,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+158,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+161,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+164,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+167,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+170,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+173,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+176,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+179,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+182,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+185,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+188,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+191,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+194,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+197,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+200,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+203,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+206,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+209,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+212,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+215,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+218,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+221,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+224,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+227,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+230,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+233,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+236,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+239,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+242,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+245,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+246,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+247,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+248,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+249,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+250,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+251,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+252,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+253,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+254,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+255,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+256,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+257,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+258,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+259,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+260,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+261,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+262,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+263,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+264,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+265,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+266,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+267,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+268,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+269,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+270,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+271,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+272,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+273,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+274,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+275,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+276,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+331,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+333,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+335,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+337,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+339,(vlSelf->top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list[31]),64);
            tracep->chgWData(oldp+341,(vlSelf->top__DOT__CSR__DOT____Vcellinp__mux2rs2____pinNumber3),2208);
            tracep->chgWData(oldp+410,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+413,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+416,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+419,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+422,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+425,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+428,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+431,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+434,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+437,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+440,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+443,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+446,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+449,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+452,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+455,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+458,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+461,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+464,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+467,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+470,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+473,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+476,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+479,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+482,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+485,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+488,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+491,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+494,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+497,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+500,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgWData(oldp+503,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list[31]),69);
            tracep->chgCData(oldp+506,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+507,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+508,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+509,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+510,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+511,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+512,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+513,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+514,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+515,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+516,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+517,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+518,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+519,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+520,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+521,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+522,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+523,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+524,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+525,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+526,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+527,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+528,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+529,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+530,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+531,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+532,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+533,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+534,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+535,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+536,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[30]),5);
            tracep->chgCData(oldp+537,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list[31]),5);
            tracep->chgQData(oldp+538,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+540,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+546,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+548,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+550,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+554,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+556,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+558,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+560,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+562,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+564,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+566,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+568,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+570,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+572,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+574,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+576,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+578,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+580,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+582,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+584,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+586,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+588,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+590,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+592,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+594,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+596,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+598,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+600,(vlSelf->top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list[31]),64);
        }
        tracep->chgBit(oldp+602,(vlSelf->clk));
        tracep->chgBit(oldp+603,(vlSelf->rst));
        tracep->chgIData(oldp+604,(vlSelf->instr),32);
        tracep->chgQData(oldp+605,(vlSelf->fetchAddr),64);
        tracep->chgQData(oldp+607,(vlSelf->outresult),64);
        tracep->chgQData(oldp+609,(vlSelf->rs2data),64);
        tracep->chgCData(oldp+611,((0x1fU & (vlSelf->instr 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+612,((0x1fU & (vlSelf->instr 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+613,((0x1fU & (vlSelf->instr 
                                             >> 7U))),5);
        tracep->chgQData(oldp+614,(((IData)(vlSelf->rst)
                                     ? 0x80000000ULL
                                     : (4ULL + vlSelf->top__DOT__addiPC__DOT__pc2adder))),64);
        tracep->chgSData(oldp+616,((vlSelf->instr >> 0x14U)),12);
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
