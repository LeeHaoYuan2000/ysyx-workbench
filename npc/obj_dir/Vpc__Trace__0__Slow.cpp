// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpc__Syms.h"


VL_ATTR_COLD void Vpc___024root__trace_init_sub__TOP__0(Vpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"wen", false,-1);
    tracep->declQuad(c+4,"out", false,-1, 63,0);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"wen", false,-1);
    tracep->declQuad(c+4,"out", false,-1, 63,0);
    tracep->declQuad(c+6,"pc2adder", false,-1, 63,0);
    tracep->declQuad(c+8,"adderData", false,-1, 63,0);
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declQuad(c+6,"PC", false,-1, 63,0);
    tracep->declBus(c+10,"adder", false,-1, 2,0);
    tracep->declQuad(c+8,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declQuad(c+8,"data", false,-1, 63,0);
    tracep->declQuad(c+6,"out", false,-1, 63,0);
    tracep->declBit(c+3,"wen", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vpc___024root__trace_init_top(Vpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root__trace_init_top\n"); );
    // Body
    Vpc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpc___024root__trace_register(Vpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpc___024root__trace_full_sub_0(Vpc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root__trace_full_top_0\n"); );
    // Init
    Vpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc___024root*>(voidSelf);
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpc___024root__trace_full_sub_0(Vpc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->wen));
    bufp->fullQData(oldp+4,(vlSelf->out),64);
    bufp->fullQData(oldp+6,(vlSelf->pc__DOT__pc2adder),64);
    bufp->fullQData(oldp+8,(((IData)(vlSelf->rst) ? 0ULL
                              : (4ULL + vlSelf->pc__DOT__pc2adder))),64);
    bufp->fullCData(oldp+10,(4U),3);
}
