// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_crossbar_2m3s_tb.h for the primary calling header

#include "Vaxi_crossbar_2m3s_tb__pch.h"
#include "Vaxi_crossbar_2m3s_tb___024root.h"

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__1(Vaxi_crossbar_2m3s_tb___024root* vlSelf);

void Vaxi_crossbar_2m3s_tb___024root___eval_initial(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_initial\n"); );
    // Body
    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP(vlSelf);
    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__clk__0 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__rst_n__0 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__1(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           20);
        vlSelf->axi_crossbar_2m3s_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__clk)));
    }
}

void Vaxi_crossbar_2m3s_tb___024root___act_comb__TOP__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf);

void Vaxi_crossbar_2m3s_tb___024root___eval_act(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_act\n"); );
    // Body
    if ((5ULL & vlSelf->__VactTriggered.word(0U))) {
        Vaxi_crossbar_2m3s_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vaxi_crossbar_2m3s_tb___024root___timing_resume(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h54874cc1__0.resume("@(posedge axi_crossbar_2m3s_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vaxi_crossbar_2m3s_tb___024root___timing_commit(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h54874cc1__0.commit("@(posedge axi_crossbar_2m3s_tb.clk)");
    }
}

void Vaxi_crossbar_2m3s_tb___024root___eval_triggers__act(Vaxi_crossbar_2m3s_tb___024root* vlSelf);

bool Vaxi_crossbar_2m3s_tb___024root___eval_phase__act(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaxi_crossbar_2m3s_tb___024root___eval_triggers__act(vlSelf);
    Vaxi_crossbar_2m3s_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vaxi_crossbar_2m3s_tb___024root___timing_resume(vlSelf);
        Vaxi_crossbar_2m3s_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vaxi_crossbar_2m3s_tb___024root___eval_nba(Vaxi_crossbar_2m3s_tb___024root* vlSelf);

bool Vaxi_crossbar_2m3s_tb___024root___eval_phase__nba(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaxi_crossbar_2m3s_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
void Vaxi_crossbar_2m3s_tb___024root___eval_debug_assertions(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
