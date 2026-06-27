// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vround_robin_arbiter_tb.h for the primary calling header

#include "Vround_robin_arbiter_tb__pch.h"
#include "Vround_robin_arbiter_tb___024root.h"

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___eval_static__TOP(Vround_robin_arbiter_tb___024root* vlSelf);

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___eval_static(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_static\n"); );
    // Body
    Vround_robin_arbiter_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___eval_static__TOP(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->round_robin_arbiter_tb__DOT__errors = 0U;
}

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___eval_initial__TOP(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->round_robin_arbiter_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___eval_final(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___dump_triggers__stl(Vround_robin_arbiter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vround_robin_arbiter_tb___024root___eval_phase__stl(Vround_robin_arbiter_tb___024root* vlSelf);

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___eval_settle(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vround_robin_arbiter_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/unit/round_robin_arbiter_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vround_robin_arbiter_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___dump_triggers__stl(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___stl_sequent__TOP__0(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___eval_stl(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vround_robin_arbiter_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___eval_triggers__stl(Vround_robin_arbiter_tb___024root* vlSelf);

VL_ATTR_COLD bool Vround_robin_arbiter_tb___024root___eval_phase__stl(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vround_robin_arbiter_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vround_robin_arbiter_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___dump_triggers__act(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge round_robin_arbiter_tb.clk or negedge round_robin_arbiter_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge round_robin_arbiter_tb.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge round_robin_arbiter_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___dump_triggers__nba(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge round_robin_arbiter_tb.clk or negedge round_robin_arbiter_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge round_robin_arbiter_tb.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge round_robin_arbiter_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___ctor_var_reset(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->round_robin_arbiter_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->round_robin_arbiter_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->round_robin_arbiter_tb__DOT__req = VL_RAND_RESET_I(2);
    vlSelf->round_robin_arbiter_tb__DOT__errors = 0;
    vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__priority_idx = VL_RAND_RESET_I(1);
    vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__grant_comb = VL_RAND_RESET_I(2);
    vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    vlSelf->round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
