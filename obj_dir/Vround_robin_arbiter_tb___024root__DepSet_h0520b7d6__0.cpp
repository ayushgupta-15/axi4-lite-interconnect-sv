// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vround_robin_arbiter_tb.h for the primary calling header

#include "Vround_robin_arbiter_tb__pch.h"
#include "Vround_robin_arbiter_tb___024root.h"

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___eval_initial__TOP(Vround_robin_arbiter_tb___024root* vlSelf);
VlCoroutine Vround_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__0(Vround_robin_arbiter_tb___024root* vlSelf);
VlCoroutine Vround_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__1(Vround_robin_arbiter_tb___024root* vlSelf);

void Vround_robin_arbiter_tb___024root___eval_initial(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_initial\n"); );
    // Body
    Vround_robin_arbiter_tb___024root___eval_initial__TOP(vlSelf);
    Vround_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vround_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__clk__0 
        = vlSelf->round_robin_arbiter_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__rst_n__0 
        = vlSelf->round_robin_arbiter_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vround_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__0(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ round_robin_arbiter_tb__DOT__i;
    round_robin_arbiter_tb__DOT__i = 0;
    // Body
    VL_WRITEF("TB Start\n");
    vlSelf->round_robin_arbiter_tb__DOT__rst_n = 0U;
    vlSelf->round_robin_arbiter_tb__DOT__req = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                       33);
    vlSelf->round_robin_arbiter_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                       35);
    VL_WRITEF("Starting Round Robin Arbiter Tests...\n\n");
    co_await vlSelf->__VtrigSched_he4e0202c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       40);
    vlSelf->round_robin_arbiter_tb__DOT__req = 0U;
    co_await vlSelf->__VtrigSched_he4e01e6d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       42);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                       43);
    if ((0U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb))) {
        VL_WRITEF("FAIL: No Request (Expected 00, Got %b)\n",
                  2,vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb);
        vlSelf->round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
    } else {
        VL_WRITEF("PASS: No Request\n");
    }
    co_await vlSelf->__VtrigSched_he4e0202c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       52);
    vlSelf->round_robin_arbiter_tb__DOT__req = 1U;
    co_await vlSelf->__VtrigSched_he4e01e6d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       54);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                       55);
    if ((1U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb))) {
        VL_WRITEF("FAIL: Single Request M0 (Expected 01, Got %b)\n",
                  2,vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb);
        vlSelf->round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
    } else {
        VL_WRITEF("PASS: Single Request M0\n");
    }
    co_await vlSelf->__VtrigSched_he4e0202c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       64);
    vlSelf->round_robin_arbiter_tb__DOT__req = 2U;
    co_await vlSelf->__VtrigSched_he4e01e6d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       66);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                       67);
    if ((2U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb))) {
        VL_WRITEF("FAIL: Single Request M1 (Expected 10, Got %b)\n",
                  2,vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb);
        vlSelf->round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
    } else {
        VL_WRITEF("PASS: Single Request M1\n");
    }
    co_await vlSelf->__VtrigSched_he4e0202c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       76);
    vlSelf->round_robin_arbiter_tb__DOT__req = 3U;
    co_await vlSelf->__VtrigSched_he4e01e6d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                       80);
    if (VL_UNLIKELY((1U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb)))) {
        VL_WRITEF("FAIL: Both Request Cycle 1 (Expected 01, Got %b)\n",
                  2,vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb);
        vlSelf->round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_he4e01e6d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       83);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                       83);
    if (VL_UNLIKELY((2U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb)))) {
        VL_WRITEF("FAIL: Both Request Cycle 2 (Expected 10, Got %b)\n",
                  2,vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb);
        vlSelf->round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_he4e01e6d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       86);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                       86);
    if (VL_UNLIKELY((1U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb)))) {
        VL_WRITEF("FAIL: Both Request Cycle 3 (Expected 01, Got %b)\n",
                  2,vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb);
        vlSelf->round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_he4e01e6d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       89);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                       89);
    if (VL_UNLIKELY((2U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb)))) {
        VL_WRITEF("FAIL: Both Request Cycle 4 (Expected 10, Got %b)\n",
                  2,vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb);
        vlSelf->round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0U == vlSelf->round_robin_arbiter_tb__DOT__errors))) {
        VL_WRITEF("PASS: Alternating Arbitration\n");
    }
    vlSelf->round_robin_arbiter_tb__DOT__req = 0U;
    co_await vlSelf->__VtrigSched_he4e0202c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge round_robin_arbiter_tb.clk)", 
                                                       "tb/unit/round_robin_arbiter_tb.sv", 
                                                       96);
    round_robin_arbiter_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x3e8U, round_robin_arbiter_tb__DOT__i)) {
        co_await vlSelf->__VtrigSched_he4e0202c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge round_robin_arbiter_tb.clk)", 
                                                           "tb/unit/round_robin_arbiter_tb.sv", 
                                                           99);
        vlSelf->round_robin_arbiter_tb__DOT__req = 
            (3U & VL_URANDOM_RANGE_I(0U, 3U));
        co_await vlSelf->__VtrigSched_he4e01e6d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge round_robin_arbiter_tb.clk)", 
                                                           "tb/unit/round_robin_arbiter_tb.sv", 
                                                           102);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/unit/round_robin_arbiter_tb.sv", 
                                           103);
        if (VL_UNLIKELY((((0U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb)) 
                          & (1U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb))) 
                         & (2U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb))))) {
            VL_WRITEF("FAIL: Mutual Exclusion violated at cycle %0d: grant=%b\n",
                      32,round_robin_arbiter_tb__DOT__i,
                      2,(IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb));
            vlSelf->round_robin_arbiter_tb__DOT__errors 
                = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
        }
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__req)) 
                         & (0U == (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb))))) {
            VL_WRITEF("FAIL: Progress violated at cycle %0d: req=%b, grant=%b\n",
                      32,round_robin_arbiter_tb__DOT__i,
                      2,(IData)(vlSelf->round_robin_arbiter_tb__DOT__req),
                      2,vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb);
            vlSelf->round_robin_arbiter_tb__DOT__errors 
                = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
        }
        if (VL_UNLIKELY(((1U == (IData)(vlSelf->round_robin_arbiter_tb__DOT__req)) 
                         & (1U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb))))) {
            VL_WRITEF("FAIL: Single req M0 violated at cycle %0d: grant=%b\n",
                      32,round_robin_arbiter_tb__DOT__i,
                      2,(IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb));
            vlSelf->round_robin_arbiter_tb__DOT__errors 
                = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
        }
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->round_robin_arbiter_tb__DOT__req)) 
                         & (2U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb))))) {
            VL_WRITEF("FAIL: Single req M1 violated at cycle %0d: grant=%b\n",
                      32,round_robin_arbiter_tb__DOT__i,
                      2,(IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb));
            vlSelf->round_robin_arbiter_tb__DOT__errors 
                = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__errors);
        }
        round_robin_arbiter_tb__DOT__i = ((IData)(1U) 
                                          + round_robin_arbiter_tb__DOT__i);
    }
    if (VL_UNLIKELY((0U == vlSelf->round_robin_arbiter_tb__DOT__errors))) {
        VL_WRITEF("PASS: Random Regression (1000)\n");
    }
    VL_WRITEF("\n--------------------------------\n");
    if ((0U == vlSelf->round_robin_arbiter_tb__DOT__errors)) {
        VL_WRITEF("ALL TESTS PASSED\n");
    } else {
        VL_WRITEF("SOME TESTS FAILED\n");
    }
    VL_WRITEF("--------------------------------\n");
    VL_FINISH_MT("tb/unit/round_robin_arbiter_tb.sv", 135, "");
}

