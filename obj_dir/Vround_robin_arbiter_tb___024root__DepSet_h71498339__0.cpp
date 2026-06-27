// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vround_robin_arbiter_tb.h for the primary calling header

#include "Vround_robin_arbiter_tb__pch.h"
#include "Vround_robin_arbiter_tb__Syms.h"
#include "Vround_robin_arbiter_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround_robin_arbiter_tb___024root___dump_triggers__act(Vround_robin_arbiter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vround_robin_arbiter_tb___024root___eval_triggers__act(Vround_robin_arbiter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vround_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround_robin_arbiter_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->round_robin_arbiter_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->round_robin_arbiter_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->round_robin_arbiter_tb__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__clk__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->round_robin_arbiter_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__clk__0 
        = vlSelf->round_robin_arbiter_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__rst_n__0 
        = vlSelf->round_robin_arbiter_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vround_robin_arbiter_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
