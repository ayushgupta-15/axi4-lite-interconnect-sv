// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_crossbar_tb.h for the primary calling header

#include "Vaxi_crossbar_tb__pch.h"
#include "Vaxi_crossbar_tb__Syms.h"
#include "Vaxi_crossbar_tb___024root.h"

VL_ATTR_COLD void Vaxi_crossbar_tb___024root___eval_static__TOP(Vaxi_crossbar_tb___024root* vlSelf);
VL_ATTR_COLD void Vaxi_crossbar_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_tb__DOT__axi(Vaxi_crossbar_tb_axi4_lite_if* vlSelf);

VL_ATTR_COLD void Vaxi_crossbar_tb___024root___eval_static(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___eval_static\n"); );
    // Body
    Vaxi_crossbar_tb___024root___eval_static__TOP(vlSelf);
    Vaxi_crossbar_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_tb__DOT__axi((&vlSymsp->TOP__axi_crossbar_tb__DOT__axi));
    Vaxi_crossbar_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_tb__DOT__axi((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0));
    Vaxi_crossbar_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_tb__DOT__axi((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1));
    Vaxi_crossbar_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_tb__DOT__axi((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2));
    Vaxi_crossbar_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_tb__DOT__axi((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err));
}

VL_ATTR_COLD void Vaxi_crossbar_tb___024root___eval_static__TOP(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->axi_crossbar_tb__DOT__errors = 0U;
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_pending)) 
                 | ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY))));
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_pending)) 
                 | ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi_crossbar_tb___024root___dump_triggers__stl(Vaxi_crossbar_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaxi_crossbar_tb___024root___eval_triggers__stl(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaxi_crossbar_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vaxi_crossbar_tb___024root___stl_sequent__TOP__0(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel;
    axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 0;
    CData/*2:0*/ axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel;
    axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 0;
    // Body
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID 
        = (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID)) 
             | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID))) 
            | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID))) 
           | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID)));
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID 
        = (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RVALID)) 
             | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RVALID))) 
            | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RVALID))) 
           | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RVALID)));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RVALID))));
    axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR)) {
        axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 4U;
    }
    axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR)) {
        axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 4U;
    }
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot 
        = ((1U == (IData)(axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel))
                              ? 8U : 1U)));
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot 
        = ((1U == (IData)(axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel))
                              ? 8U : 1U)));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY 
        = (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARREADY)) 
             | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARREADY))) 
            | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARREADY))) 
           | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARREADY)));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY 
        = (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWREADY)) 
             | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWREADY))) 
            | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWREADY))) 
           | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWREADY)));
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot 
        = ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_pending)
            ? (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot)
            : (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
              >> 3U));
}
