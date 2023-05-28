// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPC_Reg__Syms.h"


void VPC_Reg___024root__traceInitSub0(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VPC_Reg___024root__traceInitTop(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VPC_Reg___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VPC_Reg___024root__traceInitSub0(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declQuad(c+3,"PC_Test", false,-1, 63,0);
        tracep->declBit(c+1,"top clk", false,-1);
        tracep->declBit(c+2,"top rst", false,-1);
        tracep->declQuad(c+3,"top PC_Test", false,-1, 63,0);
        tracep->declQuad(c+5,"top PC_Wire", false,-1, 63,0);
        tracep->declQuad(c+7,"top PC_Next_Wire", false,-1, 63,0);
        tracep->declQuad(c+5,"top pc_adder PC", false,-1, 63,0);
        tracep->declQuad(c+7,"top pc_adder PC_Next", false,-1, 63,0);
        tracep->declBit(c+1,"top pc_reg clk", false,-1);
        tracep->declBit(c+2,"top pc_reg rst", false,-1);
        tracep->declQuad(c+7,"top pc_reg PC_Next", false,-1, 63,0);
        tracep->declQuad(c+5,"top pc_reg PC", false,-1, 63,0);
        tracep->declBus(c+9,"top pc_reg pc_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+10,"top pc_reg pc_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1,"top pc_reg pc_reg clk", false,-1);
        tracep->declBit(c+2,"top pc_reg pc_reg rst", false,-1);
        tracep->declQuad(c+7,"top pc_reg pc_reg din", false,-1, 63,0);
        tracep->declQuad(c+5,"top pc_reg pc_reg dout", false,-1, 63,0);
        tracep->declBit(c+12,"top pc_reg pc_reg wen", false,-1);
    }
}

void VPC_Reg___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VPC_Reg___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VPC_Reg___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VPC_Reg___024root__traceRegister(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VPC_Reg___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VPC_Reg___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VPC_Reg___024root__traceCleanup, vlSelf);
    }
}

void VPC_Reg___024root__traceFullSub0(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VPC_Reg___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VPC_Reg___024root* const __restrict vlSelf = static_cast<VPC_Reg___024root*>(voidSelf);
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VPC_Reg___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VPC_Reg___024root__traceFullSub0(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rst));
        tracep->fullQData(oldp+3,(vlSelf->PC_Test),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__PC_Wire),64);
        tracep->fullQData(oldp+7,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
        tracep->fullIData(oldp+9,(0x40U),32);
        tracep->fullQData(oldp+10,(0x80000000ULL),64);
        tracep->fullBit(oldp+12,(1U));
    }
}
