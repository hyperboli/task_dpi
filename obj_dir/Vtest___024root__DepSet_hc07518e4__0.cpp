// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest__pch.h"
#include "Vtest___024root.h"

VlCoroutine Vtest___024root___eval_initial__TOP__Vtiming__0(Vtest___024root* vlSelf);
VlCoroutine Vtest___024root___eval_initial__TOP__Vtiming__1(Vtest___024root* vlSelf);

void Vtest___024root___eval_initial(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtest___024root___eval_initial__TOP__Vtiming__0(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "test.sv", 
                                             46);
        vlSelfRef.test__DOT__clk = (1U & (~ (IData)(vlSelfRef.test__DOT__clk)));
    }
}

void Vtest___024root___eval_act(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_act\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtest___024root___nba_sequent__TOP__0(Vtest___024root* vlSelf);

void Vtest___024root___eval_nba(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_nba\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtest___024root___nba_sequent__TOP__0(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___nba_sequent__TOP__0\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__test__DOT__timer;
    __Vdly__test__DOT__timer = 0;
    CData/*0:0*/ __Vdly__test__DOT__d2f__DOT__s_input_a_ack;
    __Vdly__test__DOT__d2f__DOT__s_input_a_ack = 0;
    QData/*63:0*/ __Vdly__test__DOT__d2f__DOT__a;
    __Vdly__test__DOT__d2f__DOT__a = 0;
    CData/*1:0*/ __Vdly__test__DOT__d2f__DOT__state;
    __Vdly__test__DOT__d2f__DOT__state = 0;
    IData/*31:0*/ __Vdly__test__DOT__d2f__DOT__z;
    __Vdly__test__DOT__d2f__DOT__z = 0;
    IData/*23:0*/ __Vdly__test__DOT__d2f__DOT__z_m;
    __Vdly__test__DOT__d2f__DOT__z_m = 0;
    SData/*10:0*/ __Vdly__test__DOT__d2f__DOT__z_e;
    __Vdly__test__DOT__d2f__DOT__z_e = 0;
    CData/*0:0*/ __Vdly__test__DOT__d2f__DOT__guard;
    __Vdly__test__DOT__d2f__DOT__guard = 0;
    CData/*0:0*/ __Vdly__test__DOT__d2f__DOT__round;
    __Vdly__test__DOT__d2f__DOT__round = 0;
    CData/*0:0*/ __Vdly__test__DOT__d2f__DOT__sticky;
    __Vdly__test__DOT__d2f__DOT__sticky = 0;
    CData/*0:0*/ __Vdly__test__DOT__d2f__DOT__s_output_z_stb;
    __Vdly__test__DOT__d2f__DOT__s_output_z_stb = 0;
    // Body
    __Vdly__test__DOT__timer = vlSelfRef.test__DOT__timer;
    __Vdly__test__DOT__d2f__DOT__s_input_a_ack = vlSelfRef.test__DOT__d2f__DOT__s_input_a_ack;
    __Vdly__test__DOT__d2f__DOT__a = vlSelfRef.test__DOT__d2f__DOT__a;
    __Vdly__test__DOT__d2f__DOT__state = vlSelfRef.test__DOT__d2f__DOT__state;
    __Vdly__test__DOT__d2f__DOT__z = vlSelfRef.test__DOT__d2f__DOT__z;
    __Vdly__test__DOT__d2f__DOT__z_m = vlSelfRef.test__DOT__d2f__DOT__z_m;
    __Vdly__test__DOT__d2f__DOT__z_e = vlSelfRef.test__DOT__d2f__DOT__z_e;
    __Vdly__test__DOT__d2f__DOT__guard = vlSelfRef.test__DOT__d2f__DOT__guard;
    __Vdly__test__DOT__d2f__DOT__round = vlSelfRef.test__DOT__d2f__DOT__round;
    __Vdly__test__DOT__d2f__DOT__sticky = vlSelfRef.test__DOT__d2f__DOT__sticky;
    __Vdly__test__DOT__d2f__DOT__s_output_z_stb = vlSelfRef.test__DOT__d2f__DOT__s_output_z_stb;
    __Vdly__test__DOT__timer = ((IData)(vlSelfRef.test__DOT__dut_running)
                                 ? ((IData)(1U) + vlSelfRef.test__DOT__timer)
                                 : 0U);
    if (VL_UNLIKELY(((0x3e8U == vlSelfRef.test__DOT__timer)))) {
        VL_WRITEF_NX("ERR: TIMEOUT - DUT exceeded waiting time\n",0);
        VL_FINISH_MT("test.sv", 119, "");
    }
    if ((0U == (IData)(vlSelfRef.test__DOT__d2f__DOT__state))) {
        __Vdly__test__DOT__d2f__DOT__s_input_a_ack = 1U;
        if (((IData)(vlSelfRef.test__DOT__d2f__DOT__s_input_a_ack) 
             & (IData)(vlSelfRef.test__DOT__stb0))) {
            __Vdly__test__DOT__d2f__DOT__a = vlSelfRef.test__DOT__arg0;
            __Vdly__test__DOT__d2f__DOT__s_input_a_ack = 0U;
            __Vdly__test__DOT__d2f__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.test__DOT__d2f__DOT__state))) {
        __Vdly__test__DOT__d2f__DOT__z = ((0x7fffffffU 
                                           & __Vdly__test__DOT__d2f__DOT__z) 
                                          | ((IData)(
                                                     (vlSelfRef.test__DOT__d2f__DOT__a 
                                                      >> 0x3fU)) 
                                             << 0x1fU));
        __Vdly__test__DOT__d2f__DOT__state = 3U;
        if ((0U == (0x7ffU & (IData)((vlSelfRef.test__DOT__d2f__DOT__a 
                                      >> 0x34U))))) {
            __Vdly__test__DOT__d2f__DOT__z = (0x80000000U 
                                              & __Vdly__test__DOT__d2f__DOT__z);
        } else if ((0x381U > (0x7ffU & (IData)((vlSelfRef.test__DOT__d2f__DOT__a 
                                                >> 0x34U))))) {
            __Vdly__test__DOT__d2f__DOT__z = (0x807fffffU 
                                              & __Vdly__test__DOT__d2f__DOT__z);
            __Vdly__test__DOT__d2f__DOT__z_m = (0x800000U 
                                                | (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelfRef.test__DOT__d2f__DOT__a 
                                                              >> 0x1dU))));
            __Vdly__test__DOT__d2f__DOT__state = 2U;
            __Vdly__test__DOT__d2f__DOT__z_e = (0x7ffU 
                                                & (IData)(
                                                          (vlSelfRef.test__DOT__d2f__DOT__a 
                                                           >> 0x34U)));
            __Vdly__test__DOT__d2f__DOT__guard = (1U 
                                                  & (IData)(
                                                            (vlSelfRef.test__DOT__d2f__DOT__a 
                                                             >> 0x1cU)));
            __Vdly__test__DOT__d2f__DOT__round = (1U 
                                                  & (IData)(
                                                            (vlSelfRef.test__DOT__d2f__DOT__a 
                                                             >> 0x1bU)));
            __Vdly__test__DOT__d2f__DOT__sticky = (0U 
                                                   != 
                                                   (0x7ffffffU 
                                                    & (IData)(vlSelfRef.test__DOT__d2f__DOT__a)));
        } else if ((0x7ffU == (0x7ffU & (IData)((vlSelfRef.test__DOT__d2f__DOT__a 
                                                 >> 0x34U))))) {
            __Vdly__test__DOT__d2f__DOT__z = (0x7f800000U 
                                              | (0x80000000U 
                                                 & __Vdly__test__DOT__d2f__DOT__z));
            if ((0U != (0xfffffffffffffULL & vlSelfRef.test__DOT__d2f__DOT__a))) {
                __Vdly__test__DOT__d2f__DOT__z = (0x400000U 
                                                  | __Vdly__test__DOT__d2f__DOT__z);
            }
        } else if ((0x47eU < (0x7ffU & (IData)((vlSelfRef.test__DOT__d2f__DOT__a 
                                                >> 0x34U))))) {
            __Vdly__test__DOT__d2f__DOT__z = (0x7f800000U 
                                              | (0x80000000U 
                                                 & __Vdly__test__DOT__d2f__DOT__z));
        } else {
            __Vdly__test__DOT__d2f__DOT__z = ((0x807fffffU 
                                               & __Vdly__test__DOT__d2f__DOT__z) 
                                              | (0x7f800000U 
                                                 & (((IData)(0x7fU) 
                                                     + 
                                                     ((0x7ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.test__DOT__d2f__DOT__a 
                                                                  >> 0x34U))) 
                                                      - (IData)(0xffU))) 
                                                    << 0x17U)));
            __Vdly__test__DOT__d2f__DOT__z = ((0xff800000U 
                                               & __Vdly__test__DOT__d2f__DOT__z) 
                                              | (0x7fffffU 
                                                 & ((IData)(
                                                            ((vlSelfRef.test__DOT__d2f__DOT__a 
                                                              >> 0x1cU) 
                                                             & (0ULL 
                                                                != 
                                                                (0xfffffffULL 
                                                                 & vlSelfRef.test__DOT__d2f__DOT__a))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(
                                                               (vlSelfRef.test__DOT__d2f__DOT__a 
                                                                >> 0x1dU)))
                                                     : (IData)(
                                                               (vlSelfRef.test__DOT__d2f__DOT__a 
                                                                >> 0x1dU)))));
        }
    } else if ((2U == (IData)(vlSelfRef.test__DOT__d2f__DOT__state))) {
        if (((0x381U == (IData)(vlSelfRef.test__DOT__d2f__DOT__z_e)) 
             | ((0U == vlSelfRef.test__DOT__d2f__DOT__z_m) 
                & (~ (IData)(vlSelfRef.test__DOT__d2f__DOT__guard))))) {
            __Vdly__test__DOT__d2f__DOT__state = 3U;
            __Vdly__test__DOT__d2f__DOT__z = ((0xff800000U 
                                               & __Vdly__test__DOT__d2f__DOT__z) 
                                              | (0x7fffffU 
                                                 & vlSelfRef.test__DOT__d2f__DOT__z_m));
            if (((IData)(vlSelfRef.test__DOT__d2f__DOT__guard) 
                 & ((IData)(vlSelfRef.test__DOT__d2f__DOT__round) 
                    | (IData)(vlSelfRef.test__DOT__d2f__DOT__sticky)))) {
                __Vdly__test__DOT__d2f__DOT__z = ((0xff800000U 
                                                   & __Vdly__test__DOT__d2f__DOT__z) 
                                                  | (0x7fffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelfRef.test__DOT__d2f__DOT__z_m)));
            }
        } else {
            __Vdly__test__DOT__d2f__DOT__z_e = (0x7ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.test__DOT__d2f__DOT__z_e)));
            __Vdly__test__DOT__d2f__DOT__z_m = (0x7fffffU 
                                                & (vlSelfRef.test__DOT__d2f__DOT__z_m 
                                                   >> 1U));
            __Vdly__test__DOT__d2f__DOT__sticky = ((IData)(vlSelfRef.test__DOT__d2f__DOT__sticky) 
                                                   | (IData)(vlSelfRef.test__DOT__d2f__DOT__round));
            __Vdly__test__DOT__d2f__DOT__round = vlSelfRef.test__DOT__d2f__DOT__guard;
            __Vdly__test__DOT__d2f__DOT__guard = (1U 
                                                  & vlSelfRef.test__DOT__d2f__DOT__z_m);
        }
    } else if ((3U == (IData)(vlSelfRef.test__DOT__d2f__DOT__state))) {
        __Vdly__test__DOT__d2f__DOT__s_output_z_stb = 1U;
        vlSelfRef.test__DOT__d2f__DOT__s_output_z = vlSelfRef.test__DOT__d2f__DOT__z;
        if (((IData)(vlSelfRef.test__DOT__d2f__DOT__s_output_z_stb) 
             & (IData)(vlSelfRef.test__DOT__res_ack))) {
            __Vdly__test__DOT__d2f__DOT__s_output_z_stb = 0U;
            __Vdly__test__DOT__d2f__DOT__state = 0U;
        }
    }
    if (vlSelfRef.test__DOT__rst) {
        __Vdly__test__DOT__d2f__DOT__s_input_a_ack = 0U;
        __Vdly__test__DOT__d2f__DOT__s_output_z_stb = 0U;
        __Vdly__test__DOT__d2f__DOT__state = 0U;
        vlSelfRef.test__DOT__stb0 = 0U;
    }
    vlSelfRef.test__DOT__timer = __Vdly__test__DOT__timer;
    vlSelfRef.test__DOT__d2f__DOT__s_input_a_ack = __Vdly__test__DOT__d2f__DOT__s_input_a_ack;
    vlSelfRef.test__DOT__d2f__DOT__a = __Vdly__test__DOT__d2f__DOT__a;
    vlSelfRef.test__DOT__d2f__DOT__state = __Vdly__test__DOT__d2f__DOT__state;
    vlSelfRef.test__DOT__d2f__DOT__z = __Vdly__test__DOT__d2f__DOT__z;
    vlSelfRef.test__DOT__d2f__DOT__z_m = __Vdly__test__DOT__d2f__DOT__z_m;
    vlSelfRef.test__DOT__d2f__DOT__z_e = __Vdly__test__DOT__d2f__DOT__z_e;
    vlSelfRef.test__DOT__d2f__DOT__guard = __Vdly__test__DOT__d2f__DOT__guard;
    vlSelfRef.test__DOT__d2f__DOT__round = __Vdly__test__DOT__d2f__DOT__round;
    vlSelfRef.test__DOT__d2f__DOT__sticky = __Vdly__test__DOT__d2f__DOT__sticky;
    vlSelfRef.test__DOT__d2f__DOT__s_output_z_stb = __Vdly__test__DOT__d2f__DOT__s_output_z_stb;
}

void Vtest___024root___timing_resume(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___timing_resume\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h360af7ee__0.resume(
                                                   "@(negedge test.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h085a72d4__0.resume(
                                                   "@(posedge test.d2f.s_input_a_ack)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h257c43da__0.resume(
                                                   "@(posedge test.d2f.s_output_z_stb)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h360af72f__0.resume(
                                                   "@(posedge test.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest___024root___timing_commit(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___timing_commit\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h360af7ee__0.commit(
                                                   "@(negedge test.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h085a72d4__0.commit(
                                                   "@(posedge test.d2f.s_input_a_ack)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h257c43da__0.commit(
                                                   "@(posedge test.d2f.s_output_z_stb)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h360af72f__0.commit(
                                                   "@(posedge test.clk)");
    }
}

void Vtest___024root___eval_triggers__act(Vtest___024root* vlSelf);

bool Vtest___024root___eval_phase__act(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_phase__act\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest___024root___eval_triggers__act(vlSelf);
    Vtest___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest___024root___timing_resume(vlSelf);
        Vtest___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest___024root___eval_phase__nba(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_phase__nba\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__nba(Vtest___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__act(Vtest___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest___024root___eval(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtest___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest___024root___eval_debug_assertions(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_debug_assertions\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
