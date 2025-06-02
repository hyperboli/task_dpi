// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest__pch.h"
#include "Vtest__Syms.h"
#include "Vtest___024root.h"

extern "C" int double_to_float_res(long long in_val);

VL_INLINE_OPT void Vtest___024root____Vdpiimwrap_test__DOT__double_to_float_res_TOP(QData/*63:0*/ in_val, IData/*31:0*/ &double_to_float_res__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root____Vdpiimwrap_test__DOT__double_to_float_res_TOP\n"); );
    // Body
    long long in_val__Vcvt;
    for (size_t in_val__Vidx = 0; in_val__Vidx < 1; ++in_val__Vidx) in_val__Vcvt = in_val;
    int double_to_float_res__Vfuncrtn__Vcvt;
    double_to_float_res__Vfuncrtn__Vcvt = double_to_float_res(in_val__Vcvt);
    double_to_float_res__Vfuncrtn = double_to_float_res__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT VlCoroutine Vtest___024root___eval_initial__TOP__Vtiming__1(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_test__DOT__double_to_float_res__2__Vfuncout;
    __Vfunc_test__DOT__double_to_float_res__2__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_test__DOT__var32_no_equal__3__Vfuncout;
    __Vfunc_test__DOT__var32_no_equal__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_no_equal__3__var0;
    __Vfunc_test__DOT__var32_no_equal__3__var0 = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_no_equal__3__var1;
    __Vfunc_test__DOT__var32_no_equal__3__var1 = 0;
    CData/*0:0*/ __Vfunc_test__DOT__var32_is_nan__4__Vfuncout;
    __Vfunc_test__DOT__var32_is_nan__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_is_nan__4__var0;
    __Vfunc_test__DOT__var32_is_nan__4__var0 = 0;
    CData/*0:0*/ __Vfunc_test__DOT__var32_is_nan__5__Vfuncout;
    __Vfunc_test__DOT__var32_is_nan__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_is_nan__5__var0;
    __Vfunc_test__DOT__var32_is_nan__5__var0 = 0;
    IData/*31:0*/ __Vfunc_test__DOT__double_to_float_res__8__Vfuncout;
    __Vfunc_test__DOT__double_to_float_res__8__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_test__DOT__var32_no_equal__9__Vfuncout;
    __Vfunc_test__DOT__var32_no_equal__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_no_equal__9__var0;
    __Vfunc_test__DOT__var32_no_equal__9__var0 = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_no_equal__9__var1;
    __Vfunc_test__DOT__var32_no_equal__9__var1 = 0;
    CData/*0:0*/ __Vfunc_test__DOT__var32_is_nan__10__Vfuncout;
    __Vfunc_test__DOT__var32_is_nan__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_is_nan__10__var0;
    __Vfunc_test__DOT__var32_is_nan__10__var0 = 0;
    CData/*0:0*/ __Vfunc_test__DOT__var32_is_nan__11__Vfuncout;
    __Vfunc_test__DOT__var32_is_nan__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_is_nan__11__var0;
    __Vfunc_test__DOT__var32_is_nan__11__var0 = 0;
    IData/*31:0*/ __Vfunc_test__DOT__double_to_float_res__14__Vfuncout;
    __Vfunc_test__DOT__double_to_float_res__14__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_test__DOT__var32_no_equal__15__Vfuncout;
    __Vfunc_test__DOT__var32_no_equal__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_no_equal__15__var0;
    __Vfunc_test__DOT__var32_no_equal__15__var0 = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_no_equal__15__var1;
    __Vfunc_test__DOT__var32_no_equal__15__var1 = 0;
    CData/*0:0*/ __Vfunc_test__DOT__var32_is_nan__16__Vfuncout;
    __Vfunc_test__DOT__var32_is_nan__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_is_nan__16__var0;
    __Vfunc_test__DOT__var32_is_nan__16__var0 = 0;
    CData/*0:0*/ __Vfunc_test__DOT__var32_is_nan__17__Vfuncout;
    __Vfunc_test__DOT__var32_is_nan__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test__DOT__var32_is_nan__17__var0;
    __Vfunc_test__DOT__var32_is_nan__17__var0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VL_WRITEF_NX(" _____         _     ____  ____ ___ \n|_   _|_ _ ___| | __|  _  |  _  _ _|\n  | |/ _` / __| |/ /| | | | |_) | | \n  | | (_| ___ _   < | |_| |  __/| | \n  |_| __,_|___/_| _ |____/|_|  |___|\n\n",0);
    if (VL_UNLIKELY((VL_VALUEPLUSARGS_INQ(64, std::string{"arg0=%x"}, 
                                          vlSelfRef.test__DOT__arg0)))) {
        vlSelfRef.test__DOT__rst = 0U;
        co_await vlSelfRef.__VtrigSched_h360af7ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge test.clk)", 
                                                             "test.sv", 
                                                             50);
        vlSelfRef.test__DOT__rst = 1U;
        co_await vlSelfRef.__VtrigSched_h360af7ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge test.clk)", 
                                                             "test.sv", 
                                                             51);
        vlSelfRef.test__DOT__rst = 0U;
        VL_WRITEF_NX("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nCheck DUT with input: %x [%20d]\n",0,
                     64,vlSelfRef.test__DOT__arg0,64,
                     vlSelfRef.test__DOT__arg0);
        Vtest___024root____Vdpiimwrap_test__DOT__double_to_float_res_TOP(vlSelfRef.test__DOT__arg0, __Vfunc_test__DOT__double_to_float_res__2__Vfuncout);
        vlSelfRef.test__DOT__c_res = __Vfunc_test__DOT__double_to_float_res__2__Vfuncout;
        vlSelfRef.test__DOT__res_ack = 0U;
        vlSelfRef.test__DOT__dut_running = 1U;
        vlSelfRef.test__DOT__stb0 = 1U;
        co_await vlSelfRef.__VtrigSched_h085a72d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test.d2f.s_input_a_ack)", 
                                                             "test.sv", 
                                                             75);
        co_await vlSelfRef.__VtrigSched_h257c43da__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test.d2f.s_output_z_stb)", 
                                                             "test.sv", 
                                                             77);
        vlSelfRef.test__DOT__dut_running = 0U;
        co_await vlSelfRef.__VtrigSched_h360af72f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test.clk)", 
                                                             "test.sv", 
                                                             78);
        vlSelfRef.test__DOT__i_res = vlSelfRef.test__DOT__d2f__DOT__s_output_z;
        VL_WRITEF_NX("res from DUT     : %x [%f %e]\nres from C script: %x [%f %e]\n",0,
                     32,vlSelfRef.test__DOT__i_res,
                     64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__i_res),
                     64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__i_res),
                     32,vlSelfRef.test__DOT__c_res,
                     64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__c_res),
                     64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__c_res));
        if (VL_UNLIKELY((([&]() {
                            __Vfunc_test__DOT__var32_no_equal__3__var1 
                                = vlSelfRef.test__DOT__c_res;
                            __Vfunc_test__DOT__var32_no_equal__3__var0 
                                = vlSelfRef.test__DOT__d2f__DOT__s_output_z;
                            __Vfunc_test__DOT__var32_no_equal__3__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_test__DOT__var32_is_nan__4__var0 
                                                = __Vfunc_test__DOT__var32_no_equal__3__var0;
                                            __Vfunc_test__DOT__var32_is_nan__4__Vfuncout 
                                                = (IData)(
                                                          ((0x7f800000U 
                                                            == 
                                                            (0x7f800000U 
                                                             & __Vfunc_test__DOT__var32_is_nan__4__var0)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & __Vfunc_test__DOT__var32_is_nan__4__var0))));
                                        }(), (IData)(__Vfunc_test__DOT__var32_is_nan__4__Vfuncout)) 
                                    & ([&]() {
                                            __Vfunc_test__DOT__var32_is_nan__5__var0 
                                                = __Vfunc_test__DOT__var32_no_equal__3__var1;
                                            __Vfunc_test__DOT__var32_is_nan__5__Vfuncout 
                                                = (IData)(
                                                          ((0x7f800000U 
                                                            == 
                                                            (0x7f800000U 
                                                             & __Vfunc_test__DOT__var32_is_nan__5__var0)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & __Vfunc_test__DOT__var32_is_nan__5__var0))));
                                        }(), (IData)(__Vfunc_test__DOT__var32_is_nan__5__Vfuncout)))
                                    ? 0U : (IData)(
                                                   (__Vfunc_test__DOT__var32_no_equal__3__var0 
                                                    != __Vfunc_test__DOT__var32_no_equal__3__var1)));
                        }(), (IData)(__Vfunc_test__DOT__var32_no_equal__3__Vfuncout))))) {
            VL_WRITEF_NX("ERR: %x != %x\n[%0t] %%Fatal: test.sv:88: Assertion failed in %Ntest.test_input: TEST RESULT: FAIL\n\n",0,
                         32,vlSelfRef.test__DOT__i_res,
                         32,vlSelfRef.test__DOT__c_res,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("test.sv", 88, "", false);
        } else {
            VL_WRITEF_NX("TEST RESULT: OK\n",0);
        }
        VL_WRITEF_NX("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n",0);
    } else if (VL_UNLIKELY((VL_VALUEPLUSARGS_INN(64, 
                                                 std::string{"file=%s"}, 
                                                 vlSelfRef.test__DOT__filename)))) {
        vlSelfRef.test__DOT__file = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.test__DOT__filename)
                                                , std::string{"r"});
        ;
        while ((0U != VL_FGETS_NI(vlSelfRef.test__DOT__line, vlSelfRef.test__DOT__file))) {
            (void)VL_SSCANF_INNX(64,vlSelfRef.test__DOT__line,"%x",0,
                                 64,&(vlSelfRef.test__DOT__arg0)) ;
            vlSelfRef.test__DOT__rst = 0U;
            co_await vlSelfRef.__VtrigSched_h360af7ee__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge test.clk)", 
                                                                 "test.sv", 
                                                                 50);
            vlSelfRef.test__DOT__rst = 1U;
            co_await vlSelfRef.__VtrigSched_h360af7ee__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge test.clk)", 
                                                                 "test.sv", 
                                                                 51);
            vlSelfRef.test__DOT__rst = 0U;
            VL_WRITEF_NX("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nCheck DUT with input: %x [%20d]\n",0,
                         64,vlSelfRef.test__DOT__arg0,
                         64,vlSelfRef.test__DOT__arg0);
            Vtest___024root____Vdpiimwrap_test__DOT__double_to_float_res_TOP(vlSelfRef.test__DOT__arg0, __Vfunc_test__DOT__double_to_float_res__8__Vfuncout);
            vlSelfRef.test__DOT__c_res = __Vfunc_test__DOT__double_to_float_res__8__Vfuncout;
            vlSelfRef.test__DOT__res_ack = 0U;
            vlSelfRef.test__DOT__dut_running = 1U;
            vlSelfRef.test__DOT__stb0 = 1U;
            co_await vlSelfRef.__VtrigSched_h085a72d4__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge test.d2f.s_input_a_ack)", 
                                                                 "test.sv", 
                                                                 75);
            co_await vlSelfRef.__VtrigSched_h257c43da__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge test.d2f.s_output_z_stb)", 
                                                                 "test.sv", 
                                                                 77);
            vlSelfRef.test__DOT__dut_running = 0U;
            co_await vlSelfRef.__VtrigSched_h360af72f__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge test.clk)", 
                                                                 "test.sv", 
                                                                 78);
            vlSelfRef.test__DOT__i_res = vlSelfRef.test__DOT__d2f__DOT__s_output_z;
            VL_WRITEF_NX("res from DUT     : %x [%f %e]\nres from C script: %x [%f %e]\n",0,
                         32,vlSelfRef.test__DOT__i_res,
                         64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__i_res),
                         64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__i_res),
                         32,vlSelfRef.test__DOT__c_res,
                         64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__c_res),
                         64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__c_res));
            if (VL_UNLIKELY((([&]() {
                                __Vfunc_test__DOT__var32_no_equal__9__var1 
                                    = vlSelfRef.test__DOT__c_res;
                                __Vfunc_test__DOT__var32_no_equal__9__var0 
                                    = vlSelfRef.test__DOT__d2f__DOT__s_output_z;
                                __Vfunc_test__DOT__var32_no_equal__9__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_test__DOT__var32_is_nan__10__var0 
                                                    = __Vfunc_test__DOT__var32_no_equal__9__var0;
                                                __Vfunc_test__DOT__var32_is_nan__10__Vfuncout 
                                                    = (IData)(
                                                              ((0x7f800000U 
                                                                == 
                                                                (0x7f800000U 
                                                                 & __Vfunc_test__DOT__var32_is_nan__10__var0)) 
                                                               & (0U 
                                                                  != 
                                                                  (0x7fffffU 
                                                                   & __Vfunc_test__DOT__var32_is_nan__10__var0))));
                                            }(), (IData)(__Vfunc_test__DOT__var32_is_nan__10__Vfuncout)) 
                                        & ([&]() {
                                                __Vfunc_test__DOT__var32_is_nan__11__var0 
                                                    = __Vfunc_test__DOT__var32_no_equal__9__var1;
                                                __Vfunc_test__DOT__var32_is_nan__11__Vfuncout 
                                                    = (IData)(
                                                              ((0x7f800000U 
                                                                == 
                                                                (0x7f800000U 
                                                                 & __Vfunc_test__DOT__var32_is_nan__11__var0)) 
                                                               & (0U 
                                                                  != 
                                                                  (0x7fffffU 
                                                                   & __Vfunc_test__DOT__var32_is_nan__11__var0))));
                                            }(), (IData)(__Vfunc_test__DOT__var32_is_nan__11__Vfuncout)))
                                        ? 0U : (IData)(
                                                       (__Vfunc_test__DOT__var32_no_equal__9__var0 
                                                        != __Vfunc_test__DOT__var32_no_equal__9__var1)));
                            }(), (IData)(__Vfunc_test__DOT__var32_no_equal__9__Vfuncout))))) {
                VL_WRITEF_NX("ERR: %x != %x\n[%0t] %%Fatal: test.sv:88: Assertion failed in %Ntest.test_input: TEST RESULT: FAIL\n\n",0,
                             32,vlSelfRef.test__DOT__i_res,
                             32,vlSelfRef.test__DOT__c_res,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("test.sv", 88, "", false);
            } else {
                VL_WRITEF_NX("TEST RESULT: OK\n",0);
            }
            VL_WRITEF_NX("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n",0);
        }
    } else {
        __Vtemp_1[0U] = 0x653d2564U;
        __Vtemp_1[1U] = 0x5f6d6f64U;
        __Vtemp_1[2U] = 0x6e646f6dU;
        __Vtemp_1[3U] = 0x7261U;
        if (VL_UNLIKELY((VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(4, __Vtemp_1), 
                                              vlSelfRef.test__DOT__rand_step_num)))) {
            vlSelfRef.test__DOT__unnamedblk1__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.test__DOT__unnamedblk1__DOT__i, vlSelfRef.test__DOT__rand_step_num)) {
                vlSelfRef.test__DOT__arg0 = VL_RANDOM_Q();
                vlSelfRef.test__DOT__rst = 0U;
                co_await vlSelfRef.__VtrigSched_h360af7ee__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge test.clk)", 
                                                                     "test.sv", 
                                                                     50);
                vlSelfRef.test__DOT__rst = 1U;
                co_await vlSelfRef.__VtrigSched_h360af7ee__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge test.clk)", 
                                                                     "test.sv", 
                                                                     51);
                vlSelfRef.test__DOT__rst = 0U;
                VL_WRITEF_NX("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nCheck DUT with input: %x [%20d]\n",0,
                             64,vlSelfRef.test__DOT__arg0,
                             64,vlSelfRef.test__DOT__arg0);
                Vtest___024root____Vdpiimwrap_test__DOT__double_to_float_res_TOP(vlSelfRef.test__DOT__arg0, __Vfunc_test__DOT__double_to_float_res__14__Vfuncout);
                vlSelfRef.test__DOT__c_res = __Vfunc_test__DOT__double_to_float_res__14__Vfuncout;
                vlSelfRef.test__DOT__res_ack = 0U;
                vlSelfRef.test__DOT__dut_running = 1U;
                vlSelfRef.test__DOT__stb0 = 1U;
                co_await vlSelfRef.__VtrigSched_h085a72d4__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge test.d2f.s_input_a_ack)", 
                                                                     "test.sv", 
                                                                     75);
                co_await vlSelfRef.__VtrigSched_h257c43da__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge test.d2f.s_output_z_stb)", 
                                                                     "test.sv", 
                                                                     77);
                vlSelfRef.test__DOT__dut_running = 0U;
                co_await vlSelfRef.__VtrigSched_h360af72f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge test.clk)", 
                                                                     "test.sv", 
                                                                     78);
                vlSelfRef.test__DOT__i_res = vlSelfRef.test__DOT__d2f__DOT__s_output_z;
                VL_WRITEF_NX("res from DUT     : %x [%f %e]\nres from C script: %x [%f %e]\n",0,
                             32,vlSelfRef.test__DOT__i_res,
                             64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__i_res),
                             64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__i_res),
                             32,vlSelfRef.test__DOT__c_res,
                             64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__c_res),
                             64,VL_ISTOR_D_I(32, vlSelfRef.test__DOT__c_res));
                if (VL_UNLIKELY((([&]() {
                                    __Vfunc_test__DOT__var32_no_equal__15__var1 
                                        = vlSelfRef.test__DOT__c_res;
                                    __Vfunc_test__DOT__var32_no_equal__15__var0 
                                        = vlSelfRef.test__DOT__d2f__DOT__s_output_z;
                                    __Vfunc_test__DOT__var32_no_equal__15__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_test__DOT__var32_is_nan__16__var0 
                                                        = __Vfunc_test__DOT__var32_no_equal__15__var0;
                                                    __Vfunc_test__DOT__var32_is_nan__16__Vfuncout 
                                                        = (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & __Vfunc_test__DOT__var32_is_nan__16__var0)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & __Vfunc_test__DOT__var32_is_nan__16__var0))));
                                                }(), (IData)(__Vfunc_test__DOT__var32_is_nan__16__Vfuncout)) 
                                            & ([&]() {
                                                    __Vfunc_test__DOT__var32_is_nan__17__var0 
                                                        = __Vfunc_test__DOT__var32_no_equal__15__var1;
                                                    __Vfunc_test__DOT__var32_is_nan__17__Vfuncout 
                                                        = (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & __Vfunc_test__DOT__var32_is_nan__17__var0)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & __Vfunc_test__DOT__var32_is_nan__17__var0))));
                                                }(), (IData)(__Vfunc_test__DOT__var32_is_nan__17__Vfuncout)))
                                            ? 0U : (IData)(
                                                           (__Vfunc_test__DOT__var32_no_equal__15__var0 
                                                            != __Vfunc_test__DOT__var32_no_equal__15__var1)));
                                }(), (IData)(__Vfunc_test__DOT__var32_no_equal__15__Vfuncout))))) {
                    VL_WRITEF_NX("ERR: %x != %x\n[%0t] %%Fatal: test.sv:88: Assertion failed in %Ntest.test_input: TEST RESULT: FAIL\n\n",0,
                                 32,vlSelfRef.test__DOT__i_res,
                                 32,vlSelfRef.test__DOT__c_res,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("test.sv", 88, "", false);
                } else {
                    VL_WRITEF_NX("TEST RESULT: OK\n",0);
                }
                VL_WRITEF_NX("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n",0);
                vlSelfRef.test__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelfRef.test__DOT__unnamedblk1__DOT__i);
            }
        }
    }
    VL_FINISH_MT("test.sv", 160, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__act(Vtest___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest___024root___eval_triggers__act(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_triggers__act\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.test__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.test__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.test__DOT__d2f__DOT__s_input_a_ack) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test__DOT__d2f__DOT__s_input_a_ack__0))));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.test__DOT__d2f__DOT__s_output_z_stb) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test__DOT__d2f__DOT__s_output_z_stb__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__test__DOT__clk__0 
        = vlSelfRef.test__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test__DOT__d2f__DOT__s_input_a_ack__0 
        = vlSelfRef.test__DOT__d2f__DOT__s_input_a_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__test__DOT__d2f__DOT__s_output_z_stb__0 
        = vlSelfRef.test__DOT__d2f__DOT__s_output_z_stb;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest___024root___dump_triggers__act(vlSelf);
    }
#endif
}
