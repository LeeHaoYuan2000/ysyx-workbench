// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
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
    vlSelf->top__DOT__HY_CU__DOT__ld = (IData)((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000 
        = (0x20U == (vlSelf->instr_in >> 0x19U));
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__3\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__HY_CU__DOT__addi = (IData)((0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_in)));
    vlSelf->top__DOT__HY_CU__DOT__addiw = (IData)((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_in)));
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__6\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__7\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__8\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__9\n"); );
    // Body
    vlSelf->top__DOT__PC_Wire = ((IData)(vlSelf->rst)
                                  ? 0x80000000ULL : vlSelf->top__DOT__PC_Next_Wire);
    vlSelf->top__DOT__PC_Next_Wire = (4ULL + vlSelf->top__DOT__PC_Wire);
    vlSelf->PC_Test = vlSelf->top__DOT__PC_Wire;
    vlSelf->PC_Test = vlSelf->top__DOT__PC_Wire;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__10\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__11\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp74;
    VlWide<7>/*223:0*/ __Vtemp76;
    VlWide<9>/*287:0*/ __Vtemp78;
    // Body
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
    __Vtemp74[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
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
    __Vtemp76[3U] = ((7U & ((IData)((((QData)((IData)(
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
    __Vtemp76[4U] = (0x80U | ((7U & ((IData)(((((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSelf->instr_in 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->instr_in)))) 
                                              >> 0x20U)) 
                                     >> 0x1aU)) | (
                                                   ((IData)(
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
    __Vtemp76[5U] = ((7U & ((IData)((((- (QData)((IData)(
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
    __Vtemp76[6U] = ((7U & ((IData)(((((- (QData)((IData)(
                                                          (vlSelf->instr_in 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->instr_in 
                                                                   >> 0x14U)))) 
                                     >> 0x20U)) >> 0x17U)) 
                     | (__Vtemp74[4U] << 3U));
    __Vtemp78[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS) 
                                                                       >> 0xbU))))) 
                                                << 0xcU) 
                                               | (QData)((IData)(vlSelf->top__DOT__Sign_Extend__DOT__immS))) 
                                              >> 0x20U)) 
                                     >> 0x1aU)) | (
                                                   ((IData)(
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
        = __Vtemp78[4U];
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[7U] 
        = ((7U & ((IData)((((QData)((IData)((- (IData)(
                                                       (vlSelf->instr_in 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->instr_in))))) 
                  >> 0x17U)) | (__Vtemp76[3U] << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[8U] 
        = ((__Vtemp76[3U] >> 0x1dU) | (__Vtemp76[4U] 
                                       << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[9U] 
        = ((__Vtemp76[4U] >> 0x1dU) | (__Vtemp76[5U] 
                                       << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[0xaU] 
        = ((__Vtemp76[5U] >> 0x1dU) | (__Vtemp76[6U] 
                                       << 3U));
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__12\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__13\n"); );
    // Body
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

void Vtop___024root____Vthread_0(void* voidSelf, bool even_cycle);
void Vtop___024root____Vthread_1(void* voidSelf, bool even_cycle);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    vlSymsp->__Vm_even_cycle = !vlSymsp->__Vm_even_cycle;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&Vtop___024root____Vthread_0, vlSelf, vlSymsp->__Vm_even_cycle);
    Vtop___024root____Vthread_1(vlSelf, vlSymsp->__Vm_even_cycle);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

void Vtop___024root____Vthread_0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vthread_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(11);
    Vtop___024root___combo__TOP__11(vlSelf);
    vlSelf->__Vm_traceActivity[7U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_9.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(9);
    Vtop___024root___combo__TOP__13(vlSelf);
    vlSelf->__Vm_traceActivity[9U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final.signalUpstreamDone(even_cycle);
}

void Vtop___024root____Vthread_1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vthread_1\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(1);
    Vtop___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(6);
    Vtop___024root___combo__TOP__7(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(7);
    Vtop___024root___combo__TOP__8(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(4);
    Vtop___024root___combo__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(2);
    Vtop___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(3);
    Vtop___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(5);
    Vtop___024root___combo__TOP__6(vlSelf);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(10);
    Vtop___024root___combo__TOP__10(vlSelf);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_9.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(12);
    Vtop___024root___combo__TOP__12(vlSelf);
    vlSelf->__Vm_traceActivity[8U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(8);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__9(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final.signalUpstreamDone(even_cycle);
}
