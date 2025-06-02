// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest__pch.h"
#include "Vtest.h"
#include "Vtest___024root.h"

// FUNCTIONS
Vtest__Syms::~Vtest__Syms()
{

    // Tear down scope hierarchy

}

Vtest__Syms::Vtest__Syms(VerilatedContext* contextp, const char* namep, Vtest* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(152);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_test.configure(this, name(), "test", "test", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_test__test_input.configure(this, name(), "test.test_input", "test_input", "<null>", -12, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
