// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPC_Reg.h"
#include "VPC_Reg__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPC_Reg::VPC_Reg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPC_Reg__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , PC_Test{vlSymsp->TOP.PC_Test}
    , rootp{&(vlSymsp->TOP)}
{
}

VPC_Reg::VPC_Reg(const char* _vcname__)
    : VPC_Reg(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPC_Reg::~VPC_Reg() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPC_Reg___024root___eval_initial(VPC_Reg___024root* vlSelf);
void VPC_Reg___024root___eval_settle(VPC_Reg___024root* vlSelf);
void VPC_Reg___024root___eval(VPC_Reg___024root* vlSelf);
QData VPC_Reg___024root___change_request(VPC_Reg___024root* vlSelf);
#ifdef VL_DEBUG
void VPC_Reg___024root___eval_debug_assertions(VPC_Reg___024root* vlSelf);
#endif  // VL_DEBUG
void VPC_Reg___024root___final(VPC_Reg___024root* vlSelf);

static void _eval_initial_loop(VPC_Reg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPC_Reg___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPC_Reg___024root___eval_settle(&(vlSymsp->TOP));
        VPC_Reg___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VPC_Reg___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VPC_Reg___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPC_Reg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPC_Reg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPC_Reg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPC_Reg___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VPC_Reg___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VPC_Reg___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VPC_Reg::final() {
    VPC_Reg___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VPC_Reg::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPC_Reg::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VPC_Reg___024root__traceInitTop(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPC_Reg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC_Reg___024root*>(voidSelf);
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VPC_Reg___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VPC_Reg___024root__traceRegister(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep);

void VPC_Reg::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VPC_Reg___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
