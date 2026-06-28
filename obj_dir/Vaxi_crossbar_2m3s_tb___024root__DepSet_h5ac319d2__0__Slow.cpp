// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_crossbar_2m3s_tb.h for the primary calling header

#include "Vaxi_crossbar_2m3s_tb__pch.h"
#include "Vaxi_crossbar_2m3s_tb___024root.h"

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->axi_crossbar_2m3s_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___eval_final(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___dump_triggers__stl(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaxi_crossbar_2m3s_tb___024root___eval_phase__stl(Vaxi_crossbar_2m3s_tb___024root* vlSelf);

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___eval_settle(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_settle\n"); );
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
            Vaxi_crossbar_2m3s_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/integration/axi_crossbar_2m3s_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vaxi_crossbar_2m3s_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___dump_triggers__stl(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___stl_sequent__TOP__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf);

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___eval_stl(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vaxi_crossbar_2m3s_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___eval_triggers__stl(Vaxi_crossbar_2m3s_tb___024root* vlSelf);

VL_ATTR_COLD bool Vaxi_crossbar_2m3s_tb___024root___eval_phase__stl(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaxi_crossbar_2m3s_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vaxi_crossbar_2m3s_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___dump_triggers__act(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge axi_crossbar_2m3s_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge axi_crossbar_2m3s_tb.clk or negedge axi_crossbar_2m3s_tb.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___dump_triggers__nba(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge axi_crossbar_2m3s_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge axi_crossbar_2m3s_tb.clk or negedge axi_crossbar_2m3s_tb.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___ctor_var_reset(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->axi_crossbar_2m3s_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__grant_trace[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__grant_idx = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__errors = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__rdata0 = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__rdata1 = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp0 = VL_RAND_RESET_I(2);
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp1 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__m0_mem_ref[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__m1_mem_ref[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_write_contention = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_read_contention = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m0_slave_sel = VL_RAND_RESET_I(3);
    vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0 = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__data0 = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__m1_slave_sel = VL_RAND_RESET_I(3);
    vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__data1 = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT____Vlvbound_hab0dbbbd__0 = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT____Vlvbound_hc2133c3a__0 = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_update_en = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_w_grant = VL_RAND_RESET_I(2);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant = VL_RAND_RESET_I(2);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_update_en = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_r_grant = VL_RAND_RESET_I(2);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot = VL_RAND_RESET_I(4);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot = VL_RAND_RESET_I(4);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_pending = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_pending = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot = VL_RAND_RESET_I(4);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot = VL_RAND_RESET_I(4);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__ar_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__awaddr_q = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__wdata_q = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__araddr_q = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__ar_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__awaddr_q = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__wdata_q = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__araddr_q = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__uart_reg = VL_RAND_RESET_I(32);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__ar_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__ar_done = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__priority_idx = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb = VL_RAND_RESET_I(2);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__priority_idx = VL_RAND_RESET_I(1);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb = VL_RAND_RESET_I(2);
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri = 0;
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