VL_INLINE_OPT VlCoroutine Vround_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__1(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/unit/round_robin_arbiter_tb.sv", 
                                           22);
        vlSelf->round_robin_arbiter_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelf->round_robin_arbiter_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vround_robin_arbiter_tb___024root___act_comb__TOP__0(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___act_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
    round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb = 0U;
    round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 2U, round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i)) {
            vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                = ((IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__priority_idx) 
                   + round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i);
            if (VL_LTES_III(32, 2U, vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) {
                vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                    = (vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                       - (IData)(2U));
            }
            if ((1U & ((IData)(vlSelf->round_robin_arbiter_tb__DOT__req) 
                       >> (1U & vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
                vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb 
                    = ((IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
                goto __Vlabel1;
            }
            round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
}

void Vround_robin_arbiter_tb___024root___eval_act(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_act\n"); );
    // Body
    if ((0xeULL & vlSelf->__VactTriggered.word(0U))) {
        Vround_robin_arbiter_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vround_robin_arbiter_tb___024root___nba_sequent__TOP__0(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->round_robin_arbiter_tb__DOT__rst_n) {
        if ((0U != (IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb))) {
            vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk3__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 2U, vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk3__DOT__i)) {
                    if ((1U & ((IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb) 
                               >> (1U & vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk3__DOT__i)))) {
                        vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__priority_idx 
                            = ((1U == vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk3__DOT__i)
                                ? 0U : (1U & ((IData)(1U) 
                                              + vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk3__DOT__i)));
                        goto __Vlabel2;
                    }
                    vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk3__DOT__i 
                        = ((IData)(1U) + vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk3__DOT__i);
                }
                __Vlabel2: ;
            }
        }
    } else {
        vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__priority_idx = 0U;
    }
}

VL_INLINE_OPT void Vround_robin_arbiter_tb___024root___nba_comb__TOP__0(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
    round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb = 0U;
    round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 2U, round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i)) {
            vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                = ((IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__priority_idx) 
                   + round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i);
            if (VL_LTES_III(32, 2U, vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) {
                vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                    = (vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                       - (IData)(2U));
            }
            if ((1U & ((IData)(vlSelf->round_robin_arbiter_tb__DOT__req) 
                       >> (1U & vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
                vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb 
                    = ((IData)(vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
                goto __Vlabel3;
            }
            round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel3: ;
    }
}

void Vround_robin_arbiter_tb___024root___eval_nba(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vround_robin_arbiter_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xfULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vround_robin_arbiter_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vround_robin_arbiter_tb___024root___timing_resume(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he4e0202c__0.resume("@(negedge round_robin_arbiter_tb.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he4e01e6d__0.resume("@(posedge round_robin_arbiter_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vround_robin_arbiter_tb___024root___timing_commit(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he4e0202c__0.commit("@(negedge round_robin_arbiter_tb.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he4e01e6d__0.commit("@(posedge round_robin_arbiter_tb.clk)");
    }
}

void Vround_robin_arbiter_tb___024root___eval_triggers__act(Vround_robin_arbiter_tb___024root* vlSelf);

bool Vround_robin_arbiter_tb___024root___eval_phase__act(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vround_robin_arbiter_tb___024root___eval_triggers__act(vlSelf);
    Vround_robin_arbiter_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vround_robin_arbiter_tb___024root___timing_resume(vlSelf);
        Vround_robin_arbiter_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vround_robin_arbiter_tb___024root___eval_phase__nba(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vround_robin_arbiter_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___dump_triggers__nba(Vround_robin_arbiter_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___dump_triggers__act(Vround_robin_arbiter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vround_robin_arbiter_tb___024root___eval(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vround_robin_arbiter_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/unit/round_robin_arbiter_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vround_robin_arbiter_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/unit/round_robin_arbiter_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vround_robin_arbiter_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vround_robin_arbiter_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vround_robin_arbiter_tb___024root___eval_debug_assertions(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
