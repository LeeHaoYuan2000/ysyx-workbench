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
    VL_OUT8(SEXT_Control_out,2,0);
    VL_OUT8(WriteBack_Enable_result,0,0);
    VL_OUT8(C_RS1_PC_Connector_result,0,0);
    VL_OUT8(C_RS2_imm_Connector_result,0,0);
    VL_OUT8(C_ALU_MEM_Connector_result,0,0);
    VL_OUT8(C_ALU_NPC_In_Connector_result,0,0);
    VL_OUT8(C_NPC_Branch_Jump_Connector_result,1,0);
    VL_IN(instr_in,31,0);
    VL_OUT64(SEXT_result,63,0);
    VL_OUT64(PC_Test,63,0);
    VL_OUT64(RS1_OUTPUT,63,0);
    VL_OUT64(RS2_OUTPUT,63,0);
    VL_OUT64(ALU_Result,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*2:0*/ top__DOT__SEXT_Control;
        CData/*3:0*/ top__DOT__ALU_Control_wire;
        CData/*0:0*/ top__DOT__WriteBack_Enable;
        CData/*1:0*/ top__DOT__C_NPC_Branch_Jump_Connector;
        CData/*3:0*/ top__DOT__Insider_Control_Connector;
        CData/*0:0*/ top__DOT__HY_CU__DOT__Match_31_25_0100000;
        CData/*0:0*/ top__DOT__HY_CU__DOT__addi;
        CData/*0:0*/ top__DOT__HY_CU__DOT__addiw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__addw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__subw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__add;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sub;
        CData/*0:0*/ top__DOT__HY_CU__DOT__mulw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__divw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__mul;
        CData/*0:0*/ top__DOT__HY_CU__DOT__remw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sltiu;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sltu;
        CData/*0:0*/ top__DOT__HY_CU__DOT__slt;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sraw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sllw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__srlw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__slli;
        CData/*0:0*/ top__DOT__HY_CU__DOT__srli;
        CData/*0:0*/ top__DOT__HY_CU__DOT__srai;
        CData/*0:0*/ top__DOT__HY_CU__DOT__srliw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__slliw;
        CData/*0:0*/ top__DOT__HY_CU__DOT__sraiw;
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
        CData/*0:0*/ top__DOT__HY_CU__DOT___or;
        CData/*0:0*/ top__DOT__HY_CU__DOT___and;
        CData/*0:0*/ top__DOT__HY_CU__DOT__bne;
        CData/*0:0*/ top__DOT__HY_CU__DOT__beq;
        CData/*0:0*/ top__DOT__HY_CU__DOT__bge;
        CData/*0:0*/ top__DOT__HY_CU__DOT__blt;
        CData/*0:0*/ top__DOT__HY_CU__DOT__bltu;
        CData/*0:0*/ top__DOT__HY_CU__DOT__jalr;
        CData/*0:0*/ top__DOT__HY_CU__DOT__ALU_Choose_imm;
        CData/*0:0*/ top__DOT__HY_CU__DOT__ALU_Choose_PC;
        CData/*5:0*/ top__DOT__HY_CU__DOT__ALU_inside_signal;
        CData/*3:0*/ top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit;
        CData/*3:0*/ top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit;
        CData/*2:0*/ top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit;
    };
    struct {
        CData/*0:0*/ top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit;
        SData/*10:0*/ top__DOT__HY_CU__DOT__func_signal;
        SData/*11:0*/ top__DOT__Sign_Extend__DOT__immS;
        SData/*12:0*/ top__DOT__Sign_Extend__DOT__immB;
        IData/*20:0*/ top__DOT__Sign_Extend__DOT__immJ;
        IData/*31:0*/ top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw;
        IData/*31:0*/ top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw;
        QData/*63:0*/ top__DOT__PC_Wire;
        QData/*63:0*/ top__DOT__PC_Next_Wire;
        QData/*63:0*/ top__DOT__SEXT_Connector;
        QData/*63:0*/ top__DOT__RS1_Connector;
        QData/*63:0*/ top__DOT__RS2_Connector;
        QData/*63:0*/ top__DOT__MUX_Reg_PC_2ALU_Result;
        QData/*63:0*/ top__DOT__MUX_Reg_imm_2ALU_Result;
        QData/*63:0*/ top__DOT__ALU_Result_Connector;
        QData/*63:0*/ top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__Zero;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__ra;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__sp;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__gp;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__tp;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__t0;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__t1;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__t2;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s0;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s1;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__a0;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__a1;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__a2;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__a3;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__a4;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__a5;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__a6;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__a7;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s2;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s3;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s4;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s5;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s6;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s7;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s8;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s9;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s10;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__s11;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__t3;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__t4;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__t5;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__t6;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__Adder_out;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__Shift_out;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__Compare_out;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__DIV_out;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__Logic_out;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__MUL_out;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out;
    };
    struct {
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out;
        VlUnpacked<SData/*9:0*/, 6> top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*5:0*/, 6> top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 6> top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*14:0*/, 11> top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*10:0*/, 11> top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 11> top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 5> top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 5> top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 5> top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 5> top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*68:0*/, 32> top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 32> top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*68:0*/, 32> top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 32> top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*64:0*/, 2> top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*64:0*/, 2> top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 5> top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 5> top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 2> top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 3> top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 2> top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 8> top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 8> top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 8> top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*4:0*/ top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<5>/*129:0*/ top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4;
    VlWide<5>/*129:0*/ top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4;
    VlWide<11>/*334:0*/ top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4;
    VlWide<69>/*2207:0*/ top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4;
    VlWide<69>/*2207:0*/ top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4;
    VlWide<17>/*543:0*/ top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4;
    VlWide<11>/*339:0*/ top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4;
    VlWide<5>/*135:0*/ top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4;
    VlWide<7>/*203:0*/ top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4;
    VlWide<5>/*135:0*/ top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4;
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
