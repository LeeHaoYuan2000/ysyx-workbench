// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAXI4_READ_TOP__Syms.h"
#include "VAXI4_READ_TOP.h"
#include "VAXI4_READ_TOP___024root.h"

// FUNCTIONS
VAXI4_READ_TOP__Syms::~VAXI4_READ_TOP__Syms()
{
}

VAXI4_READ_TOP__Syms::VAXI4_READ_TOP__Syms(VerilatedContext* contextp, const char* namep,VAXI4_READ_TOP* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
