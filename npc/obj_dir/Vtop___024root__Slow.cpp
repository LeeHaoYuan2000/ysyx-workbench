// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
    , __Vm_mtaskstate_9(1U), __Vm_mtaskstate_final(2U)
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

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp4;
    VlWide<7>/*223:0*/ __Vtemp6;
    VlWide<9>/*287:0*/ __Vtemp8;
    // Body
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[0U] = 0xdU;
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[1U] = 0x14U;
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[2U] = 0x23U;
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[3U] = 0x42U;
    vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[4U] = 0x81U;
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
    vlSelf->top__DOT__HY_CU__DOT__ld = (IData)((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__lw = (IData)((0x2003U 
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
    vlSelf->top__DOT__HY_CU__DOT__andi = (IData)((0x7013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__xori = (IData)((0x4013U 
                                                  == 
                                                  (0x707fU 
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
    vlSelf->top__DOT__HY_CU__DOT__jalr = (IData)((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000 
        = (0x20U == (vlSelf->instr_in >> 0x19U));
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
    vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2 
        = ((((((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
              | (0x6fU == (0x7fU & vlSelf->instr_in))) 
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
    __Vtemp4[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                  (vlSelf->instr_in 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (vlSelf->instr_in 
                                                                 >> 0x14U)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | (0x38U 
                                                  & ((IData)(
                                                             ((((- (QData)((IData)(
                                                                                (vlSelf->instr_in 
                                                                                >> 0x1fU)))) 
                                                                << 0xcU) 
                                                               | (QData)((IData)(
                                                                                (vlSelf->instr_in 
                                                                                >> 0x14U)))) 
                                                              >> 0x20U)) 
                                                     >> 0x1aU))));
    __Vtemp6[3U] = ((7U & ((IData)((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->instr_in 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->instr_in))))) 
                           >> 0x1aU)) | ((0x38U & ((IData)(
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
    __Vtemp6[4U] = (0x80U | ((7U & ((IData)(((((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->instr_in 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->instr_in)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | (((IData)(
                                                           (((- (QData)((IData)(
                                                                                (vlSelf->instr_in 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->instr_in 
                                                                               >> 0x14U))))) 
                                                   << 9U) 
                                                  | (0x38U 
                                                     & ((IData)(
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
    __Vtemp6[5U] = ((7U & ((IData)((((- (QData)((IData)(
                                                        (vlSelf->instr_in 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->instr_in 
                                                                 >> 0x14U))))) 
                           >> 0x17U)) | ((0x38U & ((IData)(
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
    __Vtemp6[6U] = ((7U & ((IData)(((((- (QData)((IData)(
                                                         (vlSelf->instr_in 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->instr_in 
                                                                  >> 0x14U)))) 
                                    >> 0x20U)) >> 0x17U)) 
                    | (__Vtemp4[4U] << 3U));
    __Vtemp8[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS) 
                                                                      >> 0xbU))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | (((IData)(
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (vlSelf->instr_in 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffff000U 
                                                                               & vlSelf->instr_in))))) 
                                                   << 9U) 
                                                  | (0x38U 
                                                     & ((IData)(
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
        = __Vtemp8[4U];
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[7U] 
        = ((7U & ((IData)((((QData)((IData)((- (IData)(
                                                       (vlSelf->instr_in 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->instr_in))))) 
                  >> 0x17U)) | (__Vtemp6[3U] << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[8U] 
        = ((__Vtemp6[3U] >> 0x1dU) | (__Vtemp6[4U] 
                                      << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[9U] 
        = ((__Vtemp6[4U] >> 0x1dU) | (__Vtemp6[5U] 
                                      << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[0xaU] 
        = ((__Vtemp6[5U] >> 0x1dU) | (__Vtemp6[6U] 
                                      << 3U));
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
    vlSelf->top__DOT__HY_CU__DOT__func_signal = (((
                                                   (((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub)) 
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
                                                                      | ((((0x6fU 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->instr_in)) 
                                                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr)) 
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
    vlSelf->top__DOT__PC_Next_Wire = (4ULL + vlSelf->top__DOT__PC_Wire);
    vlSelf->PC_Test = vlSelf->top__DOT__PC_Wire;
    vlSelf->PC_Test = vlSelf->top__DOT__PC_Wire;
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
    vlSelf->SEXT_result = ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit)
                            ? vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out
                            : 0ULL);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
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
    vlSelf->top__DOT__PC_Wire = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__PC_Next_Wire = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__SEXT_Control = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ALU_Control_wire = VL_RAND_RESET_I(4);
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
    vlSelf->top__DOT__HY_CU__DOT__func_signal = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2 = VL_RAND_RESET_I(5);
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
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
