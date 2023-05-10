// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(instr,31,0);
    VL_OUT64(fetchAddr,63,0);
    VL_OUT64(outresult,63,0);
    VL_OUT64(rs2data,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__hit;
    QData/*63:0*/ top__DOT__outCome;
    QData/*63:0*/ top__DOT__line2CU;
    QData/*63:0*/ top__DOT__rs1data;
    QData/*63:0*/ top__DOT__out;
    QData/*63:0*/ top__DOT__addiPC__DOT__pc2adder;
    QData/*63:0*/ top__DOT__addiPC__DOT__adderData;
    QData/*63:0*/ top__DOT__CSR__DOT__ra;
    QData/*63:0*/ top__DOT__CSR__DOT__sp;
    QData/*63:0*/ top__DOT__CSR__DOT__gp;
    QData/*63:0*/ top__DOT__CSR__DOT__tp;
    QData/*63:0*/ top__DOT__CSR__DOT__t0;
    QData/*63:0*/ top__DOT__CSR__DOT__t1;
    QData/*63:0*/ top__DOT__CSR__DOT__t2;
    QData/*63:0*/ top__DOT__CSR__DOT__s0;
    QData/*63:0*/ top__DOT__CSR__DOT__s1;
    QData/*63:0*/ top__DOT__CSR__DOT__a0;
    QData/*63:0*/ top__DOT__CSR__DOT__a1;
    QData/*63:0*/ top__DOT__CSR__DOT__a2;
    QData/*63:0*/ top__DOT__CSR__DOT__a3;
    QData/*63:0*/ top__DOT__CSR__DOT__a4;
    QData/*63:0*/ top__DOT__CSR__DOT__a5;
    QData/*63:0*/ top__DOT__CSR__DOT__a6;
    QData/*63:0*/ top__DOT__CSR__DOT__a7;
    QData/*63:0*/ top__DOT__CSR__DOT__s2;
    QData/*63:0*/ top__DOT__CSR__DOT__s3;
    QData/*63:0*/ top__DOT__CSR__DOT__s4;
    QData/*63:0*/ top__DOT__CSR__DOT__s5;
    QData/*63:0*/ top__DOT__CSR__DOT__s6;
    QData/*63:0*/ top__DOT__CSR__DOT__s7;
    QData/*63:0*/ top__DOT__CSR__DOT__s8;
    QData/*63:0*/ top__DOT__CSR__DOT__s9;
    QData/*63:0*/ top__DOT__CSR__DOT__s10;
    QData/*63:0*/ top__DOT__CSR__DOT__s11;
    QData/*63:0*/ top__DOT__CSR__DOT__t3;
    QData/*63:0*/ top__DOT__CSR__DOT__t4;
    QData/*63:0*/ top__DOT__CSR__DOT__t5;
    QData/*63:0*/ top__DOT__CSR__DOT__t6;
    QData/*63:0*/ top__DOT__CSR__DOT__number;
    QData/*63:0*/ top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__signextension__DOT___SEXTout;
    VlUnpacked<VlWide<3>/*68:0*/, 32> top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*4:0*/, 32> top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__CSR__DOT__mux2rs1__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*68:0*/, 32> top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*4:0*/, 32> top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__CSR__DOT__mux2rs2__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<69>/*2207:0*/ top__DOT__CSR__DOT____Vcellinp__mux2rs1____pinNumber3;
    VlWide<69>/*2207:0*/ top__DOT__CSR__DOT____Vcellinp__mux2rs2____pinNumber3;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
