// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegPC__Syms.h"


VL_ATTR_COLD void VRegPC___024root__trace_init_sub__TOP__0(VRegPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegPC___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declQuad(c+3,"data", false,-1, 63,0);
    tracep->declQuad(c+5,"out", false,-1, 63,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->pushNamePrefix("RegPC ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declQuad(c+3,"data", false,-1, 63,0);
    tracep->declQuad(c+5,"out", false,-1, 63,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VRegPC___024root__trace_init_top(VRegPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegPC___024root__trace_init_top\n"); );
    // Body
    VRegPC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRegPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRegPC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRegPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRegPC___024root__trace_register(VRegPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegPC___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRegPC___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRegPC___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRegPC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRegPC___024root__trace_full_sub_0(VRegPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRegPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegPC___024root__trace_full_top_0\n"); );
    // Init
    VRegPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegPC___024root*>(voidSelf);
    VRegPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRegPC___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRegPC___024root__trace_full_sub_0(VRegPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRegPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegPC___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullQData(oldp+3,(vlSelf->data),64);
    bufp->fullQData(oldp+5,(vlSelf->out),64);
    bufp->fullBit(oldp+7,(vlSelf->wen));
}
