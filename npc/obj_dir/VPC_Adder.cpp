// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPC_Adder.h"
#include "VPC_Adder__Syms.h"

//============================================================
// Constructors

VPC_Adder::VPC_Adder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPC_Adder__Syms(_vcontextp__, _vcname__, this)}
    , PC{vlSymsp->TOP.PC}
    , PC_Next{vlSymsp->TOP.PC_Next}
    , rootp{&(vlSymsp->TOP)}
{
}

VPC_Adder::VPC_Adder(const char* _vcname__)
    : VPC_Adder(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPC_Adder::~VPC_Adder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPC_Adder___024root___eval_initial(VPC_Adder___024root* vlSelf);
void VPC_Adder___024root___eval_settle(VPC_Adder___024root* vlSelf);
void VPC_Adder___024root___eval(VPC_Adder___024root* vlSelf);
QData VPC_Adder___024root___change_request(VPC_Adder___024root* vlSelf);
#ifdef VL_DEBUG
void VPC_Adder___024root___eval_debug_assertions(VPC_Adder___024root* vlSelf);
#endif  // VL_DEBUG
void VPC_Adder___024root___final(VPC_Adder___024root* vlSelf);

static void _eval_initial_loop(VPC_Adder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPC_Adder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPC_Adder___024root___eval_settle(&(vlSymsp->TOP));
        VPC_Adder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VPC_Adder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/PC/PC_Adder.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VPC_Adder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPC_Adder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPC_Adder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPC_Adder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPC_Adder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VPC_Adder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/PC/PC_Adder.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VPC_Adder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VPC_Adder::final() {
    VPC_Adder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VPC_Adder::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPC_Adder::name() const {
    return vlSymsp->name();
}
