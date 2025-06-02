// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest__pch.h"
#include "Vtest___024root.h"

VL_ATTR_COLD void Vtest___024root___eval_static(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_static\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__test__DOT__clk__0 
        = vlSelfRef.test__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test__DOT__d2f__DOT__s_input_a_ack__0 
        = vlSelfRef.test__DOT__d2f__DOT__s_input_a_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__test__DOT__d2f__DOT__s_output_z_stb__0 
        = vlSelfRef.test__DOT__d2f__DOT__s_output_z_stb;
}

VL_ATTR_COLD void Vtest___024root___eval_final(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_final\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtest___024root___eval_settle(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_settle\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__act(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___dump_triggers__act\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge test.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge test.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge test.d2f.s_input_a_ack)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge test.d2f.s_output_z_stb)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__nba(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___dump_triggers__nba\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge test.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge test.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge test.d2f.s_input_a_ack)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge test.d2f.s_output_z_stb)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest___024root___ctor_var_reset(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___ctor_var_reset\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->test__DOT__file = 0;
    vlSelf->test__DOT__rand_step_num = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->test__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13068610642747588208ull);
    vlSelf->test__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15384557765636056690ull);
    vlSelf->test__DOT__arg0 = 0;
    vlSelf->test__DOT__stb0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8466002073898713835ull);
    vlSelf->test__DOT__res_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9360010676170785541ull);
    vlSelf->test__DOT__i_res = 0;
    vlSelf->test__DOT__c_res = 0;
    vlSelf->test__DOT__dut_running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 269316019915572914ull);
    vlSelf->test__DOT__timer = 0;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->test__DOT__d2f__DOT__s_output_z_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12617293856102629912ull);
    vlSelf->test__DOT__d2f__DOT__s_output_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3625585225970456135ull);
    vlSelf->test__DOT__d2f__DOT__s_input_a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6931075747625707341ull);
    vlSelf->test__DOT__d2f__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3962814031340687667ull);
    vlSelf->test__DOT__d2f__DOT__a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12773570410905418374ull);
    vlSelf->test__DOT__d2f__DOT__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12966732368790476695ull);
    vlSelf->test__DOT__d2f__DOT__z_e = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4357845047182583510ull);
    vlSelf->test__DOT__d2f__DOT__z_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12948706531048196149ull);
    vlSelf->test__DOT__d2f__DOT__guard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5952079222040465242ull);
    vlSelf->test__DOT__d2f__DOT__round = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12312731253462033624ull);
    vlSelf->test__DOT__d2f__DOT__sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9240491966210441476ull);
    vlSelf->__Vtrigprevexpr___TOP__test__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13648153158804753077ull);
    vlSelf->__Vtrigprevexpr___TOP__test__DOT__d2f__DOT__s_input_a_ack__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1343615495765811450ull);
    vlSelf->__Vtrigprevexpr___TOP__test__DOT__d2f__DOT__s_output_z_stb__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9682555878519291626ull);
}
