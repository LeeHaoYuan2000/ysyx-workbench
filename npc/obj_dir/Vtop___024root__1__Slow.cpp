// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024unit____Vdpiimwrap_check_ebreak__Vdpioc2_TOP____024unit(const CData/*7:0*/ &ebreak_reg);
void Vtop___024unit____Vdpiimwrap_set_gpr_zero__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_ra__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_sp__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_gp__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_tp__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_t0__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_t1__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_t2__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s0__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s1__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_a0__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_a1__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_a2__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_a3__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_a4__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_a5__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_a6__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_a7__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s2__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s3__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s4__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s5__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s6__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s7__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s8__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s9__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s10__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_s11__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_t3__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_t4__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_t5__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);
void Vtop___024unit____Vdpiimwrap_set_gpr_t6__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr);

void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Body
    Vtop___024unit____Vdpiimwrap_check_ebreak__Vdpioc2_TOP____024unit(
                                                                      (0xffU 
                                                                       & (- (IData)(
                                                                                (0x100073U 
                                                                                == vlSelf->instr_in)))));
    Vtop___024unit____Vdpiimwrap_set_gpr_zero__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__Zero);
    Vtop___024unit____Vdpiimwrap_set_gpr_ra__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__ra);
    Vtop___024unit____Vdpiimwrap_set_gpr_sp__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__sp);
    Vtop___024unit____Vdpiimwrap_set_gpr_gp__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__gp);
    Vtop___024unit____Vdpiimwrap_set_gpr_tp__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__tp);
    Vtop___024unit____Vdpiimwrap_set_gpr_t0__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__t0);
    Vtop___024unit____Vdpiimwrap_set_gpr_t1__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__t1);
    Vtop___024unit____Vdpiimwrap_set_gpr_t2__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__t2);
    Vtop___024unit____Vdpiimwrap_set_gpr_s0__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s0);
    Vtop___024unit____Vdpiimwrap_set_gpr_s1__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s1);
    Vtop___024unit____Vdpiimwrap_set_gpr_a0__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__a0);
    Vtop___024unit____Vdpiimwrap_set_gpr_a1__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__a1);
    Vtop___024unit____Vdpiimwrap_set_gpr_a2__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__a2);
    Vtop___024unit____Vdpiimwrap_set_gpr_a3__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__a3);
    Vtop___024unit____Vdpiimwrap_set_gpr_a4__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__a4);
    Vtop___024unit____Vdpiimwrap_set_gpr_a5__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__a5);
    Vtop___024unit____Vdpiimwrap_set_gpr_a6__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__a6);
    Vtop___024unit____Vdpiimwrap_set_gpr_a7__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__a7);
    Vtop___024unit____Vdpiimwrap_set_gpr_s2__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s2);
    Vtop___024unit____Vdpiimwrap_set_gpr_s3__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s3);
    Vtop___024unit____Vdpiimwrap_set_gpr_s4__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s4);
    Vtop___024unit____Vdpiimwrap_set_gpr_s5__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s5);
    Vtop___024unit____Vdpiimwrap_set_gpr_s6__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s6);
    Vtop___024unit____Vdpiimwrap_set_gpr_s7__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s7);
    Vtop___024unit____Vdpiimwrap_set_gpr_s8__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s8);
    Vtop___024unit____Vdpiimwrap_set_gpr_s9__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s9);
    Vtop___024unit____Vdpiimwrap_set_gpr_s10__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s10);
    Vtop___024unit____Vdpiimwrap_set_gpr_s11__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__s11);
    Vtop___024unit____Vdpiimwrap_set_gpr_t3__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__t3);
    Vtop___024unit____Vdpiimwrap_set_gpr_t4__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__t4);
    Vtop___024unit____Vdpiimwrap_set_gpr_t5__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__t5);
    Vtop___024unit____Vdpiimwrap_set_gpr_t6__Vdpioc2_TOP____024unit(vlSelf->top__DOT__HY_RegFile__DOT__t6);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) VL_ATTR_COLD;

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instr_in = VL_RAND_RESET_I(32);
    vlSelf->SEXT_result = VL_RAND_RESET_Q(64);
    vlSelf->PC_Test = VL_RAND_RESET_Q(64);
    vlSelf->SEXT_Control_out = VL_RAND_RESET_I(3);
    vlSelf->RS1_OUTPUT = VL_RAND_RESET_Q(64);
    vlSelf->RS2_OUTPUT = VL_RAND_RESET_Q(64);
    vlSelf->ALU_Result = VL_RAND_RESET_Q(64);
    vlSelf->MEM_Enable = VL_RAND_RESET_I(1);
    vlSelf->MEM_Read = VL_RAND_RESET_I(1);
    vlSelf->MEM_DataLenth = VL_RAND_RESET_I(4);
    vlSelf->MEM_Addr = VL_RAND_RESET_Q(64);
    vlSelf->MEM_Dataoutput = VL_RAND_RESET_Q(64);
    vlSelf->MEM_Datainput = VL_RAND_RESET_Q(64);
    vlSelf->WriteBack_Enable_result = VL_RAND_RESET_I(1);
    vlSelf->C_RS1_PC_Connector_result = VL_RAND_RESET_I(1);
    vlSelf->C_RS2_imm_Connector_result = VL_RAND_RESET_I(1);
    vlSelf->C_ALU_MEM_Connector_result = VL_RAND_RESET_I(1);
    vlSelf->C_ALU_NPC_In_Connector_result = VL_RAND_RESET_I(1);
    vlSelf->C_NPC_Branch_Jump_Connector_result = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__PC_Wire = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__PC_Next_Next = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__SEXT_Control = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ALU_Control_wire = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__SEXT_Connector = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RS1_Connector = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RS2_Connector = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MUX_ALU_MEM_Result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MEM_Enable_Connector = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM_Ctrl_connector = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__WriteBack_Enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__C_ALU_MEM_Connector = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__C_ALU_NPC_In_Connector = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__C_NPC_Branch_Jump_Connector = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(130, vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4);
    VL_RAND_RESET_W(130, vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4);
    vlSelf->top__DOT__MEM_Result_Connector = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__Write_Back_Reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(130, vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4);
    VL_RAND_RESET_W(130, vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4);
    VL_RAND_RESET_W(198, vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4);
    vlSelf->top__DOT__ALU_Result_Connector = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__Insider_Control_Connector = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__addiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__addw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__subw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__mulw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__divu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__divuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__remw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__remu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__remuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sraw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sllw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__srlw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__srliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__slliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sraiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT___or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT___and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT___xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__func_signal = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Sign_Extend__DOT__immS = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__Sign_Extend__DOT__immJ = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__Sign_Extend__DOT__immB = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(335, vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_RegFile__DOT__Zero = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__ra = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__sp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__gp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__tp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__t0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__t1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__t2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__a0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__a1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__a2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__a3 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__a4 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__a5 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__a6 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__a7 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s3 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s4 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s5 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s6 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s7 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s8 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s9 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s10 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__s11 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__t3 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__t4 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__t5 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__t6 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2208, vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4);
    VL_RAND_RESET_W(2208, vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(69, vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(69, vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(544, vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(340, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(136, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(204, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divuw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remuw = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(408, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
