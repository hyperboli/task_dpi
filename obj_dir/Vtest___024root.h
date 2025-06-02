// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest.h for the primary calling header

#ifndef VERILATED_VTEST___024ROOT_H_
#define VERILATED_VTEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ test__DOT__clk;
    CData/*0:0*/ test__DOT__d2f__DOT__s_output_z_stb;
    CData/*0:0*/ test__DOT__d2f__DOT__s_input_a_ack;
    CData/*0:0*/ test__DOT__rst;
    CData/*0:0*/ test__DOT__stb0;
    CData/*0:0*/ test__DOT__res_ack;
    CData/*0:0*/ test__DOT__dut_running;
    CData/*1:0*/ test__DOT__d2f__DOT__state;
    CData/*0:0*/ test__DOT__d2f__DOT__guard;
    CData/*0:0*/ test__DOT__d2f__DOT__round;
    CData/*0:0*/ test__DOT__d2f__DOT__sticky;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test__DOT__d2f__DOT__s_input_a_ack__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test__DOT__d2f__DOT__s_output_z_stb__0;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ test__DOT__d2f__DOT__z_e;
    IData/*31:0*/ test__DOT__file;
    IData/*31:0*/ test__DOT__rand_step_num;
    IData/*31:0*/ test__DOT__i_res;
    IData/*31:0*/ test__DOT__c_res;
    IData/*31:0*/ test__DOT__timer;
    IData/*31:0*/ test__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ test__DOT__d2f__DOT__s_output_z;
    IData/*31:0*/ test__DOT__d2f__DOT__z;
    IData/*23:0*/ test__DOT__d2f__DOT__z_m;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ test__DOT__arg0;
    QData/*63:0*/ test__DOT__d2f__DOT__a;
    std::string test__DOT__filename;
    std::string test__DOT__line;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h360af7ee__0;
    VlTriggerScheduler __VtrigSched_h085a72d4__0;
    VlTriggerScheduler __VtrigSched_h257c43da__0;
    VlTriggerScheduler __VtrigSched_h360af72f__0;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest___024root(Vtest__Syms* symsp, const char* v__name);
    ~Vtest___024root();
    VL_UNCOPYABLE(Vtest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
