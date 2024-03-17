// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAXI4_READ_TOP.h"
#include "VAXI4_READ_TOP__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAXI4_READ_TOP::VAXI4_READ_TOP(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAXI4_READ_TOP__Syms(_vcontextp__, _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , RST_N{vlSymsp->TOP.RST_N}
    , read_req_instr{vlSymsp->TOP.read_req_instr}
    , read_req_ex{vlSymsp->TOP.read_req_ex}
    , instr_finish{vlSymsp->TOP.instr_finish}
    , ex_finish{vlSymsp->TOP.ex_finish}
    , instr_addr{vlSymsp->TOP.instr_addr}
    , ex_addr{vlSymsp->TOP.ex_addr}
    , instr_data{vlSymsp->TOP.instr_data}
    , ex_data{vlSymsp->TOP.ex_data}
    , Read_SIGNAL{vlSymsp->TOP.Read_SIGNAL}
    , Read_ADDRESS{vlSymsp->TOP.Read_ADDRESS}
    , DATA_ARRIVE{vlSymsp->TOP.DATA_ARRIVE}
    , DATA_OUTSIDE{vlSymsp->TOP.DATA_OUTSIDE}
    , rootp{&(vlSymsp->TOP)}
{
}

VAXI4_READ_TOP::VAXI4_READ_TOP(const char* _vcname__)
    : VAXI4_READ_TOP(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAXI4_READ_TOP::~VAXI4_READ_TOP() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAXI4_READ_TOP___024root___eval_initial(VAXI4_READ_TOP___024root* vlSelf);
void VAXI4_READ_TOP___024root___eval_settle(VAXI4_READ_TOP___024root* vlSelf);
void VAXI4_READ_TOP___024root___eval(VAXI4_READ_TOP___024root* vlSelf);
QData VAXI4_READ_TOP___024root___change_request(VAXI4_READ_TOP___024root* vlSelf);
#ifdef VL_DEBUG
void VAXI4_READ_TOP___024root___eval_debug_assertions(VAXI4_READ_TOP___024root* vlSelf);
#endif  // VL_DEBUG
void VAXI4_READ_TOP___024root___final(VAXI4_READ_TOP___024root* vlSelf);

static void _eval_initial_loop(VAXI4_READ_TOP__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAXI4_READ_TOP___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAXI4_READ_TOP___024root___eval_settle(&(vlSymsp->TOP));
        VAXI4_READ_TOP___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VAXI4_READ_TOP___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/leehy/Desktop/ysyx-workbench/npc/vsrc/AXI4-lite/./AXI4_READ_TOP.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VAXI4_READ_TOP___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAXI4_READ_TOP::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAXI4_READ_TOP::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAXI4_READ_TOP___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAXI4_READ_TOP___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VAXI4_READ_TOP___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/leehy/Desktop/ysyx-workbench/npc/vsrc/AXI4-lite/./AXI4_READ_TOP.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VAXI4_READ_TOP___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VAXI4_READ_TOP::final() {
    VAXI4_READ_TOP___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VAXI4_READ_TOP::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAXI4_READ_TOP::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VAXI4_READ_TOP___024root__traceInitTop(VAXI4_READ_TOP___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAXI4_READ_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAXI4_READ_TOP___024root*>(voidSelf);
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VAXI4_READ_TOP___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VAXI4_READ_TOP___024root__traceRegister(VAXI4_READ_TOP___024root* vlSelf, VerilatedVcd* tracep);

void VAXI4_READ_TOP::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VAXI4_READ_TOP___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
