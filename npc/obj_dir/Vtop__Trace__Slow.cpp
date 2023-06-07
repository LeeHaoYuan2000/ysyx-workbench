// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBus(c+3,"instr_in", false,-1, 31,0);
        tracep->declBus(c+4,"instr_out", false,-1, 31,0);
        tracep->declQuad(c+5,"PC_Test", false,-1, 63,0);
        tracep->declBit(c+1,"top clk", false,-1);
        tracep->declBit(c+2,"top rst", false,-1);
        tracep->declBus(c+3,"top instr_in", false,-1, 31,0);
        tracep->declBus(c+4,"top instr_out", false,-1, 31,0);
        tracep->declQuad(c+5,"top PC_Test", false,-1, 63,0);
        tracep->declQuad(c+7,"top PC_Wire", false,-1, 63,0);
        tracep->declQuad(c+9,"top PC_Next_Wire", false,-1, 63,0);
        tracep->declQuad(c+7,"top pc_adder PC", false,-1, 63,0);
        tracep->declQuad(c+9,"top pc_adder PC_Next", false,-1, 63,0);
        tracep->declBit(c+1,"top pc_reg clk", false,-1);
        tracep->declBit(c+2,"top pc_reg rst", false,-1);
        tracep->declQuad(c+9,"top pc_reg PC_Next", false,-1, 63,0);
        tracep->declQuad(c+7,"top pc_reg PC", false,-1, 63,0);
        tracep->declBus(c+11,"top pc_reg pc_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+12,"top pc_reg pc_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1,"top pc_reg pc_reg clk", false,-1);
        tracep->declBit(c+2,"top pc_reg pc_reg rst", false,-1);
        tracep->declQuad(c+9,"top pc_reg pc_reg din", false,-1, 63,0);
        tracep->declQuad(c+7,"top pc_reg pc_reg dout", false,-1, 63,0);
        tracep->declBit(c+14,"top pc_reg pc_reg wen", false,-1);
        tracep->declQuad(c+7,"top IFU_Lee PC_IN", false,-1, 63,0);
        tracep->declBus(c+3,"top IFU_Lee Instr_IN", false,-1, 31,0);
        tracep->declQuad(c+5,"top IFU_Lee PC_OUT", false,-1, 63,0);
        tracep->declBus(c+4,"top IFU_Lee Instr_OUT", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rst));
        tracep->fullIData(oldp+3,(vlSelf->instr_in),32);
        tracep->fullIData(oldp+4,(vlSelf->instr_out),32);
        tracep->fullQData(oldp+5,(vlSelf->PC_Test),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__PC_Wire),64);
        tracep->fullQData(oldp+9,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
        tracep->fullIData(oldp+11,(0x40U),32);
        tracep->fullQData(oldp+12,(0x80000000ULL),64);
        tracep->fullBit(oldp+14,(1U));
    }
}
