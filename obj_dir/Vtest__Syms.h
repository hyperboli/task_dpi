// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTEST__SYMS_H_
#define VERILATED_VTEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtest.h"

// INCLUDE MODULE CLASSES
#include "Vtest___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtest__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtest* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtest___024root                TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_test;
    VerilatedScope __Vscope_test__test_input;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtest__Syms(VerilatedContext* contextp, const char* namep, Vtest* modelp);
    ~Vtest__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
