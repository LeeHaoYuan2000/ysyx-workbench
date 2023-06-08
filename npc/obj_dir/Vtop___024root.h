// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN(instr_in,31,0);
    VL_OUT64(SEXT_result,63,0);
    VL_OUT64(PC_Test,63,0);
    VL_IN8(rst,0,0);
    VL_IN8(clk,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VlUnpacked<CData/*4:0*/, 5> top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 5> top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list;
        QData/*63:0*/ top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out;
        CData/*2:0*/ top__DOT__SEXT_Control;
        CData/*2:0*/ top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit;
        VlUnpacked<CData/*2:0*/, 5> top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 5> top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list;
        IData/*20:0*/ top__DOT__Sign_Extend__DOT__immJ;
        SData/*11:0*/ top__DOT__Sign_Extend__DOT__immS;
        SData/*12:0*/ top__DOT__Sign_Extend__DOT__immB;
        QData/*63:0*/ top__DOT__PC_Wire;
        QData/*63:0*/ top__DOT__PC_Next_Wire;
        SData/*10:0*/ top__DOT__HY_CU__DOT__func_signal;
        VlUnpacked<SData/*10:0*/, 11> top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 11> top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list;
        CData/*3:0*/ top__DOT__ALU_Control_wire;
        CData/*3:0*/ top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__HY_CU__DOT__Match_31_25_0100000;
        CData/*0:0*/ top__DOT__HY_CU__DOT__addw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__subw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__add;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sub;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sraw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sltiu;
        CData/*0:0*/ top__DOT__HY_CU__DOT__slli;
        CData/*0:0*/ top__DOT__HY_CU__DOT__ld;
        CData/*0:0*/ top__DOT__HY_CU__DOT__lw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__lbu;
        CData/*0:0*/ top__DOT__HY_CU__DOT__lh;
        CData/*0:0*/ top__DOT__HY_CU__DOT__lhu;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sd;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sb;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sh;
        CData/*0:0*/ top__DOT__HY_CU__DOT__andi;
        CData/*0:0*/ top__DOT__HY_CU__DOT__xori;
        CData/*0:0*/ top__DOT__HY_CU__DOT__bne;
        CData/*0:0*/ top__DOT__HY_CU__DOT__beq;
        CData/*0:0*/ top__DOT__HY_CU__DOT__bge;
        CData/*0:0*/ top__DOT__HY_CU__DOT__blt;
        CData/*0:0*/ top__DOT__HY_CU__DOT__bltu;
        CData/*0:0*/ top__DOT__HY_CU__DOT__jalr;
        CData/*0:0*/ top__DOT__HY_CU__DOT__addi;
        CData/*0:0*/ top__DOT__HY_CU__DOT__addiw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__srliw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__slliw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sraiw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__srli;
        CData/*0:0*/ top__DOT__HY_CU__DOT__srai;
        CData/*0:0*/ top__DOT__HY_CU__DOT___or;
        CData/*0:0*/ top__DOT__HY_CU__DOT___and;
        VlUnpacked<SData/*14:0*/, 11> top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 5> top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list;
        CData/*0:0*/ top__DOT__HY_CU__DOT__mulw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__divw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__mul;
        CData/*0:0*/ top__DOT__HY_CU__DOT__remw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sltu;
        CData/*0:0*/ top__DOT__HY_CU__DOT__slt;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sllw;
    };
    struct {
        CData/*0:0*/ top__DOT__HY_CU__DOT__srlw;
    };

    // LOCAL VARIABLES
    VlWide<11>/*334:0*/ top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4;
    VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*4:0*/ top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2;
    VlMTaskVertex __Vm_mtaskstate_9;
    VlMTaskVertex __Vm_mtaskstate_final;

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
