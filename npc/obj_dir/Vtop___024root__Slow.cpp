// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

extern const VlUnpacked<QData/*63:0*/, 512> Vtop__ConstPool__TABLE_58ebbdf7_0;
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    SData/*8:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<63>/*2015:0*/ __Vtemp59;
    VlWide<65>/*2079:0*/ __Vtemp60;
    VlWide<65>/*2079:0*/ __Vtemp61;
    VlWide<67>/*2143:0*/ __Vtemp62;
    VlWide<69>/*2207:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<63>/*2015:0*/ __Vtemp122;
    VlWide<65>/*2079:0*/ __Vtemp123;
    VlWide<65>/*2079:0*/ __Vtemp124;
    VlWide<67>/*2143:0*/ __Vtemp125;
    VlWide<69>/*2207:0*/ __Vtemp126;
    VlWide<5>/*159:0*/ __Vtemp130;
    VlWide<7>/*223:0*/ __Vtemp132;
    VlWide<9>/*287:0*/ __Vtemp134;
    VlWide<3>/*95:0*/ __Vtemp651;
    VlWide<3>/*95:0*/ __Vtemp654;
    VlWide<3>/*95:0*/ __Vtemp681;
    VlWide<3>/*95:0*/ __Vtemp686;
    VlWide<3>/*95:0*/ __Vtemp689;
    VlWide<3>/*95:0*/ __Vtemp701;
    VlWide<11>/*351:0*/ __Vtemp709;
    VlWide<3>/*95:0*/ __Vtemp777;
    VlWide<3>/*95:0*/ __Vtemp846;
    VlWide<3>/*95:0*/ __Vtemp860;
    VlWide<3>/*95:0*/ __Vtemp885;
    // Body
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[0U] = 0x17U;
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[1U] = 0x26U;
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[2U] = 0x40U;
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[3U] = 0x82U;
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[4U] = 0x104U;
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[5U] = 0x200U;
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[6U] = 0x401U;
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[7U] = 0x802U;
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[8U] = 0x1003U;
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[9U] = 0x2005U;
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[0xaU] = 0x4000U;
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[0U] = 0x15U;
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[1U] = 0x24U;
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[2U] = 0x43U;
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[3U] = 0x82U;
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[4U] = 0x101U;
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[5U] = 0x200U;
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[0U] = 0xdU;
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[1U] = 0x14U;
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[2U] = 0x23U;
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[3U] = 0x42U;
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[4U] = 0x81U;
    vlSelf->top__DOT__HY_CU__DOT__addw = ((IData)((0x3bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (0U == 
                                             (vlSelf->instr_in 
                                              >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT__add = ((IData)((0x33U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in))) 
                                         & (0U == (vlSelf->instr_in 
                                                   >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT__mulw = ((IData)((0x3bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (1U == 
                                             (vlSelf->instr_in 
                                              >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT__divw = ((IData)((0x403bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (1U == 
                                             (vlSelf->instr_in 
                                              >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT__mul = ((IData)((0x33U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in))) 
                                         & (1U == (vlSelf->instr_in 
                                                   >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT__remw = ((IData)((0x603bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (1U == 
                                             (vlSelf->instr_in 
                                              >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT__sltu = ((IData)((0x3033U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (0U == 
                                             (vlSelf->instr_in 
                                              >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT__slt = ((IData)((0x2033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in))) 
                                         & (0U == (vlSelf->instr_in 
                                                   >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT__sllw = ((IData)((0x103bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (0U == 
                                             (vlSelf->instr_in 
                                              >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT__srlw = ((IData)((0x503bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (0U == 
                                             (vlSelf->instr_in 
                                              >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT___or = ((IData)((0x6033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in))) 
                                         & (0U == (vlSelf->instr_in 
                                                   >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT___and = ((IData)((0x7033U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (0U == 
                                             (vlSelf->instr_in 
                                              >> 0x19U)));
    vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000 
        = (0x20U == (vlSelf->instr_in >> 0x19U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC = (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->instr_in)) 
                                                   | (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__bne = (IData)((0x1063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__beq = (IData)((0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__bge = (IData)((0x5063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__blt = (IData)((0x4063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__bltu = (IData)((0x6063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__addi = (IData)((0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__addiw = (IData)((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__sltiu = (IData)((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__slli = ((IData)((0x1013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (0U == 
                                             (vlSelf->instr_in 
                                              >> 0x1aU)));
    vlSelf->top__DOT__HY_CU__DOT__srli = ((IData)((0x5013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (0U == 
                                             (vlSelf->instr_in 
                                              >> 0x1aU)));
    vlSelf->top__DOT__HY_CU__DOT__srai = ((IData)((0x5013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (0x10U 
                                             == (vlSelf->instr_in 
                                                 >> 0x1aU)));
    vlSelf->top__DOT__HY_CU__DOT__srliw = ((IData)(
                                                   (0x501bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->instr_in))) 
                                           & (0U == 
                                              (vlSelf->instr_in 
                                               >> 0x1aU)));
    vlSelf->top__DOT__HY_CU__DOT__slliw = ((IData)(
                                                   (0x101bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->instr_in))) 
                                           & (0U == 
                                              (vlSelf->instr_in 
                                               >> 0x1aU)));
    vlSelf->top__DOT__HY_CU__DOT__sraiw = ((IData)(
                                                   (0x501bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->instr_in))) 
                                           & (0x10U 
                                              == (vlSelf->instr_in 
                                                  >> 0x1aU)));
    vlSelf->top__DOT__HY_CU__DOT__andi = (IData)((0x7013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__xori = (IData)((0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__jalr = (IData)((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__ld = (IData)((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__lbu = (IData)((0x4003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__lh = (IData)((0x1003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__lhu = (IData)((0x5003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__sd = (IData)((0x3023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__lw = (IData)((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__sw = (IData)((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__sb = (IData)((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__sh = (IData)((0x1023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->instr_in)));
    vlSelf->top__DOT__Sign_Extend__DOT__immS = ((0xfe0U 
                                                 & (vlSelf->instr_in 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->instr_in 
                                                      >> 7U)));
    vlSelf->top__DOT__Sign_Extend__DOT__immJ = ((0x100000U 
                                                 & (vlSelf->instr_in 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->instr_in) 
                                                   | ((0x800U 
                                                       & (vlSelf->instr_in 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->instr_in 
                                                            >> 0x14U)))));
    vlSelf->top__DOT__Sign_Extend__DOT__immB = ((0x1000U 
                                                 & (vlSelf->instr_in 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->instr_in 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->instr_in 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->instr_in 
                                                            >> 7U)))));
    vlSelf->PC_Test = vlSelf->top__DOT__PC_Wire;
    vlSelf->PC_Test = vlSelf->top__DOT__PC_Wire;
    VL_EXTEND_WQ(69,64, __Vtemp1, vlSelf->top__DOT__HY_RegFile__DOT__Zero);
    __Vtemp59[0U] = (0x1fU | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t5) 
                              << 5U));
    __Vtemp59[1U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t5) 
                      >> 0x1bU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t5 
                                            >> 0x20U)) 
                                   << 5U));
    __Vtemp59[2U] = (0x3c0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t4) 
                                << 0xaU) | ((IData)(
                                                    (vlSelf->top__DOT__HY_RegFile__DOT__t5 
                                                     >> 0x20U)) 
                                            >> 0x1bU)));
    __Vtemp59[3U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t4) 
                      >> 0x16U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t4 
                                            >> 0x20U)) 
                                   << 0xaU));
    __Vtemp59[4U] = (0x7400U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t3) 
                                 << 0xfU) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__t4 
                                                      >> 0x20U)) 
                                             >> 0x16U)));
    __Vtemp59[5U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t3) 
                      >> 0x11U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t3 
                                            >> 0x20U)) 
                                   << 0xfU));
    __Vtemp59[6U] = (0xe0000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s11) 
                                  << 0x14U) | ((IData)(
                                                       (vlSelf->top__DOT__HY_RegFile__DOT__t3 
                                                        >> 0x20U)) 
                                               >> 0x11U)));
    __Vtemp59[7U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s11) 
                      >> 0xcU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s11 
                                           >> 0x20U)) 
                                  << 0x14U));
    __Vtemp59[8U] = (0x1b00000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s10) 
                                    << 0x19U) | ((IData)(
                                                         (vlSelf->top__DOT__HY_RegFile__DOT__s11 
                                                          >> 0x20U)) 
                                                 >> 0xcU)));
    __Vtemp59[9U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s10) 
                      >> 7U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s10 
                                         >> 0x20U)) 
                                << 0x19U));
    __Vtemp59[0xaU] = (0x34000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s9) 
                                       << 0x1eU) | 
                                      ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s10 
                                                >> 0x20U)) 
                                       >> 7U)));
    __Vtemp59[0xbU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s9) 
                        >> 2U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s9 
                                           >> 0x20U)) 
                                  << 0x1eU));
    __Vtemp59[0xcU] = (0x40000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s9 
                                               >> 0x20U)) 
                                      >> 2U));
    __Vtemp59[0xdU] = (6U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s8) 
                             << 3U));
    __Vtemp59[0xeU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s8) 
                        >> 0x1dU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s8 
                                              >> 0x20U)) 
                                     << 3U));
    __Vtemp59[0xfU] = (0xc0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s7) 
                                 << 8U) | ((IData)(
                                                   (vlSelf->top__DOT__HY_RegFile__DOT__s8 
                                                    >> 0x20U)) 
                                           >> 0x1dU)));
    __Vtemp59[0x10U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s7) 
                         >> 0x18U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s7 
                                               >> 0x20U)) 
                                      << 8U));
    __Vtemp59[0x11U] = (0x1700U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s6) 
                                    << 0xdU) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__s7 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp59[0x12U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s6) 
                         >> 0x13U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s6 
                                               >> 0x20U)) 
                                      << 0xdU));
    __Vtemp59[0x13U] = (0x2c000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s5) 
                                     << 0x12U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__s6 
                                                           >> 0x20U)) 
                                                  >> 0x13U)));
    __Vtemp59[0x14U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s5) 
                         >> 0xeU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s5 
                                              >> 0x20U)) 
                                     << 0x12U));
    __Vtemp59[0x15U] = (0x540000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s4) 
                                      << 0x17U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__s5 
                                                            >> 0x20U)) 
                                                   >> 0xeU)));
    __Vtemp59[0x16U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s4) 
                         >> 9U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s4 
                                            >> 0x20U)) 
                                   << 0x17U));
    __Vtemp59[0x17U] = (0xa000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s3) 
                                       << 0x1cU) | 
                                      ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s4 
                                                >> 0x20U)) 
                                       >> 9U)));
    __Vtemp59[0x18U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s3) 
                         >> 4U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s3 
                                            >> 0x20U)) 
                                   << 0x1cU));
    __Vtemp59[0x19U] = (0x30000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s3 
                                                >> 0x20U)) 
                                       >> 4U));
    __Vtemp59[0x1aU] = (1U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s2) 
                              << 1U));
    __Vtemp59[0x1bU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s2) 
                         >> 0x1fU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s2 
                                               >> 0x20U)) 
                                      << 1U));
    __Vtemp59[0x1cU] = (0x24U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a7) 
                                  << 6U) | ((IData)(
                                                    (vlSelf->top__DOT__HY_RegFile__DOT__s2 
                                                     >> 0x20U)) 
                                            >> 0x1fU)));
    __Vtemp59[0x1dU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a7) 
                         >> 0x1aU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a7 
                                               >> 0x20U)) 
                                      << 6U));
    __Vtemp59[0x1eU] = (0x440U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a6) 
                                   << 0xbU) | ((IData)(
                                                       (vlSelf->top__DOT__HY_RegFile__DOT__a7 
                                                        >> 0x20U)) 
                                               >> 0x1aU)));
    __Vtemp59[0x1fU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a6) 
                         >> 0x15U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a6 
                                               >> 0x20U)) 
                                      << 0xbU));
    __Vtemp59[0x20U] = (0x8000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a5) 
                                    << 0x10U) | ((IData)(
                                                         (vlSelf->top__DOT__HY_RegFile__DOT__a6 
                                                          >> 0x20U)) 
                                                 >> 0x15U)));
    __Vtemp59[0x21U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a5) 
                         >> 0x10U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a5 
                                               >> 0x20U)) 
                                      << 0x10U));
    __Vtemp59[0x22U] = (0xf0000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a4) 
                                     << 0x15U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__a5 
                                                           >> 0x20U)) 
                                                  >> 0x10U)));
    __Vtemp59[0x23U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a4) 
                         >> 0xbU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a4 
                                              >> 0x20U)) 
                                     << 0x15U));
    __Vtemp59[0x24U] = (0x1c00000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a3) 
                                       << 0x1aU) | 
                                      ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a4 
                                                >> 0x20U)) 
                                       >> 0xbU)));
    __Vtemp59[0x25U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a3) 
                         >> 6U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a3 
                                            >> 0x20U)) 
                                   << 0x1aU));
    __Vtemp59[0x26U] = (0x34000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a2) 
                                        << 0x1fU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a3 
                                                 >> 0x20U)) 
                                        >> 6U)));
    __Vtemp59[0x27U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a2) 
                         >> 1U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a2 
                                            >> 0x20U)) 
                                   << 0x1fU));
    __Vtemp59[0x28U] = ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a2 
                                 >> 0x20U)) >> 1U);
    __Vtemp59[0x29U] = (6U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a1) 
                              << 4U));
    __Vtemp59[0x2aU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a1) 
                         >> 0x1cU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a1 
                                               >> 0x20U)) 
                                      << 4U));
    __Vtemp59[0x2bU] = (0xb0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a0) 
                                  << 9U) | ((IData)(
                                                    (vlSelf->top__DOT__HY_RegFile__DOT__a1 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
    __Vtemp59[0x2cU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a0) 
                         >> 0x17U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a0 
                                               >> 0x20U)) 
                                      << 9U));
    __Vtemp59[0x2dU] = (0x1400U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s1) 
                                    << 0xeU) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__a0 
                                                         >> 0x20U)) 
                                                >> 0x17U)));
    __Vtemp59[0x2eU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s1) 
                         >> 0x12U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s1 
                                               >> 0x20U)) 
                                      << 0xeU));
    __Vtemp59[0x2fU] = (0x24000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s0) 
                                     << 0x13U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__s1 
                                                           >> 0x20U)) 
                                                  >> 0x12U)));
    __Vtemp59[0x30U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s0) 
                         >> 0xdU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s0 
                                              >> 0x20U)) 
                                     << 0x13U));
    __Vtemp59[0x31U] = (0x400000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t2) 
                                      << 0x18U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__s0 
                                                            >> 0x20U)) 
                                                   >> 0xdU)));
    __Vtemp59[0x32U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t2) 
                         >> 8U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t2 
                                            >> 0x20U)) 
                                   << 0x18U));
    __Vtemp59[0x33U] = (0x7000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t1) 
                                       << 0x1dU) | 
                                      ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t2 
                                                >> 0x20U)) 
                                       >> 8U)));
    __Vtemp59[0x34U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t1) 
                         >> 3U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t1 
                                            >> 0x20U)) 
                                   << 0x1dU));
    __Vtemp59[0x35U] = (0xc0000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t1 
                                                >> 0x20U)) 
                                       >> 3U));
    __Vtemp59[0x36U] = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t0) 
                        << 2U);
    __Vtemp59[0x37U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t0) 
                         >> 0x1eU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t0 
                                               >> 0x20U)) 
                                      << 2U));
    __Vtemp59[0x38U] = (0x14U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__tp) 
                                  << 7U) | ((IData)(
                                                    (vlSelf->top__DOT__HY_RegFile__DOT__t0 
                                                     >> 0x20U)) 
                                            >> 0x1eU)));
    __Vtemp59[0x39U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__tp) 
                         >> 0x19U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__tp 
                                               >> 0x20U)) 
                                      << 7U));
    __Vtemp59[0x3aU] = (0x200U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__gp) 
                                   << 0xcU) | ((IData)(
                                                       (vlSelf->top__DOT__HY_RegFile__DOT__tp 
                                                        >> 0x20U)) 
                                               >> 0x19U)));
    __Vtemp59[0x3bU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__gp) 
                         >> 0x14U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__gp 
                                               >> 0x20U)) 
                                      << 0xcU));
    __Vtemp59[0x3cU] = (0x3000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__sp) 
                                    << 0x11U) | ((IData)(
                                                         (vlSelf->top__DOT__HY_RegFile__DOT__gp 
                                                          >> 0x20U)) 
                                                 >> 0x14U)));
    __Vtemp59[0x3dU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__sp) 
                         >> 0xfU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__sp 
                                              >> 0x20U)) 
                                     << 0x11U));
    __Vtemp59[0x3eU] = (0x40000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__sp 
                                             >> 0x20U)) 
                                    >> 0xfU));
    VL_CONCAT_WQW(2070,64,2006, __Vtemp60, vlSelf->top__DOT__HY_RegFile__DOT__ra, __Vtemp59);
    VL_CONCAT_WIW(2075,5,2070, __Vtemp61, 1U, __Vtemp60);
    VL_CONCAT_WWW(2144,69,2075, __Vtemp62, __Vtemp1, __Vtemp61);
    VL_CONCAT_WWQ(2208,2144,64, __Vtemp63, __Vtemp62, vlSelf->top__DOT__HY_RegFile__DOT__t6);
    VL_ASSIGN_W(2208,vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4, __Vtemp63);
    VL_EXTEND_WQ(69,64, __Vtemp64, vlSelf->top__DOT__HY_RegFile__DOT__Zero);
    __Vtemp122[0U] = (0x1fU | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t5) 
                               << 5U));
    __Vtemp122[1U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t5) 
                       >> 0x1bU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t5 
                                             >> 0x20U)) 
                                    << 5U));
    __Vtemp122[2U] = (0x3c0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t4) 
                                 << 0xaU) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__t5 
                                                      >> 0x20U)) 
                                             >> 0x1bU)));
    __Vtemp122[3U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t4) 
                       >> 0x16U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t4 
                                             >> 0x20U)) 
                                    << 0xaU));
    __Vtemp122[4U] = (0x7400U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t3) 
                                  << 0xfU) | ((IData)(
                                                      (vlSelf->top__DOT__HY_RegFile__DOT__t4 
                                                       >> 0x20U)) 
                                              >> 0x16U)));
    __Vtemp122[5U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t3) 
                       >> 0x11U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t3 
                                             >> 0x20U)) 
                                    << 0xfU));
    __Vtemp122[6U] = (0xe0000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s11) 
                                   << 0x14U) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__t3 
                                                         >> 0x20U)) 
                                                >> 0x11U)));
    __Vtemp122[7U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s11) 
                       >> 0xcU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s11 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp122[8U] = (0x1b00000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s10) 
                                     << 0x19U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__s11 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    __Vtemp122[9U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s10) 
                       >> 7U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s10 
                                          >> 0x20U)) 
                                 << 0x19U));
    __Vtemp122[0xaU] = (0x34000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s9) 
                                        << 0x1eU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s10 
                                                 >> 0x20U)) 
                                        >> 7U)));
    __Vtemp122[0xbU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s9) 
                         >> 2U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s9 
                                            >> 0x20U)) 
                                   << 0x1eU));
    __Vtemp122[0xcU] = (0x40000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s9 
                                                >> 0x20U)) 
                                       >> 2U));
    __Vtemp122[0xdU] = (6U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s8) 
                              << 3U));
    __Vtemp122[0xeU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s8) 
                         >> 0x1dU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s8 
                                               >> 0x20U)) 
                                      << 3U));
    __Vtemp122[0xfU] = (0xc0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s7) 
                                  << 8U) | ((IData)(
                                                    (vlSelf->top__DOT__HY_RegFile__DOT__s8 
                                                     >> 0x20U)) 
                                            >> 0x1dU)));
    __Vtemp122[0x10U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s7) 
                          >> 0x18U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s7 
                                                >> 0x20U)) 
                                       << 8U));
    __Vtemp122[0x11U] = (0x1700U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s6) 
                                     << 0xdU) | ((IData)(
                                                         (vlSelf->top__DOT__HY_RegFile__DOT__s7 
                                                          >> 0x20U)) 
                                                 >> 0x18U)));
    __Vtemp122[0x12U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s6) 
                          >> 0x13U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s6 
                                                >> 0x20U)) 
                                       << 0xdU));
    __Vtemp122[0x13U] = (0x2c000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s5) 
                                      << 0x12U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__s6 
                                                            >> 0x20U)) 
                                                   >> 0x13U)));
    __Vtemp122[0x14U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s5) 
                          >> 0xeU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s5 
                                               >> 0x20U)) 
                                      << 0x12U));
    __Vtemp122[0x15U] = (0x540000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s4) 
                                       << 0x17U) | 
                                      ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s5 
                                                >> 0x20U)) 
                                       >> 0xeU)));
    __Vtemp122[0x16U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s4) 
                          >> 9U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s4 
                                             >> 0x20U)) 
                                    << 0x17U));
    __Vtemp122[0x17U] = (0xa000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s3) 
                                        << 0x1cU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s4 
                                                 >> 0x20U)) 
                                        >> 9U)));
    __Vtemp122[0x18U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s3) 
                          >> 4U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s3 
                                             >> 0x20U)) 
                                    << 0x1cU));
    __Vtemp122[0x19U] = (0x30000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s3 
                                                 >> 0x20U)) 
                                        >> 4U));
    __Vtemp122[0x1aU] = (1U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s2) 
                               << 1U));
    __Vtemp122[0x1bU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s2) 
                          >> 0x1fU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s2 
                                                >> 0x20U)) 
                                       << 1U));
    __Vtemp122[0x1cU] = (0x24U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a7) 
                                   << 6U) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__s2 
                                                      >> 0x20U)) 
                                             >> 0x1fU)));
    __Vtemp122[0x1dU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a7) 
                          >> 0x1aU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a7 
                                                >> 0x20U)) 
                                       << 6U));
    __Vtemp122[0x1eU] = (0x440U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a6) 
                                    << 0xbU) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__a7 
                                                         >> 0x20U)) 
                                                >> 0x1aU)));
    __Vtemp122[0x1fU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a6) 
                          >> 0x15U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a6 
                                                >> 0x20U)) 
                                       << 0xbU));
    __Vtemp122[0x20U] = (0x8000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a5) 
                                     << 0x10U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__a6 
                                                           >> 0x20U)) 
                                                  >> 0x15U)));
    __Vtemp122[0x21U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a5) 
                          >> 0x10U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a5 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp122[0x22U] = (0xf0000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a4) 
                                      << 0x15U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__a5 
                                                            >> 0x20U)) 
                                                   >> 0x10U)));
    __Vtemp122[0x23U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a4) 
                          >> 0xbU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a4 
                                               >> 0x20U)) 
                                      << 0x15U));
    __Vtemp122[0x24U] = (0x1c00000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a3) 
                                        << 0x1aU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a4 
                                                 >> 0x20U)) 
                                        >> 0xbU)));
    __Vtemp122[0x25U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a3) 
                          >> 6U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a3 
                                             >> 0x20U)) 
                                    << 0x1aU));
    __Vtemp122[0x26U] = (0x34000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a2) 
                                         << 0x1fU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__HY_RegFile__DOT__a3 
                                                    >> 0x20U)) 
                                           >> 6U)));
    __Vtemp122[0x27U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a2) 
                          >> 1U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a2 
                                             >> 0x20U)) 
                                    << 0x1fU));
    __Vtemp122[0x28U] = ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a2 
                                  >> 0x20U)) >> 1U);
    __Vtemp122[0x29U] = (6U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a1) 
                               << 4U));
    __Vtemp122[0x2aU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a1) 
                          >> 0x1cU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a1 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp122[0x2bU] = (0xb0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a0) 
                                   << 9U) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__a1 
                                                      >> 0x20U)) 
                                             >> 0x1cU)));
    __Vtemp122[0x2cU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a0) 
                          >> 0x17U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a0 
                                                >> 0x20U)) 
                                       << 9U));
    __Vtemp122[0x2dU] = (0x1400U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s1) 
                                     << 0xeU) | ((IData)(
                                                         (vlSelf->top__DOT__HY_RegFile__DOT__a0 
                                                          >> 0x20U)) 
                                                 >> 0x17U)));
    __Vtemp122[0x2eU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s1) 
                          >> 0x12U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s1 
                                                >> 0x20U)) 
                                       << 0xeU));
    __Vtemp122[0x2fU] = (0x24000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s0) 
                                      << 0x13U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__s1 
                                                            >> 0x20U)) 
                                                   >> 0x12U)));
    __Vtemp122[0x30U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s0) 
                          >> 0xdU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s0 
                                               >> 0x20U)) 
                                      << 0x13U));
    __Vtemp122[0x31U] = (0x400000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t2) 
                                       << 0x18U) | 
                                      ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s0 
                                                >> 0x20U)) 
                                       >> 0xdU)));
    __Vtemp122[0x32U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t2) 
                          >> 8U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t2 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp122[0x33U] = (0x7000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t1) 
                                        << 0x1dU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t2 
                                                 >> 0x20U)) 
                                        >> 8U)));
    __Vtemp122[0x34U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t1) 
                          >> 3U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t1 
                                             >> 0x20U)) 
                                    << 0x1dU));
    __Vtemp122[0x35U] = (0xc0000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t1 
                                                 >> 0x20U)) 
                                        >> 3U));
    __Vtemp122[0x36U] = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t0) 
                         << 2U);
    __Vtemp122[0x37U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t0) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t0 
                                                >> 0x20U)) 
                                       << 2U));
    __Vtemp122[0x38U] = (0x14U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__tp) 
                                   << 7U) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__t0 
                                                      >> 0x20U)) 
                                             >> 0x1eU)));
    __Vtemp122[0x39U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__tp) 
                          >> 0x19U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__tp 
                                                >> 0x20U)) 
                                       << 7U));
    __Vtemp122[0x3aU] = (0x200U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__gp) 
                                    << 0xcU) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__tp 
                                                         >> 0x20U)) 
                                                >> 0x19U)));
    __Vtemp122[0x3bU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__gp) 
                          >> 0x14U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__gp 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp122[0x3cU] = (0x3000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__sp) 
                                     << 0x11U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__gp 
                                                           >> 0x20U)) 
                                                  >> 0x14U)));
    __Vtemp122[0x3dU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__sp) 
                          >> 0xfU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__sp 
                                               >> 0x20U)) 
                                      << 0x11U));
    __Vtemp122[0x3eU] = (0x40000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__sp 
                                              >> 0x20U)) 
                                     >> 0xfU));
    VL_CONCAT_WQW(2070,64,2006, __Vtemp123, vlSelf->top__DOT__HY_RegFile__DOT__ra, __Vtemp122);
    VL_CONCAT_WIW(2075,5,2070, __Vtemp124, 1U, __Vtemp123);
    VL_CONCAT_WWW(2144,69,2075, __Vtemp125, __Vtemp64, __Vtemp124);
    VL_CONCAT_WWQ(2208,2144,64, __Vtemp126, __Vtemp125, vlSelf->top__DOT__HY_RegFile__DOT__t6);
    VL_ASSIGN_W(2208,vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4, __Vtemp126);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[0U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[0U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [0U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[1U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [1U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[2U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[2U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [2U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[3U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [3U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[4U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [4U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[5U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[5U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [5U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[6U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [6U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[7U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [7U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[8U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[8U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [8U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[9U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [9U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[0xaU] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [0xaU] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[0U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[0U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [0U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[1U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [1U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[2U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[2U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [2U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[3U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [3U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[4U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [4U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[5U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[5U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [5U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[6U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [6U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[7U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [7U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[8U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[8U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [8U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[9U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [9U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[0xaU] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list
                     [0xaU] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[0U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[0U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [0U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[1U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[1U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [1U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[2U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[2U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [2U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[3U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[3U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [3U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[4U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[4U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [4U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[5U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[5U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [5U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[0U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[0U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [0U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[1U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[1U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [1U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[2U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[2U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [2U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[3U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[3U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [3U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[4U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[4U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [4U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[5U] 
        = (0xfU & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[5U] 
        = (0x3fU & (vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list
                    [5U] >> 4U));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[0U] 
        = (7U & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[0U] 
        = (0x1fU & (vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[1U] 
        = (7U & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[1U] 
        = (0x1fU & (vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[2U] 
        = (7U & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[3U] 
        = (7U & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[3U] 
        = (0x1fU & (vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
                    [3U] >> 3U));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[4U] 
        = (7U & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[4U] 
        = (0x1fU & (vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
                    [4U] >> 3U));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[0U] 
        = (7U & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[0U] 
        = (0x1fU & (vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[1U] 
        = (7U & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[1U] 
        = (0x1fU & (vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[2U] 
        = (7U & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[3U] 
        = (7U & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[3U] 
        = (0x1fU & (vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
                    [3U] >> 3U));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[4U] 
        = (7U & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[4U] 
        = (0x1fU & (vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list
                    [4U] >> 3U));
    vlSelf->top__DOT__HY_CU__DOT__subw = ((IData)((0x3bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (IData)(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
    vlSelf->top__DOT__HY_CU__DOT__sub = ((IData)((0x33U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in))) 
                                         & (IData)(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
    vlSelf->top__DOT__HY_CU__DOT__sraw = ((IData)((0x503bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in))) 
                                          & (IData)(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
    vlSelf->C_RS1_PC_Connector_result = vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC;
    vlSelf->top__DOT__C_ALU_NPC_In_Connector = ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->instr_in)) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr));
    vlSelf->top__DOT__C_NPC_Branch_Jump_Connector = 
        ((1U & (IData)(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector)) 
         | ((IData)(vlSelf->top__DOT__HY_CU__DOT__jalr) 
            << 1U));
    vlSelf->top__DOT__MEM_Ctrl_connector = ((0xeU & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector)) 
                                            | ((((IData)(vlSelf->top__DOT__HY_CU__DOT__lhu) 
                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)));
    vlSelf->top__DOT__C_ALU_MEM_Connector = (((((((
                                                   ((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh));
    vlSelf->top__DOT__MEM_Ctrl_connector = ((9U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector)) 
                                            | (((IData)(vlSelf->top__DOT__HY_CU__DOT__lh) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->top__DOT__HY_CU__DOT__lbu) 
                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
                                                  << 1U)));
    vlSelf->top__DOT__MEM_Ctrl_connector = ((7U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector)) 
                                            | (((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
                                               << 3U));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm = 
        ((((((((((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
               | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
              | (IData)(vlSelf->top__DOT__HY_CU__DOT__andi)) 
             | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
            | (0x17U == (0x7fU & vlSelf->instr_in))) 
           | (0x37U == (0x7fU & vlSelf->instr_in))) 
          | (0x6fU == (0x7fU & vlSelf->instr_in))) 
         | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr));
    vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2 
        = (((((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
            << 4U) | ((((0x17U == (0x7fU & vlSelf->instr_in)) 
                        | (0x37U == (0x7fU & vlSelf->instr_in))) 
                       << 3U) | ((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
                                  << 2U) | (((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->instr_in)) 
                                             << 1U) 
                                            | (((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu))))));
    vlSelf->top__DOT__WriteBack_Enable = (1U & (~ (
                                                   ((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
                                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
    __Vtemp130[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (vlSelf->instr_in 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->instr_in 
                                                                   >> 0x14U)))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (0x38U & ((IData)(((
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->instr_in 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->instr_in 
                                                                      >> 0x14U)))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))));
    __Vtemp132[3U] = ((7U & ((IData)((((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSelf->instr_in 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelf->instr_in))))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->instr_in 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelf->instr_in))))) 
                                             >> 0x1aU)) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->instr_in 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->instr_in)))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    __Vtemp132[4U] = (0x80U | ((7U & ((IData)(((((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->instr_in 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->instr_in)))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)((((- (QData)((IData)(
                                                              (vlSelf->instr_in 
                                                               >> 0x1fU)))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (vlSelf->instr_in 
                                                             >> 0x14U))))) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    ((((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->instr_in 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelf->instr_in)))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp132[5U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (vlSelf->instr_in 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->instr_in 
                                                                   >> 0x14U))))) 
                             >> 0x17U)) | ((0x38U & 
                                            ((IData)(
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->instr_in 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->instr_in 
                                                                         >> 0x14U))))) 
                                             >> 0x17U)) 
                                           | ((0x1c0U 
                                               & ((IData)(
                                                          (((- (QData)((IData)(
                                                                               (vlSelf->instr_in 
                                                                                >> 0x1fU)))) 
                                                            << 0xcU) 
                                                           | (QData)((IData)(
                                                                             (vlSelf->instr_in 
                                                                              >> 0x14U))))) 
                                                  >> 0x17U)) 
                                              | ((IData)(
                                                         ((((- (QData)((IData)(
                                                                               (vlSelf->instr_in 
                                                                                >> 0x1fU)))) 
                                                            << 0xcU) 
                                                           | (QData)((IData)(
                                                                             (vlSelf->instr_in 
                                                                              >> 0x14U)))) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    __Vtemp132[6U] = ((7U & ((IData)(((((- (QData)((IData)(
                                                           (vlSelf->instr_in 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->instr_in 
                                                                    >> 0x14U)))) 
                                      >> 0x20U)) >> 0x17U)) 
                      | (__Vtemp130[4U] << 3U));
    __Vtemp134[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS) 
                                                                        >> 0xbU))))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)((((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->instr_in 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->instr_in))))) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    ((((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS) 
                                                                              >> 0xbU))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[0U] 
        = (IData)((((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immB) 
                                              >> 0xcU))))) 
                    << 0xdU) | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immB))));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[1U] 
        = (IData)(((((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immB) 
                                               >> 0xcU))))) 
                     << 0xdU) | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immB))) 
                   >> 0x20U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[2U] 
        = (5U | ((IData)((((- (QData)((IData)((1U & 
                                               (vlSelf->top__DOT__Sign_Extend__DOT__immJ 
                                                >> 0x14U))))) 
                           << 0x15U) | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immJ)))) 
                 << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[3U] 
        = (((IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__Sign_Extend__DOT__immJ 
                                                >> 0x14U))))) 
                      << 0x15U) | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immJ)))) 
            >> 0x1dU) | ((IData)(((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__Sign_Extend__DOT__immJ 
                                                           >> 0x14U))))) 
                                    << 0x15U) | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immJ))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[4U] 
        = (0x20U | (((IData)((((- (QData)((IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS) 
                                                      >> 0xbU))))) 
                               << 0xcU) | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS)))) 
                     << 6U) | ((IData)(((((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__Sign_Extend__DOT__immJ 
                                                                 >> 0x14U))))) 
                                          << 0x15U) 
                                         | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immJ))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[5U] 
        = ((7U & ((IData)((((- (QData)((IData)((1U 
                                                & ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS) 
                                                   >> 0xbU))))) 
                            << 0xcU) | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS)))) 
                  >> 0x1aU)) | ((0x38U & ((IData)((
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS) 
                                                                           >> 0xbU))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS)))) 
                                          >> 0x1aU)) 
                                | ((IData)(((((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS) 
                                                                     >> 0xbU))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS))) 
                                            >> 0x20U)) 
                                   << 6U)));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[6U] 
        = __Vtemp134[4U];
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[7U] 
        = ((7U & ((IData)((((QData)((IData)((- (IData)(
                                                       (vlSelf->instr_in 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->instr_in))))) 
                  >> 0x17U)) | (__Vtemp132[3U] << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[8U] 
        = ((__Vtemp132[3U] >> 0x1dU) | (__Vtemp132[4U] 
                                        << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[9U] 
        = ((__Vtemp132[4U] >> 0x1dU) | (__Vtemp132[5U] 
                                        << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[0xaU] 
        = ((__Vtemp132[5U] >> 0x1dU) | (__Vtemp132[6U] 
                                        << 3U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0U];
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[1U];
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[3U] 
            << 0x1bU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[2U] 
                         >> 5U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[4U] 
            << 0x1bU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[3U] 
                         >> 5U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[4U] 
                    >> 5U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[5U] 
            << 0x16U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[4U] 
                         >> 0xaU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[6U] 
            << 0x16U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[5U] 
                         >> 0xaU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[6U] 
                    >> 0xaU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[7U] 
            << 0x11U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[6U] 
                         >> 0xfU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[8U] 
            << 0x11U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[7U] 
                         >> 0xfU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[8U] 
                    >> 0xfU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[9U] 
            << 0xcU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[8U] 
                        >> 0x14U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xaU] 
            << 0xcU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[9U] 
                        >> 0x14U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xaU] 
                    >> 0x14U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xbU] 
            << 7U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xaU] 
                      >> 0x19U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xcU] 
            << 7U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xbU] 
                      >> 0x19U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xcU] 
                    >> 0x19U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xdU] 
            << 2U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xcU] 
                      >> 0x1eU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xeU] 
            << 2U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xdU] 
                      >> 0x1eU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xfU] 
                     << 2U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xeU] 
                               >> 0x1eU)));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x10U] 
            << 0x1dU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0xfU] 
                         >> 3U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x11U] 
            << 0x1dU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x10U] 
                         >> 3U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[7U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x11U] 
                    >> 3U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[8U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x12U] 
            << 0x18U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x11U] 
                         >> 8U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[8U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x13U] 
            << 0x18U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x12U] 
                         >> 8U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[8U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x13U] 
                    >> 8U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x14U] 
            << 0x13U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x13U] 
                         >> 0xdU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x15U] 
            << 0x13U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x14U] 
                         >> 0xdU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[9U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x15U] 
                    >> 0xdU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x16U] 
            << 0xeU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x15U] 
                        >> 0x12U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x17U] 
            << 0xeU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x16U] 
                        >> 0x12U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x17U] 
                    >> 0x12U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x18U] 
            << 9U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x17U] 
                      >> 0x17U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x19U] 
            << 9U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x18U] 
                      >> 0x17U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x19U] 
                    >> 0x17U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1aU] 
            << 4U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x19U] 
                      >> 0x1cU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1bU] 
            << 4U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1aU] 
                      >> 0x1cU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0x1fU & ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1cU] 
                     << 4U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1bU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1dU] 
            << 0x1fU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1cU] 
                         >> 1U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1eU] 
            << 0x1fU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1dU] 
                         >> 1U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1eU] 
                    >> 1U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1fU] 
            << 0x1aU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1eU] 
                         >> 6U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x20U] 
            << 0x1aU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x1fU] 
                         >> 6U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x20U] 
                    >> 6U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x21U] 
            << 0x15U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x20U] 
                         >> 0xbU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x22U] 
            << 0x15U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x21U] 
                         >> 0xbU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x22U] 
                    >> 0xbU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x10U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x23U] 
            << 0x10U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x22U] 
                         >> 0x10U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x10U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x24U] 
            << 0x10U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x23U] 
                         >> 0x10U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x24U] 
                    >> 0x10U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x11U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x25U] 
            << 0xbU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x24U] 
                        >> 0x15U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x11U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x26U] 
            << 0xbU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x25U] 
                        >> 0x15U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x11U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x26U] 
                    >> 0x15U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x12U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x27U] 
            << 6U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x26U] 
                      >> 0x1aU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x12U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x28U] 
            << 6U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x27U] 
                      >> 0x1aU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x12U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x28U] 
                    >> 0x1aU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x13U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x29U] 
            << 1U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x28U] 
                      >> 0x1fU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x13U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2aU] 
            << 1U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x29U] 
                      >> 0x1fU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x13U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2bU] 
                     << 1U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2aU] 
                               >> 0x1fU)));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x14U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2cU] 
            << 0x1cU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2bU] 
                         >> 4U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x14U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2dU] 
            << 0x1cU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2cU] 
                         >> 4U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x14U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2dU] 
                    >> 4U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x15U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2eU] 
            << 0x17U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2dU] 
                         >> 9U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x15U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2fU] 
            << 0x17U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2eU] 
                         >> 9U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x15U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2fU] 
                    >> 9U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x16U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x30U] 
            << 0x12U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x2fU] 
                         >> 0xeU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x16U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x31U] 
            << 0x12U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x30U] 
                         >> 0xeU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x16U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x31U] 
                    >> 0xeU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x17U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x32U] 
            << 0xdU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x31U] 
                        >> 0x13U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x17U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x33U] 
            << 0xdU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x32U] 
                        >> 0x13U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x17U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x33U] 
                    >> 0x13U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x18U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x34U] 
            << 8U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x33U] 
                      >> 0x18U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x18U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x35U] 
            << 8U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x34U] 
                      >> 0x18U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x18U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x35U] 
                    >> 0x18U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x19U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x36U] 
            << 3U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x35U] 
                      >> 0x1dU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x19U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x37U] 
            << 3U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x36U] 
                      >> 0x1dU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x19U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x38U] 
                     << 3U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x37U] 
                               >> 0x1dU)));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1aU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x39U] 
            << 0x1eU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x38U] 
                         >> 2U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1aU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3aU] 
            << 0x1eU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x39U] 
                         >> 2U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1aU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3aU] 
                    >> 2U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1bU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3bU] 
            << 0x19U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3aU] 
                         >> 7U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1bU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3cU] 
            << 0x19U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3bU] 
                         >> 7U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1bU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3cU] 
                    >> 7U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1cU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3dU] 
            << 0x14U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3cU] 
                         >> 0xcU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1cU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3eU] 
            << 0x14U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3dU] 
                         >> 0xcU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1cU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3eU] 
                    >> 0xcU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1dU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3fU] 
            << 0xfU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3eU] 
                        >> 0x11U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1dU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x40U] 
            << 0xfU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x3fU] 
                        >> 0x11U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1dU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x40U] 
                    >> 0x11U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1eU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x41U] 
            << 0xaU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x40U] 
                        >> 0x16U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1eU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x42U] 
            << 0xaU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x41U] 
                        >> 0x16U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1eU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x42U] 
                    >> 0x16U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1fU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x43U] 
            << 5U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x42U] 
                      >> 0x1bU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1fU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x44U] 
            << 5U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x43U] 
                      >> 0x1bU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0x1fU][2U] 
        = (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4[0x44U] 
           >> 0x1bU);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0U];
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[1U];
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[3U] 
            << 0x1bU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[2U] 
                         >> 5U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[4U] 
            << 0x1bU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[3U] 
                         >> 5U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[4U] 
                    >> 5U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[5U] 
            << 0x16U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[4U] 
                         >> 0xaU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[6U] 
            << 0x16U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[5U] 
                         >> 0xaU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[6U] 
                    >> 0xaU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[7U] 
            << 0x11U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[6U] 
                         >> 0xfU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[8U] 
            << 0x11U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[7U] 
                         >> 0xfU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[8U] 
                    >> 0xfU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[9U] 
            << 0xcU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[8U] 
                        >> 0x14U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xaU] 
            << 0xcU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[9U] 
                        >> 0x14U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xaU] 
                    >> 0x14U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xbU] 
            << 7U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xaU] 
                      >> 0x19U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xcU] 
            << 7U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xbU] 
                      >> 0x19U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xcU] 
                    >> 0x19U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xdU] 
            << 2U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xcU] 
                      >> 0x1eU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xeU] 
            << 2U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xdU] 
                      >> 0x1eU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xfU] 
                     << 2U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xeU] 
                               >> 0x1eU)));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x10U] 
            << 0x1dU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0xfU] 
                         >> 3U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x11U] 
            << 0x1dU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x10U] 
                         >> 3U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[7U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x11U] 
                    >> 3U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[8U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x12U] 
            << 0x18U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x11U] 
                         >> 8U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[8U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x13U] 
            << 0x18U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x12U] 
                         >> 8U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[8U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x13U] 
                    >> 8U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x14U] 
            << 0x13U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x13U] 
                         >> 0xdU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x15U] 
            << 0x13U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x14U] 
                         >> 0xdU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[9U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x15U] 
                    >> 0xdU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x16U] 
            << 0xeU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x15U] 
                        >> 0x12U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x17U] 
            << 0xeU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x16U] 
                        >> 0x12U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x17U] 
                    >> 0x12U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x18U] 
            << 9U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x17U] 
                      >> 0x17U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x19U] 
            << 9U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x18U] 
                      >> 0x17U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x19U] 
                    >> 0x17U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1aU] 
            << 4U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x19U] 
                      >> 0x1cU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1bU] 
            << 4U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1aU] 
                      >> 0x1cU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0x1fU & ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1cU] 
                     << 4U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1bU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1dU] 
            << 0x1fU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1cU] 
                         >> 1U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1eU] 
            << 0x1fU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1dU] 
                         >> 1U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1eU] 
                    >> 1U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1fU] 
            << 0x1aU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1eU] 
                         >> 6U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x20U] 
            << 0x1aU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x1fU] 
                         >> 6U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x20U] 
                    >> 6U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x21U] 
            << 0x15U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x20U] 
                         >> 0xbU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x22U] 
            << 0x15U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x21U] 
                         >> 0xbU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x22U] 
                    >> 0xbU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x10U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x23U] 
            << 0x10U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x22U] 
                         >> 0x10U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x10U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x24U] 
            << 0x10U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x23U] 
                         >> 0x10U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x24U] 
                    >> 0x10U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x11U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x25U] 
            << 0xbU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x24U] 
                        >> 0x15U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x11U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x26U] 
            << 0xbU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x25U] 
                        >> 0x15U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x11U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x26U] 
                    >> 0x15U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x12U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x27U] 
            << 6U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x26U] 
                      >> 0x1aU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x12U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x28U] 
            << 6U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x27U] 
                      >> 0x1aU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x12U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x28U] 
                    >> 0x1aU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x13U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x29U] 
            << 1U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x28U] 
                      >> 0x1fU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x13U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2aU] 
            << 1U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x29U] 
                      >> 0x1fU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x13U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2bU] 
                     << 1U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2aU] 
                               >> 0x1fU)));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x14U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2cU] 
            << 0x1cU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2bU] 
                         >> 4U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x14U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2dU] 
            << 0x1cU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2cU] 
                         >> 4U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x14U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2dU] 
                    >> 4U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x15U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2eU] 
            << 0x17U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2dU] 
                         >> 9U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x15U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2fU] 
            << 0x17U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2eU] 
                         >> 9U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x15U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2fU] 
                    >> 9U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x16U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x30U] 
            << 0x12U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x2fU] 
                         >> 0xeU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x16U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x31U] 
            << 0x12U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x30U] 
                         >> 0xeU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x16U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x31U] 
                    >> 0xeU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x17U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x32U] 
            << 0xdU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x31U] 
                        >> 0x13U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x17U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x33U] 
            << 0xdU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x32U] 
                        >> 0x13U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x17U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x33U] 
                    >> 0x13U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x18U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x34U] 
            << 8U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x33U] 
                      >> 0x18U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x18U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x35U] 
            << 8U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x34U] 
                      >> 0x18U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x18U][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x35U] 
                    >> 0x18U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x19U][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x36U] 
            << 3U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x35U] 
                      >> 0x1dU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x19U][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x37U] 
            << 3U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x36U] 
                      >> 0x1dU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x19U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x38U] 
                     << 3U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x37U] 
                               >> 0x1dU)));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1aU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x39U] 
            << 0x1eU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x38U] 
                         >> 2U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1aU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3aU] 
            << 0x1eU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x39U] 
                         >> 2U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1aU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3aU] 
                    >> 2U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1bU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3bU] 
            << 0x19U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3aU] 
                         >> 7U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1bU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3cU] 
            << 0x19U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3bU] 
                         >> 7U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1bU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3cU] 
                    >> 7U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1cU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3dU] 
            << 0x14U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3cU] 
                         >> 0xcU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1cU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3eU] 
            << 0x14U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3dU] 
                         >> 0xcU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1cU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3eU] 
                    >> 0xcU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1dU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3fU] 
            << 0xfU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3eU] 
                        >> 0x11U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1dU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x40U] 
            << 0xfU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x3fU] 
                        >> 0x11U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1dU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x40U] 
                    >> 0x11U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1eU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x41U] 
            << 0xaU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x40U] 
                        >> 0x16U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1eU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x42U] 
            << 0xaU) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x41U] 
                        >> 0x16U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1eU][2U] 
        = (0x1fU & (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x42U] 
                    >> 0x16U));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1fU][0U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x43U] 
            << 5U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x42U] 
                      >> 0x1bU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1fU][1U] 
        = ((vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x44U] 
            << 5U) | (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x43U] 
                      >> 0x1bU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0x1fU][2U] 
        = (vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4[0x44U] 
           >> 0x1bU);
    vlSelf->top__DOT__HY_CU__DOT__func_signal = (((
                                                   ((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub)) 
                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr)) 
                                                  << 0xaU) 
                                                 | ((((IData)(vlSelf->top__DOT__HY_CU__DOT__mulw) 
                                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul)) 
                                                     << 9U) 
                                                    | ((((IData)(vlSelf->top__DOT__HY_CU__DOT__divw) 
                                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                                                        << 8U) 
                                                       | (((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                                           << 7U) 
                                                          | (((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sraw) 
                                                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw)) 
                                                              << 6U) 
                                                             | (((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
                                                                 << 5U) 
                                                                | ((((((IData)(vlSelf->top__DOT__HY_CU__DOT__andi) 
                                                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT___and)) 
                                                                    << 4U) 
                                                                   | (((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
                                                                       << 3U) 
                                                                      | (((0x6fU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->instr_in)) 
                                                                          << 2U) 
                                                                         | (((0x17U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->instr_in)) 
                                                                             << 1U) 
                                                                            | (0x37U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->instr_in))))))))))));
    vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal 
        = ((((((((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
              | (0x17U == (0x7fU & vlSelf->instr_in))) 
             | (0x6fU == (0x7fU & vlSelf->instr_in))) 
            << 5U) | (((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sub) 
                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul)) 
                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                       << 4U) | (((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addiw) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                  << 3U) | ((((((IData)(vlSelf->top__DOT__HY_CU__DOT__subw) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                             << 2U) 
                                            | (((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr)) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai))))));
    vlSelf->C_ALU_NPC_In_Connector_result = vlSelf->top__DOT__C_ALU_NPC_In_Connector;
    vlSelf->C_ALU_MEM_Connector_result = vlSelf->top__DOT__C_ALU_MEM_Connector;
    vlSelf->C_RS2_imm_Connector_result = vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm;
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2) 
                       == vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2) 
           == vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2) 
                          == vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2) 
              == vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2) 
                          == vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2) 
              == vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2) 
                          == vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2) 
              == vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2) 
                          == vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2) 
              == vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__SEXT_Control = ((IData)(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit)
                                       ? (IData)(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out)
                                       : 1U);
    vlSelf->WriteBack_Enable_result = vlSelf->top__DOT__WriteBack_Enable;
    vlSelf->WriteBack_Enable_result = vlSelf->top__DOT__WriteBack_Enable;
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[0U];
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[1U];
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[2U]);
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[7U] 
            << 0x17U) | (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[6U] 
                         >> 9U));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[8U] 
            << 0x17U) | (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[7U] 
                         >> 9U));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[8U] 
                 >> 9U));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[9U] 
            << 0x14U) | (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[0xaU] 
            << 0x14U) | (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[1U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[2U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[3U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[4U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[5U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[6U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[7U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[8U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[9U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0xaU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0xbU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0xcU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0xdU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0xeU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0xfU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0xfU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x10U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x10U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x11U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x11U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x11U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x11U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x11U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x12U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x12U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x12U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x12U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x12U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x13U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x13U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x13U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x13U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x13U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x14U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x14U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x14U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x14U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x14U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x15U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x15U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x15U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x15U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x15U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x16U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x16U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x16U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x16U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x16U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x17U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x17U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x17U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x17U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x17U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x18U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x18U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x18U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x18U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x18U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x19U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x19U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x19U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x19U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x19U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x1aU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x1aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x1aU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x1aU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x1aU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x1bU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x1bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x1bU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x1bU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x1bU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x1cU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x1cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x1cU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x1cU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x1cU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x1dU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x1dU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x1dU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x1dU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x1dU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x1eU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x1eU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x1eU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x1eU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x1eU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0x1fU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                            [0x1fU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
                             [0x1fU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0x1fU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list
           [0x1fU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[1U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[2U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[3U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[4U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[5U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[6U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[7U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[8U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[9U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0xaU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0xbU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0xcU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0xdU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0xeU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0xfU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0xfU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x10U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x10U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x11U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x11U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x11U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x11U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x11U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x12U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x12U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x12U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x12U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x12U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x13U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x13U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x13U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x13U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x13U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x14U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x14U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x14U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x14U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x14U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x15U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x15U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x15U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x15U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x15U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x16U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x16U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x16U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x16U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x16U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x17U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x17U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x17U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x17U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x17U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x18U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x18U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x18U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x18U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x18U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x19U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x19U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x19U][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x19U] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x19U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x1aU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x1aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x1aU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x1aU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x1aU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x1bU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x1bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x1bU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x1bU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x1bU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x1cU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x1cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x1cU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x1cU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x1cU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x1dU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x1dU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x1dU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x1dU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x1dU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x1eU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x1eU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x1eU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x1eU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x1eU][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0x1fU] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                            [0x1fU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
                             [0x1fU][0U])));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0x1fU] 
        = (0x1fU & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list
           [0x1fU][2U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                       == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
           == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__ALU_Control_wire = ((IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit)
                                           ? (IData)(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out)
                                           : 0xfU);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
                       == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
           == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
                          == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal) 
              == vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__Insider_Control_Connector = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit)
                                                    ? (IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out)
                                                    : 0xfU);
    vlSelf->SEXT_Control_out = vlSelf->top__DOT__SEXT_Control;
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                         >> 0xfU)) 
                               == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((0x1fU & (vlSelf->instr_in >> 0xfU)) == 
           vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x12U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x13U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x14U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x15U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x16U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x17U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x18U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x19U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x1aU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x1bU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x1cU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x1dU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x1eU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
                                  [0x1fU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0xfU)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->top__DOT__RS1_Connector = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit)
                                        ? vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out
                                        : 0ULL);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                         >> 0x14U)) 
                               == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((0x1fU & (vlSelf->instr_in >> 0x14U)) == 
           vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x12U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x13U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x14U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x15U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x16U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x17U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x18U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x19U])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x1aU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x1bU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x1cU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x1dU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x1eU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->instr_in 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
                                  [0x1fU])))) & vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->instr_in >> 0x14U)) 
              == vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->top__DOT__RS2_Connector = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit)
                                        ? vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out
                                        : 0ULL);
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__SEXT_Control) 
                               == vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__SEXT_Control) 
           == vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__SEXT_Control) 
                                  == vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__SEXT_Control) 
              == vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__SEXT_Control) 
                                  == vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__SEXT_Control) 
              == vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__SEXT_Control) 
                                  == vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__SEXT_Control) 
              == vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__SEXT_Control) 
                                  == vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__SEXT_Control) 
              == vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__SEXT_Connector = ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit)
                                         ? vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out
                                         : 0ULL);
    vlSelf->RS1_OUTPUT = vlSelf->top__DOT__RS1_Connector;
    VL_EXTEND_WQ(65,64, __Vtemp651, vlSelf->top__DOT__RS1_Connector);
    vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__PC_Wire);
    vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__PC_Wire >> 0x20U));
    vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[2U] 
        = (1U | (__Vtemp651[0U] << 1U));
    vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[3U] 
        = ((__Vtemp651[0U] >> 0x1fU) | (__Vtemp651[1U] 
                                        << 1U));
    vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[4U] 
        = ((__Vtemp651[1U] >> 0x1fU) | (__Vtemp651[2U] 
                                        << 1U));
    vlSelf->RS2_OUTPUT = vlSelf->top__DOT__RS2_Connector;
    vlSelf->SEXT_result = vlSelf->top__DOT__SEXT_Connector;
    VL_EXTEND_WQ(65,64, __Vtemp654, vlSelf->top__DOT__RS2_Connector);
    vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__SEXT_Connector);
    vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__SEXT_Connector 
                   >> 0x20U));
    vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[2U] 
        = (1U | (__Vtemp654[0U] << 1U));
    vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[3U] 
        = ((__Vtemp654[0U] >> 0x1fU) | (__Vtemp654[1U] 
                                        << 1U));
    vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[4U] 
        = ((__Vtemp654[1U] >> 0x1fU) | (__Vtemp654[2U] 
                                        << 1U));
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[0U];
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[1U];
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[2U]);
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[3U] 
            << 0x1fU) | (vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[2U] 
                         >> 1U));
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[4U] 
            << 0x1fU) | (vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[3U] 
                         >> 1U));
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4[4U] 
                 >> 1U));
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[0U];
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[1U];
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[2U]);
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[3U] 
            << 0x1fU) | (vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[2U] 
                         >> 1U));
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[4U] 
            << 0x1fU) | (vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[3U] 
                         >> 1U));
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4[4U] 
                 >> 1U));
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC) 
                               == vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC) 
           == vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC) 
                                  == vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC) 
              == vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result = ((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit)
                                                 ? vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out
                                                 : 0ULL);
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm) 
                               == vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm) 
           == vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm) 
                                  == vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm) 
              == vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result = ((IData)(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit)
                                                  ? vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out
                                                  : 0ULL);
    __Vtableidx1 = (((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                      != vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result) 
                     << 8U) | (((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                 == vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result) 
                                << 7U) | ((VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result) 
                                           << 6U) | 
                                          ((VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result) 
                                            << 5U) 
                                           | (((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                                < vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result) 
                                               << 4U) 
                                              | (IData)(vlSelf->top__DOT__Insider_Control_Connector))))));
    vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out 
        = Vtop__ConstPool__TABLE_58ebbdf7_0[__Vtableidx1];
    if ((8U & (IData)(vlSelf->top__DOT__Insider_Control_Connector))) {
        vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out = 0ULL;
    } else if ((4U & (IData)(vlSelf->top__DOT__Insider_Control_Connector))) {
        if ((2U & (IData)(vlSelf->top__DOT__Insider_Control_Connector))) {
            vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out = 0ULL;
        } else if ((1U & (IData)(vlSelf->top__DOT__Insider_Control_Connector))) {
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                = ((1U & (IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result))
                    ? (((QData)((IData)((1U & (IData)(
                                                      (vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                                       >> 0x3fU))))) 
                        << 0x3fU) | (vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     >> 1U)) : vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 1U))) ? (((QData)((IData)(
                                                               (3U 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                                                                                >> 0x3fU)))))))) 
                                               << 0x3eU) 
                                              | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                                                 >> 2U))
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 2U))) ? (((QData)((IData)(
                                                               (0xfU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                                                                                >> 0x3fU)))))))) 
                                               << 0x3cU) 
                                              | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                                                 >> 4U))
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 3U))) ? (((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                                                                                >> 0x3fU)))))))) 
                                               << 0x38U) 
                                              | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                                                 >> 8U))
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 4U))) ? (((QData)((IData)(
                                                               (0xffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                                                                                >> 0x3fU)))))))) 
                                               << 0x30U) 
                                              | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                                                 >> 0x10U))
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 5U))) ? (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
                                                                                >> 0x3fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
                                                                 >> 0x20U))))
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4);
            vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out 
                = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5;
        } else {
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                = ((1U & (IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result))
                    ? (vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                       << 1U) : vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 1U))) ? (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                                              << 2U)
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 2U))) ? (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                                              << 4U)
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 3U))) ? (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                                              << 8U)
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 4U))) ? (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                                              << 0x10U)
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 5U))) ? ((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4)) 
                                              << 0x20U)
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4);
            vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out 
                = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__Insider_Control_Connector))) {
        if ((1U & (IData)(vlSelf->top__DOT__Insider_Control_Connector))) {
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                = ((1U & (IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result))
                    ? (vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                       >> 1U) : vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 1U))) ? (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                                              >> 2U)
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 2U))) ? (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                                              >> 4U)
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 3U))) ? (0x800000000000000ULL 
                                              | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                                                 >> 8U))
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 4U))) ? (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                                              >> 0x10U)
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3);
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5 
                = ((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                  >> 5U))) ? (QData)((IData)(
                                                             (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
                                                              >> 0x20U)))
                    : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4);
            vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out 
                = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5;
        } else {
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer) 
                   | (IData)((IData)(((1U & (IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result))
                                       ? ((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result) 
                                          << 1U) : (IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result)))));
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1) 
                   | (IData)((IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                     >> 1U)))
                                       ? ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer) 
                                          << 2U) : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer)))));
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2) 
                   | (IData)((IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                     >> 2U)))
                                       ? ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1) 
                                          << 4U) : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1)))));
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3) 
                   | (IData)((IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                     >> 3U)))
                                       ? ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2) 
                                          << 8U) : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2)))));
            vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
                = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4) 
                   | (IData)((IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                     >> 4U)))
                                       ? ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3) 
                                          << 0x10U)
                                       : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3)))));
            vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out 
                = (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4)));
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__Insider_Control_Connector))) {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
            = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer) 
               | (IData)((IData)(((1U & (IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result))
                                   ? (0x7fffffffU & (IData)(
                                                            (vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                                             >> 1U)))
                                   : (IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result)))));
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
            = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1) 
               | (IData)((IData)(((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                 >> 1U)))
                                   ? (0x3fffffffU & (IData)(
                                                            (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                                                             >> 2U)))
                                   : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer)))));
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
            = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2) 
               | (IData)((IData)(((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                 >> 2U)))
                                   ? (0xfffffffU & (IData)(
                                                           (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                                                            >> 4U)))
                                   : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1)))));
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
            = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3) 
               | (IData)((IData)(((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                 >> 3U)))
                                   ? (0xffffffU & (IData)(
                                                          (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                                                           >> 8U)))
                                   : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2)))));
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
            = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4) 
               | (IData)((IData)(((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                 >> 4U)))
                                   ? (0xffffU & (IData)(
                                                        (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                                                         >> 0x10U)))
                                   : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3)))));
        vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4)));
    } else {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
            = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer) 
               | (IData)((IData)(((1U & (IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result))
                                   ? (((IData)((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                                >> 0x1fU)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
                                       & (IData)((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                                  >> 1U))))
                                   : (IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result)))));
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
            = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1) 
               | (IData)((IData)(((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                 >> 1U)))
                                   ? (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                                                              >> 0x1fU))))) 
                                       << 0x1eU) | 
                                      (0x3fffffffU 
                                       & (IData)((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer 
                                                  >> 2U))))
                                   : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer)))));
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
            = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2) 
               | (IData)((IData)(((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                 >> 2U)))
                                   ? (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                                                              >> 0x1fU))))) 
                                       << 0x1cU) | 
                                      (0xfffffffU & (IData)(
                                                            (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1 
                                                             >> 4U))))
                                   : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1)))));
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
            = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3) 
               | (IData)((IData)(((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                 >> 3U)))
                                   ? (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                                                              >> 0x1fU))))) 
                                       << 0x18U) | 
                                      (0xffffffU & (IData)(
                                                           (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2 
                                                            >> 8U))))
                                   : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2)))));
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
            = ((0xffffffff00000000ULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4) 
               | (IData)((IData)(((1U & (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                                                 >> 4U)))
                                   ? (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                                                              >> 0x1fU))))) 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(
                                                         (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3 
                                                          >> 0x10U))))
                                   : (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3)))));
        vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4)));
    }
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result 
        = (vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
           * vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw 
        = VL_DIVS_III(32, (IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result), (IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw 
        = VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result), (IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result));
    VL_EXTEND_WQ(68,64, __Vtemp681, (vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     & vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[0U] 
        = (IData)((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                   | vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[1U] 
        = (IData)(((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                    | vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result) 
                   >> 0x20U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[2U] 
        = (2U | ((IData)((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                          ^ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)) 
                 << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[3U] 
        = (((IData)((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                     ^ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)) 
            >> 0x1cU) | ((IData)(((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   ^ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[4U] 
        = (0x10U | ((__Vtemp681[0U] << 8U) | ((IData)(
                                                      ((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                                        ^ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[5U] 
        = ((__Vtemp681[0U] >> 0x18U) | (__Vtemp681[1U] 
                                        << 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[6U] 
        = ((__Vtemp681[1U] >> 0x18U) | (__Vtemp681[2U] 
                                        << 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub 
        = (1ULL + (vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                   + (~ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd 
        = (vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
           + vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result);
    VL_EXTEND_WQ(68,64, __Vtemp686, (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result))));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result 
                   >> 0x20U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[2U] 
        = (1U | (__Vtemp686[0U] << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[3U] 
        = ((__Vtemp686[0U] >> 0x1cU) | (__Vtemp686[1U] 
                                        << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[4U] 
        = ((__Vtemp686[1U] >> 0x1cU) | (__Vtemp686[2U] 
                                        << 4U));
    VL_EXTEND_WQ(68,64, __Vtemp689, (((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw))));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[0U] 
        = (IData)((((QData)((IData)((- (IData)((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw))));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[1U] 
        = (IData)(((((QData)((IData)((- (IData)((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw))) 
                   >> 0x20U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[2U] 
        = (1U | (__Vtemp689[0U] << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[3U] 
        = ((__Vtemp689[0U] >> 0x1cU) | (__Vtemp689[1U] 
                                        << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[4U] 
        = ((__Vtemp689[1U] >> 0x1cU) | (__Vtemp689[2U] 
                                        << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[0U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[1U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[2U] 
                         >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[3U] 
                         >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[4U] 
                   >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[5U] 
            << 0x18U) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[4U] 
                         >> 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[6U] 
            << 0x18U) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[5U] 
                         >> 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4[6U] 
                   >> 8U));
    VL_EXTEND_WQ(68,64, __Vtemp701, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd);
    __Vtemp709[5U] = ((0xfU & ((IData)((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd)))) 
                               >> 0x18U)) | ((0xf0U 
                                              & ((IData)(
                                                         (((QData)((IData)(
                                                                           (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd 
                                                                                >> 0x1fU))))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd)))) 
                                                 >> 0x18U)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd 
                                                                                >> 0x1fU))))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd))) 
                                                         >> 0x20U)) 
                                                << 8U)));
    __Vtemp709[6U] = (0x200U | ((0xfU & ((IData)(((
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd))) 
                                                  >> 0x20U)) 
                                         >> 0x18U)) 
                                | (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub) 
                                    << 0xcU) | (0xf0U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd 
                                                                                >> 0x1fU))))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd))) 
                                                            >> 0x20U)) 
                                                   >> 0x18U)))));
    __Vtemp709[7U] = ((0xfU & ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub) 
                               >> 0x14U)) | ((0xf0U 
                                              & ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub) 
                                                 >> 0x14U)) 
                                             | ((0xf00U 
                                                 & ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub) 
                                                    >> 0x14U)) 
                                                | ((IData)(
                                                           (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub 
                                                            >> 0x20U)) 
                                                   << 0xcU))));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[0U] 
        = (IData)((0xfffffffffffffffeULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[1U] 
        = (IData)(((0xfffffffffffffffeULL & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd) 
                   >> 0x20U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[2U] 
        = (4U | ((IData)((((QData)((IData)((- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub 
                                                                  >> 0x1fU))))))) 
                           << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub)))) 
                 << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[3U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub)))) 
            >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub))) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[4U] 
        = (0x30U | (((IData)((((QData)((IData)((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd 
                                                                      >> 0x1fU))))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd)))) 
                     << 8U) | ((IData)(((((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub))) 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[5U] 
        = __Vtemp709[5U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[6U] 
        = __Vtemp709[6U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[7U] 
        = __Vtemp709[7U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[8U] 
        = (0x1000U | ((0xfU & ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub 
                                        >> 0x20U)) 
                               >> 0x14U)) | ((0xf0U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub 
                                                          >> 0x20U)) 
                                                 >> 0x14U)) 
                                             | ((__Vtemp701[0U] 
                                                 << 0x10U) 
                                                | (0xf00U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub 
                                                               >> 0x20U)) 
                                                      >> 0x14U))))));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[9U] 
        = ((0xfU & (__Vtemp701[0U] >> 0x10U)) | ((0xf0U 
                                                  & (__Vtemp701[0U] 
                                                     >> 0x10U)) 
                                                 | ((0xff00U 
                                                     & (__Vtemp701[0U] 
                                                        >> 0x10U)) 
                                                    | (__Vtemp701[1U] 
                                                       << 0x10U))));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[0xaU] 
        = ((0xfU & (__Vtemp701[1U] >> 0x10U)) | ((0xf0U 
                                                  & (__Vtemp701[1U] 
                                                     >> 0x10U)) 
                                                 | ((0xff00U 
                                                     & (__Vtemp701[1U] 
                                                        >> 0x10U)) 
                                                    | (__Vtemp701[2U] 
                                                       << 0x10U))));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[0U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[1U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[2U] 
                         >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[3U] 
                         >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4[4U] 
                   >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[0U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[1U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[2U] 
                         >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[3U] 
                         >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4[4U] 
                   >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[0U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[1U];
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[2U] 
                         >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[3U] 
                         >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[4U] 
                   >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[5U] 
            << 0x18U) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[4U] 
                         >> 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[6U] 
            << 0x18U) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[5U] 
                         >> 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[6U] 
                   >> 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[7U] 
            << 0x14U) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[6U] 
                         >> 0xcU));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[8U] 
            << 0x14U) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[7U] 
                         >> 0xcU));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[8U] 
                   >> 0xcU));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[9U] 
            << 0x10U) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[8U] 
                         >> 0x10U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[0xaU] 
            << 0x10U) | (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[9U] 
                         >> 0x10U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4[0xaU] 
                   >> 0x10U));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                               == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
           == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out = 
        ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit)
          ? vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out
          : 0ULL);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[3U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[4U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                               == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
           == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit)
                                                   ? vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out
                                                   : 0ULL);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                               == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
           == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit)
                                                   ? vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out
                                                   : 0ULL);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                               == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
           == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Insider_Control_Connector) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out = 
        ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit)
          ? vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out
          : vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd);
    VL_EXTEND_WQ(68,64, __Vtemp777, vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out);
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result);
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result 
                   >> 0x20U));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[2U] 
        = (7U | ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out) 
                 << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out) 
            >> 0x1cU) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[4U] 
        = (0x60U | (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out) 
                     << 8U) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[5U] 
        = (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out) 
            >> 0x18U) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out 
                                  >> 0x20U)) << 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[6U] 
        = (0x500U | (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out) 
                      << 0xcU) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[7U] 
        = (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out) 
            >> 0x14U) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[8U] 
        = (0x4000U | (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out) 
                       << 0x10U) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out 
                                             >> 0x20U)) 
                                    >> 0x14U)));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[9U] 
        = (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out) 
            >> 0x10U) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out 
                                  >> 0x20U)) << 0x10U));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xaU] 
        = (0x30000U | (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out) 
                        << 0x14U) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out 
                                              >> 0x20U)) 
                                     >> 0x10U)));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xbU] 
        = (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out) 
            >> 0xcU) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out 
                                 >> 0x20U)) << 0x14U));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xcU] 
        = (0x200000U | (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out) 
                         << 0x18U) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out 
                                               >> 0x20U)) 
                                      >> 0xcU)));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xdU] 
        = (((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out) 
            >> 8U) | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out 
                               >> 0x20U)) << 0x18U));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xeU] 
        = (0x1000000U | ((__Vtemp777[0U] << 0x1cU) 
                         | ((IData)((vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out 
                                     >> 0x20U)) >> 8U)));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xfU] 
        = ((__Vtemp777[0U] >> 4U) | (__Vtemp777[1U] 
                                     << 0x1cU));
    vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0x10U] 
        = ((__Vtemp777[1U] >> 4U) | (__Vtemp777[2U] 
                                     << 0x1cU));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0U];
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[1U];
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[2U] 
                         >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[3U] 
                         >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[4U] 
                   >> 4U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[5U] 
            << 0x18U) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[4U] 
                         >> 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[6U] 
            << 0x18U) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[5U] 
                         >> 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[6U] 
                   >> 8U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[7U] 
            << 0x14U) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[6U] 
                         >> 0xcU));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[8U] 
            << 0x14U) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[7U] 
                         >> 0xcU));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[8U] 
                   >> 0xcU));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[9U] 
            << 0x10U) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[8U] 
                         >> 0x10U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xaU] 
            << 0x10U) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[9U] 
                         >> 0x10U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xaU] 
                   >> 0x10U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xbU] 
            << 0xcU) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xaU] 
                        >> 0x14U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xcU] 
            << 0xcU) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xbU] 
                        >> 0x14U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xcU] 
                   >> 0x14U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xdU] 
            << 8U) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xcU] 
                      >> 0x18U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xeU] 
            << 8U) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xdU] 
                      >> 0x18U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfU & (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xeU] 
                   >> 0x18U));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xfU] 
            << 4U) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xeU] 
                      >> 0x1cU));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0x10U] 
            << 4U) | (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0xfU] 
                      >> 0x1cU));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[7U][2U] 
        = (vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4[0x10U] 
           >> 0x1cU);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[3U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[4U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[5U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[6U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[7U] 
        = (0xfU & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU_Control_wire) 
                               == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU_Control_wire) 
           == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU_Control_wire) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU_Control_wire) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU_Control_wire) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU_Control_wire) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU_Control_wire) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU_Control_wire) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU_Control_wire) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU_Control_wire) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU_Control_wire) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU_Control_wire) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU_Control_wire) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU_Control_wire) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU_Control_wire) 
                                  == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU_Control_wire) 
              == vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__ALU_Result_Connector = ((IData)(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit)
                                               ? vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out
                                               : 0ULL);
    vlSelf->ALU_Result = vlSelf->top__DOT__ALU_Result_Connector;
    vlSelf->top__DOT__C_NPC_Branch_Jump_Connector = 
        ((2U & (IData)(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector)) 
         | (((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
               | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
              | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
             & (IData)(vlSelf->top__DOT__ALU_Result_Connector)) 
            | (0x6fU == (0x7fU & vlSelf->instr_in))));
    VL_EXTEND_WQ(66,64, __Vtemp846, (4ULL + vlSelf->top__DOT__PC_Wire));
    vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__ALU_Result_Connector);
    vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__ALU_Result_Connector 
                   >> 0x20U));
    vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[2U] 
        = (2U | ((IData)((vlSelf->top__DOT__PC_Wire 
                          + vlSelf->top__DOT__SEXT_Connector)) 
                 << 2U));
    vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[3U] 
        = (((IData)((vlSelf->top__DOT__PC_Wire + vlSelf->top__DOT__SEXT_Connector)) 
            >> 0x1eU) | ((IData)(((vlSelf->top__DOT__PC_Wire 
                                   + vlSelf->top__DOT__SEXT_Connector) 
                                  >> 0x20U)) << 2U));
    vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[4U] 
        = (4U | ((__Vtemp846[0U] << 4U) | ((IData)(
                                                   ((vlSelf->top__DOT__PC_Wire 
                                                     + vlSelf->top__DOT__SEXT_Connector) 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
    vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[5U] 
        = ((__Vtemp846[0U] >> 0x1cU) | (__Vtemp846[1U] 
                                        << 4U));
    vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[6U] 
        = ((__Vtemp846[1U] >> 0x1cU) | (__Vtemp846[2U] 
                                        << 4U));
    if ((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
               | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
              | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
             | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
            | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
           | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
          | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))) {
        if ((8U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))) {
            if ((8U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))) {
                if ((8U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))) {
                    if ((4U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))) {
                        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__ALU_Result_Connector, vlSelf->top__DOT__RS2_Connector, 8U);
                    } else if ((2U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))) {
                        if ((1U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))) {
                            Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__ALU_Result_Connector, 
                                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__RS2_Connector 
                                                                                >> 7U)))))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__RS2_Connector))))), 1U);
                        } else {
                            Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__ALU_Result_Connector, 
                                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__RS2_Connector 
                                                                                >> 0xfU)))))) 
                                                                                << 0x10U) 
                                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->top__DOT__RS2_Connector))))), 2U);
                        }
                    } else if ((1U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))) {
                        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__ALU_Result_Connector, 
                                                                               (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__RS2_Connector 
                                                                                >> 0x1fU))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT__RS2_Connector))), 4U);
                    } else {
                        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__ALU_Result_Connector, vlSelf->top__DOT__RS2_Connector, 8U);
                    }
                } else {
                    Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__ALU_Result_Connector, vlSelf->top__DOT__RS2_Connector, 8U);
                }
            } else {
                vlSelf->top__DOT__MEM_Result_Connector 
                    = vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM;
            }
        } else {
            Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__ALU_Result_Connector, vlSelf->__Vtask_pmem_read__33__rdata);
            vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM 
                = vlSelf->__Vtask_pmem_read__33__rdata;
            vlSelf->top__DOT__MEM_Result_Connector 
                = ((8U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))
                    ? vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM
                    : ((4U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))
                        ? ((2U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))
                            ? vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM
                            : ((1U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))
                                ? vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM
                                : (((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM 
                                                                   >> 0xfU)))))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM)))))))
                        : ((2U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))
                            ? ((1U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM)))
                                : (QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM)))))
                            : ((1U & (IData)(vlSelf->top__DOT__MEM_Ctrl_connector))
                                ? (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM))))
                                : vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM))));
        }
    } else {
        vlSelf->top__DOT__MEM_Result_Connector = 0ULL;
    }
    vlSelf->C_NPC_Branch_Jump_Connector_result = vlSelf->top__DOT__C_NPC_Branch_Jump_Connector;
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[0U];
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[1U];
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[2U]);
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[3U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[2U] 
                         >> 2U));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[4U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[3U] 
                         >> 2U));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[4U] 
                 >> 2U));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[5U] 
            << 0x1cU) | (vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[4U] 
                         >> 4U));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[6U] 
            << 0x1cU) | (vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[5U] 
                         >> 4U));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4[6U] 
                 >> 4U));
    VL_EXTEND_WQ(65,64, __Vtemp860, vlSelf->top__DOT__ALU_Result_Connector);
    vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__MEM_Result_Connector);
    vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__MEM_Result_Connector 
                   >> 0x20U));
    vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[2U] 
        = (1U | (__Vtemp860[0U] << 1U));
    vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[3U] 
        = ((__Vtemp860[0U] >> 0x1fU) | (__Vtemp860[1U] 
                                        << 1U));
    vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[4U] 
        = ((__Vtemp860[1U] >> 0x1fU) | (__Vtemp860[2U] 
                                        << 1U));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[0U];
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[1U];
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[2U]);
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[3U] 
            << 0x1fU) | (vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[2U] 
                         >> 1U));
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[4U] 
            << 0x1fU) | (vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[3U] 
                         >> 1U));
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4[4U] 
                 >> 1U));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector) 
                               == vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector) 
           == vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector) 
                                  == vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector) 
              == vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector) 
                                  == vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector) 
              == vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__PC_Next_Next = ((IData)(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit)
                                       ? vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out
                                       : 0ULL);
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__C_ALU_MEM_Connector) 
                               == vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__C_ALU_MEM_Connector) 
           == vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__C_ALU_MEM_Connector) 
                                  == vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__C_ALU_MEM_Connector) 
              == vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__MUX_ALU_MEM_Result = ((IData)(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__hit)
                                             ? vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__lut_out
                                             : 0ULL);
    VL_EXTEND_WQ(65,64, __Vtemp885, vlSelf->top__DOT__MUX_ALU_MEM_Result);
    vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[0U] 
        = (IData)((4ULL + vlSelf->top__DOT__PC_Wire));
    vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[1U] 
        = (IData)(((4ULL + vlSelf->top__DOT__PC_Wire) 
                   >> 0x20U));
    vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[2U] 
        = (1U | (__Vtemp885[0U] << 1U));
    vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[3U] 
        = ((__Vtemp885[0U] >> 0x1fU) | (__Vtemp885[1U] 
                                        << 1U));
    vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[4U] 
        = ((__Vtemp885[1U] >> 0x1fU) | (__Vtemp885[2U] 
                                        << 1U));
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[0U];
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[1U];
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[2U]);
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[3U] 
            << 0x1fU) | (vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[2U] 
                         >> 1U));
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[4U] 
            << 0x1fU) | (vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[3U] 
                         >> 1U));
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4[4U] 
                 >> 1U));
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__C_ALU_NPC_In_Connector) 
                               == vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__C_ALU_NPC_In_Connector) 
           == vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__C_ALU_NPC_In_Connector) 
                                  == vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__C_ALU_NPC_In_Connector) 
              == vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__Write_Back_Reg = ((IData)(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__hit)
                                         ? vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__lut_out
                                         : 0ULL);
}

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
    vlSelf->top__DOT__HY_CU__DOT__remw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sraw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sllw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__srlw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__srliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__slliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sraiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT___or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT___and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HY_CU__DOT__bltu = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM = VL_RAND_RESET_Q(64);
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
    VL_RAND_RESET_W(136, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
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
    vlSelf->__Vtask_pmem_read__33__rdata = 0;
    vlSelf->__Vchglast__TOP__top__DOT__HY_MEM__DOT__Data_From_MEM = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
