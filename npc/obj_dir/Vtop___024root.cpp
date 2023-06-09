// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

extern const VlUnpacked<IData/*31:0*/, 2> Vtop__ConstPool__TABLE_2783c320_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_b006366b_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_afb220d8_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_af3e8911_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_afa9feed_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_afb6c94c_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_afa22f57_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_afae5158_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c50b7f36_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c43873eb_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c5138dd6_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c50723d1_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c51d6b38_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c508dbcc_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c523ff1e_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c5114bb3_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c52c5e35_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c3db021e_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c5346ba1_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c526d0e8_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c52782cc_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c533eb9d_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c52f93a2_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c43b949d_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c3cdbeef_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c3fa1baa_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c3d5cda3_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c3c378a4_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c3ddc9da_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c3c99e89_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c3e749a4_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c3d1a4c5_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop__ConstPool__TABLE_c3dfa8f8_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp641;
    VlWide<63>/*2015:0*/ __Vtemp699;
    VlWide<65>/*2079:0*/ __Vtemp700;
    VlWide<65>/*2079:0*/ __Vtemp701;
    VlWide<67>/*2143:0*/ __Vtemp702;
    VlWide<69>/*2207:0*/ __Vtemp703;
    VlWide<3>/*95:0*/ __Vtemp704;
    VlWide<63>/*2015:0*/ __Vtemp762;
    VlWide<65>/*2079:0*/ __Vtemp763;
    VlWide<65>/*2079:0*/ __Vtemp764;
    VlWide<67>/*2143:0*/ __Vtemp765;
    VlWide<69>/*2207:0*/ __Vtemp766;
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__PC_Wire = 0x80000000ULL;
        __Vtableidx1 = 1U;
    } else {
        vlSelf->top__DOT__PC_Wire = vlSelf->top__DOT__PC_Next_Wire;
        __Vtableidx1 = 0U;
    }
    if ((1U & Vtop__ConstPool__TABLE_2783c320_0[__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__Zero = Vtop__ConstPool__TABLE_b006366b_0
            [__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_2783c320_0[__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__ra = Vtop__ConstPool__TABLE_afb220d8_0
            [__Vtableidx1];
    }
    if ((4U & Vtop__ConstPool__TABLE_2783c320_0[__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__sp = Vtop__ConstPool__TABLE_af3e8911_0
            [__Vtableidx1];
    }
    if ((8U & Vtop__ConstPool__TABLE_2783c320_0[__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__gp = Vtop__ConstPool__TABLE_afa9feed_0
            [__Vtableidx1];
    }
    if ((0x10U & Vtop__ConstPool__TABLE_2783c320_0[__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__tp = Vtop__ConstPool__TABLE_afb6c94c_0
            [__Vtableidx1];
    }
    if ((0x20U & Vtop__ConstPool__TABLE_2783c320_0[__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__t0 = Vtop__ConstPool__TABLE_afa22f57_0
            [__Vtableidx1];
    }
    if ((0x40U & Vtop__ConstPool__TABLE_2783c320_0[__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__t1 = Vtop__ConstPool__TABLE_afae5158_0
            [__Vtableidx1];
    }
    if ((0x80U & Vtop__ConstPool__TABLE_2783c320_0[__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__t2 = Vtop__ConstPool__TABLE_c50b7f36_0
            [__Vtableidx1];
    }
    if ((0x100U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s0 = Vtop__ConstPool__TABLE_c43873eb_0
            [__Vtableidx1];
    }
    if ((0x200U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s1 = Vtop__ConstPool__TABLE_c5138dd6_0
            [__Vtableidx1];
    }
    if ((0x400U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__a0 = Vtop__ConstPool__TABLE_c50723d1_0
            [__Vtableidx1];
    }
    if ((0x800U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__a1 = Vtop__ConstPool__TABLE_c51d6b38_0
            [__Vtableidx1];
    }
    if ((0x1000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__a2 = Vtop__ConstPool__TABLE_c508dbcc_0
            [__Vtableidx1];
    }
    if ((0x2000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__a3 = Vtop__ConstPool__TABLE_c523ff1e_0
            [__Vtableidx1];
    }
    if ((0x4000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__a4 = Vtop__ConstPool__TABLE_c5114bb3_0
            [__Vtableidx1];
    }
    if ((0x8000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__a5 = Vtop__ConstPool__TABLE_c52c5e35_0
            [__Vtableidx1];
    }
    if ((0x10000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__a6 = Vtop__ConstPool__TABLE_c3db021e_0
            [__Vtableidx1];
    }
    if ((0x20000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__a7 = Vtop__ConstPool__TABLE_c5346ba1_0
            [__Vtableidx1];
    }
    if ((0x40000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s2 = Vtop__ConstPool__TABLE_c526d0e8_0
            [__Vtableidx1];
    }
    if ((0x80000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s3 = Vtop__ConstPool__TABLE_c52782cc_0
            [__Vtableidx1];
    }
    if ((0x100000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s4 = Vtop__ConstPool__TABLE_c533eb9d_0
            [__Vtableidx1];
    }
    if ((0x200000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s5 = Vtop__ConstPool__TABLE_c52f93a2_0
            [__Vtableidx1];
    }
    if ((0x400000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s6 = Vtop__ConstPool__TABLE_c43b949d_0
            [__Vtableidx1];
    }
    if ((0x800000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s7 = Vtop__ConstPool__TABLE_c3cdbeef_0
            [__Vtableidx1];
    }
    if ((0x1000000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s8 = Vtop__ConstPool__TABLE_c3fa1baa_0
            [__Vtableidx1];
    }
    if ((0x2000000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s9 = Vtop__ConstPool__TABLE_c3d5cda3_0
            [__Vtableidx1];
    }
    if ((0x4000000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s10 = Vtop__ConstPool__TABLE_c3c378a4_0
            [__Vtableidx1];
    }
    if ((0x8000000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__s11 = Vtop__ConstPool__TABLE_c3ddc9da_0
            [__Vtableidx1];
    }
    if ((0x10000000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__t3 = Vtop__ConstPool__TABLE_c3c99e89_0
            [__Vtableidx1];
    }
    if ((0x20000000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__t4 = Vtop__ConstPool__TABLE_c3e749a4_0
            [__Vtableidx1];
    }
    if ((0x40000000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__t5 = Vtop__ConstPool__TABLE_c3d1a4c5_0
            [__Vtableidx1];
    }
    if ((0x80000000U & Vtop__ConstPool__TABLE_2783c320_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__HY_RegFile__DOT__t6 = Vtop__ConstPool__TABLE_c3dfa8f8_0
            [__Vtableidx1];
    }
    vlSelf->top__DOT__PC_Next_Wire = (4ULL + vlSelf->top__DOT__PC_Wire);
    vlSelf->PC_Test = vlSelf->top__DOT__PC_Wire;
    vlSelf->PC_Test = vlSelf->top__DOT__PC_Wire;
    VL_EXTEND_WQ(69,64, __Vtemp641, vlSelf->top__DOT__HY_RegFile__DOT__Zero);
    __Vtemp699[0U] = (0x1fU | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t5) 
                               << 5U));
    __Vtemp699[1U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t5) 
                       >> 0x1bU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t5 
                                             >> 0x20U)) 
                                    << 5U));
    __Vtemp699[2U] = (0x3c0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t4) 
                                 << 0xaU) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__t5 
                                                      >> 0x20U)) 
                                             >> 0x1bU)));
    __Vtemp699[3U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t4) 
                       >> 0x16U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t4 
                                             >> 0x20U)) 
                                    << 0xaU));
    __Vtemp699[4U] = (0x7400U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t3) 
                                  << 0xfU) | ((IData)(
                                                      (vlSelf->top__DOT__HY_RegFile__DOT__t4 
                                                       >> 0x20U)) 
                                              >> 0x16U)));
    __Vtemp699[5U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t3) 
                       >> 0x11U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t3 
                                             >> 0x20U)) 
                                    << 0xfU));
    __Vtemp699[6U] = (0xe0000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s11) 
                                   << 0x14U) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__t3 
                                                         >> 0x20U)) 
                                                >> 0x11U)));
    __Vtemp699[7U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s11) 
                       >> 0xcU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s11 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp699[8U] = (0x1b00000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s10) 
                                     << 0x19U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__s11 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    __Vtemp699[9U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s10) 
                       >> 7U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s10 
                                          >> 0x20U)) 
                                 << 0x19U));
    __Vtemp699[0xaU] = (0x34000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s9) 
                                        << 0x1eU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s10 
                                                 >> 0x20U)) 
                                        >> 7U)));
    __Vtemp699[0xbU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s9) 
                         >> 2U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s9 
                                            >> 0x20U)) 
                                   << 0x1eU));
    __Vtemp699[0xcU] = (0x40000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s9 
                                                >> 0x20U)) 
                                       >> 2U));
    __Vtemp699[0xdU] = (6U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s8) 
                              << 3U));
    __Vtemp699[0xeU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s8) 
                         >> 0x1dU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s8 
                                               >> 0x20U)) 
                                      << 3U));
    __Vtemp699[0xfU] = (0xc0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s7) 
                                  << 8U) | ((IData)(
                                                    (vlSelf->top__DOT__HY_RegFile__DOT__s8 
                                                     >> 0x20U)) 
                                            >> 0x1dU)));
    __Vtemp699[0x10U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s7) 
                          >> 0x18U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s7 
                                                >> 0x20U)) 
                                       << 8U));
    __Vtemp699[0x11U] = (0x1700U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s6) 
                                     << 0xdU) | ((IData)(
                                                         (vlSelf->top__DOT__HY_RegFile__DOT__s7 
                                                          >> 0x20U)) 
                                                 >> 0x18U)));
    __Vtemp699[0x12U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s6) 
                          >> 0x13U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s6 
                                                >> 0x20U)) 
                                       << 0xdU));
    __Vtemp699[0x13U] = (0x2c000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s5) 
                                      << 0x12U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__s6 
                                                            >> 0x20U)) 
                                                   >> 0x13U)));
    __Vtemp699[0x14U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s5) 
                          >> 0xeU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s5 
                                               >> 0x20U)) 
                                      << 0x12U));
    __Vtemp699[0x15U] = (0x540000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s4) 
                                       << 0x17U) | 
                                      ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s5 
                                                >> 0x20U)) 
                                       >> 0xeU)));
    __Vtemp699[0x16U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s4) 
                          >> 9U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s4 
                                             >> 0x20U)) 
                                    << 0x17U));
    __Vtemp699[0x17U] = (0xa000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s3) 
                                        << 0x1cU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s4 
                                                 >> 0x20U)) 
                                        >> 9U)));
    __Vtemp699[0x18U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s3) 
                          >> 4U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s3 
                                             >> 0x20U)) 
                                    << 0x1cU));
    __Vtemp699[0x19U] = (0x30000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s3 
                                                 >> 0x20U)) 
                                        >> 4U));
    __Vtemp699[0x1aU] = (1U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s2) 
                               << 1U));
    __Vtemp699[0x1bU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s2) 
                          >> 0x1fU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s2 
                                                >> 0x20U)) 
                                       << 1U));
    __Vtemp699[0x1cU] = (0x24U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a7) 
                                   << 6U) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__s2 
                                                      >> 0x20U)) 
                                             >> 0x1fU)));
    __Vtemp699[0x1dU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a7) 
                          >> 0x1aU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a7 
                                                >> 0x20U)) 
                                       << 6U));
    __Vtemp699[0x1eU] = (0x440U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a6) 
                                    << 0xbU) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__a7 
                                                         >> 0x20U)) 
                                                >> 0x1aU)));
    __Vtemp699[0x1fU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a6) 
                          >> 0x15U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a6 
                                                >> 0x20U)) 
                                       << 0xbU));
    __Vtemp699[0x20U] = (0x8000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a5) 
                                     << 0x10U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__a6 
                                                           >> 0x20U)) 
                                                  >> 0x15U)));
    __Vtemp699[0x21U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a5) 
                          >> 0x10U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a5 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp699[0x22U] = (0xf0000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a4) 
                                      << 0x15U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__a5 
                                                            >> 0x20U)) 
                                                   >> 0x10U)));
    __Vtemp699[0x23U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a4) 
                          >> 0xbU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a4 
                                               >> 0x20U)) 
                                      << 0x15U));
    __Vtemp699[0x24U] = (0x1c00000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a3) 
                                        << 0x1aU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a4 
                                                 >> 0x20U)) 
                                        >> 0xbU)));
    __Vtemp699[0x25U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a3) 
                          >> 6U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a3 
                                             >> 0x20U)) 
                                    << 0x1aU));
    __Vtemp699[0x26U] = (0x34000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a2) 
                                         << 0x1fU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__HY_RegFile__DOT__a3 
                                                    >> 0x20U)) 
                                           >> 6U)));
    __Vtemp699[0x27U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a2) 
                          >> 1U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a2 
                                             >> 0x20U)) 
                                    << 0x1fU));
    __Vtemp699[0x28U] = ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a2 
                                  >> 0x20U)) >> 1U);
    __Vtemp699[0x29U] = (6U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a1) 
                               << 4U));
    __Vtemp699[0x2aU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a1) 
                          >> 0x1cU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a1 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp699[0x2bU] = (0xb0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a0) 
                                   << 9U) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__a1 
                                                      >> 0x20U)) 
                                             >> 0x1cU)));
    __Vtemp699[0x2cU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a0) 
                          >> 0x17U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a0 
                                                >> 0x20U)) 
                                       << 9U));
    __Vtemp699[0x2dU] = (0x1400U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s1) 
                                     << 0xeU) | ((IData)(
                                                         (vlSelf->top__DOT__HY_RegFile__DOT__a0 
                                                          >> 0x20U)) 
                                                 >> 0x17U)));
    __Vtemp699[0x2eU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s1) 
                          >> 0x12U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s1 
                                                >> 0x20U)) 
                                       << 0xeU));
    __Vtemp699[0x2fU] = (0x24000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s0) 
                                      << 0x13U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__s1 
                                                            >> 0x20U)) 
                                                   >> 0x12U)));
    __Vtemp699[0x30U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s0) 
                          >> 0xdU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s0 
                                               >> 0x20U)) 
                                      << 0x13U));
    __Vtemp699[0x31U] = (0x400000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t2) 
                                       << 0x18U) | 
                                      ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s0 
                                                >> 0x20U)) 
                                       >> 0xdU)));
    __Vtemp699[0x32U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t2) 
                          >> 8U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t2 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp699[0x33U] = (0x7000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t1) 
                                        << 0x1dU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t2 
                                                 >> 0x20U)) 
                                        >> 8U)));
    __Vtemp699[0x34U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t1) 
                          >> 3U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t1 
                                             >> 0x20U)) 
                                    << 0x1dU));
    __Vtemp699[0x35U] = (0xc0000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t1 
                                                 >> 0x20U)) 
                                        >> 3U));
    __Vtemp699[0x36U] = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t0) 
                         << 2U);
    __Vtemp699[0x37U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t0) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t0 
                                                >> 0x20U)) 
                                       << 2U));
    __Vtemp699[0x38U] = (0x14U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__tp) 
                                   << 7U) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__t0 
                                                      >> 0x20U)) 
                                             >> 0x1eU)));
    __Vtemp699[0x39U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__tp) 
                          >> 0x19U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__tp 
                                                >> 0x20U)) 
                                       << 7U));
    __Vtemp699[0x3aU] = (0x200U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__gp) 
                                    << 0xcU) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__tp 
                                                         >> 0x20U)) 
                                                >> 0x19U)));
    __Vtemp699[0x3bU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__gp) 
                          >> 0x14U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__gp 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp699[0x3cU] = (0x3000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__sp) 
                                     << 0x11U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__gp 
                                                           >> 0x20U)) 
                                                  >> 0x14U)));
    __Vtemp699[0x3dU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__sp) 
                          >> 0xfU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__sp 
                                               >> 0x20U)) 
                                      << 0x11U));
    __Vtemp699[0x3eU] = (0x40000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__sp 
                                              >> 0x20U)) 
                                     >> 0xfU));
    VL_CONCAT_WQW(2070,64,2006, __Vtemp700, vlSelf->top__DOT__HY_RegFile__DOT__ra, __Vtemp699);
    VL_CONCAT_WIW(2075,5,2070, __Vtemp701, 1U, __Vtemp700);
    VL_CONCAT_WWW(2144,69,2075, __Vtemp702, __Vtemp641, __Vtemp701);
    VL_CONCAT_WWQ(2208,2144,64, __Vtemp703, __Vtemp702, vlSelf->top__DOT__HY_RegFile__DOT__t6);
    VL_ASSIGN_W(2208,vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4, __Vtemp703);
    VL_EXTEND_WQ(69,64, __Vtemp704, vlSelf->top__DOT__HY_RegFile__DOT__Zero);
    __Vtemp762[0U] = (0x1fU | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t5) 
                               << 5U));
    __Vtemp762[1U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t5) 
                       >> 0x1bU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t5 
                                             >> 0x20U)) 
                                    << 5U));
    __Vtemp762[2U] = (0x3c0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t4) 
                                 << 0xaU) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__t5 
                                                      >> 0x20U)) 
                                             >> 0x1bU)));
    __Vtemp762[3U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t4) 
                       >> 0x16U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t4 
                                             >> 0x20U)) 
                                    << 0xaU));
    __Vtemp762[4U] = (0x7400U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t3) 
                                  << 0xfU) | ((IData)(
                                                      (vlSelf->top__DOT__HY_RegFile__DOT__t4 
                                                       >> 0x20U)) 
                                              >> 0x16U)));
    __Vtemp762[5U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t3) 
                       >> 0x11U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t3 
                                             >> 0x20U)) 
                                    << 0xfU));
    __Vtemp762[6U] = (0xe0000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s11) 
                                   << 0x14U) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__t3 
                                                         >> 0x20U)) 
                                                >> 0x11U)));
    __Vtemp762[7U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s11) 
                       >> 0xcU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s11 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp762[8U] = (0x1b00000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s10) 
                                     << 0x19U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__s11 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    __Vtemp762[9U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s10) 
                       >> 7U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s10 
                                          >> 0x20U)) 
                                 << 0x19U));
    __Vtemp762[0xaU] = (0x34000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s9) 
                                        << 0x1eU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s10 
                                                 >> 0x20U)) 
                                        >> 7U)));
    __Vtemp762[0xbU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s9) 
                         >> 2U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s9 
                                            >> 0x20U)) 
                                   << 0x1eU));
    __Vtemp762[0xcU] = (0x40000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s9 
                                                >> 0x20U)) 
                                       >> 2U));
    __Vtemp762[0xdU] = (6U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s8) 
                              << 3U));
    __Vtemp762[0xeU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s8) 
                         >> 0x1dU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s8 
                                               >> 0x20U)) 
                                      << 3U));
    __Vtemp762[0xfU] = (0xc0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s7) 
                                  << 8U) | ((IData)(
                                                    (vlSelf->top__DOT__HY_RegFile__DOT__s8 
                                                     >> 0x20U)) 
                                            >> 0x1dU)));
    __Vtemp762[0x10U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s7) 
                          >> 0x18U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s7 
                                                >> 0x20U)) 
                                       << 8U));
    __Vtemp762[0x11U] = (0x1700U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s6) 
                                     << 0xdU) | ((IData)(
                                                         (vlSelf->top__DOT__HY_RegFile__DOT__s7 
                                                          >> 0x20U)) 
                                                 >> 0x18U)));
    __Vtemp762[0x12U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s6) 
                          >> 0x13U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s6 
                                                >> 0x20U)) 
                                       << 0xdU));
    __Vtemp762[0x13U] = (0x2c000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s5) 
                                      << 0x12U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__s6 
                                                            >> 0x20U)) 
                                                   >> 0x13U)));
    __Vtemp762[0x14U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s5) 
                          >> 0xeU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s5 
                                               >> 0x20U)) 
                                      << 0x12U));
    __Vtemp762[0x15U] = (0x540000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s4) 
                                       << 0x17U) | 
                                      ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s5 
                                                >> 0x20U)) 
                                       >> 0xeU)));
    __Vtemp762[0x16U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s4) 
                          >> 9U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s4 
                                             >> 0x20U)) 
                                    << 0x17U));
    __Vtemp762[0x17U] = (0xa000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s3) 
                                        << 0x1cU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s4 
                                                 >> 0x20U)) 
                                        >> 9U)));
    __Vtemp762[0x18U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s3) 
                          >> 4U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s3 
                                             >> 0x20U)) 
                                    << 0x1cU));
    __Vtemp762[0x19U] = (0x30000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s3 
                                                 >> 0x20U)) 
                                        >> 4U));
    __Vtemp762[0x1aU] = (1U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s2) 
                               << 1U));
    __Vtemp762[0x1bU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s2) 
                          >> 0x1fU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s2 
                                                >> 0x20U)) 
                                       << 1U));
    __Vtemp762[0x1cU] = (0x24U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a7) 
                                   << 6U) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__s2 
                                                      >> 0x20U)) 
                                             >> 0x1fU)));
    __Vtemp762[0x1dU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a7) 
                          >> 0x1aU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a7 
                                                >> 0x20U)) 
                                       << 6U));
    __Vtemp762[0x1eU] = (0x440U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a6) 
                                    << 0xbU) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__a7 
                                                         >> 0x20U)) 
                                                >> 0x1aU)));
    __Vtemp762[0x1fU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a6) 
                          >> 0x15U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a6 
                                                >> 0x20U)) 
                                       << 0xbU));
    __Vtemp762[0x20U] = (0x8000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a5) 
                                     << 0x10U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__a6 
                                                           >> 0x20U)) 
                                                  >> 0x15U)));
    __Vtemp762[0x21U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a5) 
                          >> 0x10U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a5 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp762[0x22U] = (0xf0000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a4) 
                                      << 0x15U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__a5 
                                                            >> 0x20U)) 
                                                   >> 0x10U)));
    __Vtemp762[0x23U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a4) 
                          >> 0xbU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a4 
                                               >> 0x20U)) 
                                      << 0x15U));
    __Vtemp762[0x24U] = (0x1c00000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a3) 
                                        << 0x1aU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a4 
                                                 >> 0x20U)) 
                                        >> 0xbU)));
    __Vtemp762[0x25U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a3) 
                          >> 6U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a3 
                                             >> 0x20U)) 
                                    << 0x1aU));
    __Vtemp762[0x26U] = (0x34000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a2) 
                                         << 0x1fU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__HY_RegFile__DOT__a3 
                                                    >> 0x20U)) 
                                           >> 6U)));
    __Vtemp762[0x27U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a2) 
                          >> 1U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a2 
                                             >> 0x20U)) 
                                    << 0x1fU));
    __Vtemp762[0x28U] = ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a2 
                                  >> 0x20U)) >> 1U);
    __Vtemp762[0x29U] = (6U | ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a1) 
                               << 4U));
    __Vtemp762[0x2aU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a1) 
                          >> 0x1cU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a1 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp762[0x2bU] = (0xb0U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a0) 
                                   << 9U) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__a1 
                                                      >> 0x20U)) 
                                             >> 0x1cU)));
    __Vtemp762[0x2cU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__a0) 
                          >> 0x17U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__a0 
                                                >> 0x20U)) 
                                       << 9U));
    __Vtemp762[0x2dU] = (0x1400U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s1) 
                                     << 0xeU) | ((IData)(
                                                         (vlSelf->top__DOT__HY_RegFile__DOT__a0 
                                                          >> 0x20U)) 
                                                 >> 0x17U)));
    __Vtemp762[0x2eU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s1) 
                          >> 0x12U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s1 
                                                >> 0x20U)) 
                                       << 0xeU));
    __Vtemp762[0x2fU] = (0x24000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s0) 
                                      << 0x13U) | ((IData)(
                                                           (vlSelf->top__DOT__HY_RegFile__DOT__s1 
                                                            >> 0x20U)) 
                                                   >> 0x12U)));
    __Vtemp762[0x30U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__s0) 
                          >> 0xdU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s0 
                                               >> 0x20U)) 
                                      << 0x13U));
    __Vtemp762[0x31U] = (0x400000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t2) 
                                       << 0x18U) | 
                                      ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__s0 
                                                >> 0x20U)) 
                                       >> 0xdU)));
    __Vtemp762[0x32U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t2) 
                          >> 8U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t2 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp762[0x33U] = (0x7000000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t1) 
                                        << 0x1dU) | 
                                       ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t2 
                                                 >> 0x20U)) 
                                        >> 8U)));
    __Vtemp762[0x34U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t1) 
                          >> 3U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t1 
                                             >> 0x20U)) 
                                    << 0x1dU));
    __Vtemp762[0x35U] = (0xc0000000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t1 
                                                 >> 0x20U)) 
                                        >> 3U));
    __Vtemp762[0x36U] = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t0) 
                         << 2U);
    __Vtemp762[0x37U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__t0) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__t0 
                                                >> 0x20U)) 
                                       << 2U));
    __Vtemp762[0x38U] = (0x14U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__tp) 
                                   << 7U) | ((IData)(
                                                     (vlSelf->top__DOT__HY_RegFile__DOT__t0 
                                                      >> 0x20U)) 
                                             >> 0x1eU)));
    __Vtemp762[0x39U] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__tp) 
                          >> 0x19U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__tp 
                                                >> 0x20U)) 
                                       << 7U));
    __Vtemp762[0x3aU] = (0x200U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__gp) 
                                    << 0xcU) | ((IData)(
                                                        (vlSelf->top__DOT__HY_RegFile__DOT__tp 
                                                         >> 0x20U)) 
                                                >> 0x19U)));
    __Vtemp762[0x3bU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__gp) 
                          >> 0x14U) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__gp 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp762[0x3cU] = (0x3000U | (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__sp) 
                                     << 0x11U) | ((IData)(
                                                          (vlSelf->top__DOT__HY_RegFile__DOT__gp 
                                                           >> 0x20U)) 
                                                  >> 0x14U)));
    __Vtemp762[0x3dU] = (((IData)(vlSelf->top__DOT__HY_RegFile__DOT__sp) 
                          >> 0xfU) | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__sp 
                                               >> 0x20U)) 
                                      << 0x11U));
    __Vtemp762[0x3eU] = (0x40000U | ((IData)((vlSelf->top__DOT__HY_RegFile__DOT__sp 
                                              >> 0x20U)) 
                                     >> 0xfU));
    VL_CONCAT_WQW(2070,64,2006, __Vtemp763, vlSelf->top__DOT__HY_RegFile__DOT__ra, __Vtemp762);
    VL_CONCAT_WIW(2075,5,2070, __Vtemp764, 1U, __Vtemp763);
    VL_CONCAT_WWW(2144,69,2075, __Vtemp765, __Vtemp704, __Vtemp764);
    VL_CONCAT_WWQ(2208,2144,64, __Vtemp766, __Vtemp765, vlSelf->top__DOT__HY_RegFile__DOT__t6);
    VL_ASSIGN_W(2208,vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4, __Vtemp766);
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__3\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1214;
    VlWide<7>/*223:0*/ __Vtemp1216;
    VlWide<9>/*287:0*/ __Vtemp1218;
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
    vlSelf->RS1_OUTPUT = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit)
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
    vlSelf->RS2_OUTPUT = ((IData)(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit)
                           ? vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out
                           : 0ULL);
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
    __Vtemp1214[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                     (vlSelf->instr_in 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->instr_in 
                                                                    >> 0x14U)))) 
                                                >> 0x20U)) 
                                       >> 0x1aU)) | 
                                (0x38U & ((IData)((
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->instr_in 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->instr_in 
                                                                       >> 0x14U)))) 
                                                   >> 0x20U)) 
                                          >> 0x1aU))));
    __Vtemp1216[3U] = ((7U & ((IData)((((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->instr_in 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->instr_in))))) 
                              >> 0x1aU)) | ((0x38U 
                                             & ((IData)(
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
    __Vtemp1216[4U] = (0x80U | ((7U & ((IData)(((((QData)((IData)(
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
    __Vtemp1216[5U] = ((7U & ((IData)((((- (QData)((IData)(
                                                           (vlSelf->instr_in 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->instr_in 
                                                                    >> 0x14U))))) 
                              >> 0x17U)) | ((0x38U 
                                             & ((IData)(
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
    __Vtemp1216[6U] = ((7U & ((IData)(((((- (QData)((IData)(
                                                            (vlSelf->instr_in 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->instr_in 
                                                                     >> 0x14U)))) 
                                       >> 0x20U)) >> 0x17U)) 
                       | (__Vtemp1214[4U] << 3U));
    __Vtemp1218[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
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
        = __Vtemp1218[4U];
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[7U] 
        = ((7U & ((IData)((((QData)((IData)((- (IData)(
                                                       (vlSelf->instr_in 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->instr_in))))) 
                  >> 0x17U)) | (__Vtemp1216[3U] << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[8U] 
        = ((__Vtemp1216[3U] >> 0x1dU) | (__Vtemp1216[4U] 
                                         << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[9U] 
        = ((__Vtemp1216[4U] >> 0x1dU) | (__Vtemp1216[5U] 
                                         << 3U));
    vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4[0xaU] 
        = ((__Vtemp1216[5U] >> 0x1dU) | (__Vtemp1216[6U] 
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
    vlSelf->SEXT_Control_out = vlSelf->top__DOT__SEXT_Control;
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
