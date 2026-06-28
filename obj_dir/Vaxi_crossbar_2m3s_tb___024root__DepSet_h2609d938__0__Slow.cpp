// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_crossbar_2m3s_tb.h for the primary calling header

#include "Vaxi_crossbar_2m3s_tb__pch.h"
#include "Vaxi_crossbar_2m3s_tb__Syms.h"
#include "Vaxi_crossbar_2m3s_tb___024root.h"

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___eval_static__TOP(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf);

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___eval_static(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_static\n"); );
    // Body
    Vaxi_crossbar_2m3s_tb___024root___eval_static__TOP(vlSelf);
    Vaxi_crossbar_2m3s_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0));
    Vaxi_crossbar_2m3s_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1));
    Vaxi_crossbar_2m3s_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux));
    Vaxi_crossbar_2m3s_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0));
    Vaxi_crossbar_2m3s_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1));
    Vaxi_crossbar_2m3s_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2));
    Vaxi_crossbar_2m3s_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err));
}

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___eval_static__TOP(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->axi_crossbar_2m3s_tb__DOT__grant_idx = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__errors = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_write_contention = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_read_contention = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits = 0U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_pending)) 
                 | ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY))));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_pending)) 
                 | ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___dump_triggers__stl(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___eval_triggers__stl(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaxi_crossbar_2m3s_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___stl_sequent__TOP__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant = 0;
    CData/*2:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 0;
    CData/*2:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 0;
    CData/*3:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot = 0;
    IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP 
        = (((((1U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot))
               ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BRESP)
               : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot))
                         ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BRESP)
                         : 0U)) | ((4U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot))
                                    ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BRESP)
                                    : 0U)) | ((8U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot))
                                               ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BRESP)
                                               : 0U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RRESP 
        = (((((1U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
               ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RRESP)
               : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                         ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RRESP)
                         : 0U)) | ((4U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                                    ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RRESP)
                                    : 0U)) | ((8U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                                               ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RRESP)
                                               : 0U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RDATA 
        = (((((1U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
               ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RDATA
               : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                         ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RDATA
                         : 0U)) | ((4U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                                    ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RDATA
                                    : 0U)) | ((8U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                                               ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RDATA
                                               : 0U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID 
        = (((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID)) 
             | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID))) 
            | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID))) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID 
        = (((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RVALID)) 
             | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RVALID))) 
            | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RVALID))) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RVALID))));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb = 0U;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 2U, axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i)) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__priority_idx;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                = (1U & (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                         + axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i));
            if ((1U & ((((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID) 
                         << 1U) | (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID)) 
                       >> (1U & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb 
                    = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
                goto __Vlabel1;
            }
            axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb = 0U;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 2U, axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i)) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__priority_idx;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                = (1U & (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                         + axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i));
            if ((1U & ((((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID) 
                         << 1U) | (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID)) 
                       >> (1U & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb 
                    = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
                goto __Vlabel2;
            }
            axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel2: ;
    }
    axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy)
            ? (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_r_grant)
            : (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy)
            ? (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_w_grant)
            : (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RVALID 
        = ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RVALID 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY)) 
           | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID)) 
           | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR 
        = ((2U & (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant))
            ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARADDR
            : vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARADDR);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BVALID 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID));
    if ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant))) {
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WDATA 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WDATA;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WSTRB 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WSTRB;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWADDR;
    } else {
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WDATA 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WDATA;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WSTRB 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WSTRB;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWADDR;
    }
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID)) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY)) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID)) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              >> 3U));
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR)) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 4U;
    }
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              >> 3U));
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR)) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 4U;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot 
        = ((1U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel))
                              ? 8U : 1U)));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot 
        = ((1U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel))
                              ? 8U : 1U)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY 
        = (((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARREADY)) 
             | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARREADY))) 
            | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARREADY))) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARREADY)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY 
        = (((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWREADY)) 
             | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWREADY))) 
            | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWREADY))) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWREADY)));
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_pending)
            ? (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot)
            : (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_update_en 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARREADY 
        = ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARREADY 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_update_en 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWREADY 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWREADY 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY 
        = (((((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WREADY)) 
             | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WREADY))) 
            | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WREADY))) 
           | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WREADY)));
}
