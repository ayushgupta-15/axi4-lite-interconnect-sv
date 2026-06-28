// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_crossbar_2m3s_tb.h for the primary calling header

#include "Vaxi_crossbar_2m3s_tb__pch.h"
#include "Vaxi_crossbar_2m3s_tb_axi4_lite_if.h"

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaxi_crossbar_2m3s_tb_axi4_lite_if___eval_static__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0\n"); );
    // Body
    vlSelf->__PVT__outstanding_writes = 0U;
    vlSelf->__PVT__outstanding_reads = 0U;
}

VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb_axi4_lite_if___ctor_var_reset(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaxi_crossbar_2m3s_tb_axi4_lite_if___ctor_var_reset\n"); );
    // Body
    vlSelf->ACLK = VL_RAND_RESET_I(1);
    vlSelf->ARESETn = VL_RAND_RESET_I(1);
    vlSelf->AWADDR = VL_RAND_RESET_I(32);
    vlSelf->AWVALID = VL_RAND_RESET_I(1);
    vlSelf->AWREADY = VL_RAND_RESET_I(1);
    vlSelf->WDATA = VL_RAND_RESET_I(32);
    vlSelf->WSTRB = VL_RAND_RESET_I(4);
    vlSelf->WVALID = VL_RAND_RESET_I(1);
    vlSelf->WREADY = VL_RAND_RESET_I(1);
    vlSelf->BRESP = VL_RAND_RESET_I(2);
    vlSelf->BVALID = VL_RAND_RESET_I(1);
    vlSelf->BREADY = VL_RAND_RESET_I(1);
    vlSelf->ARADDR = VL_RAND_RESET_I(32);
    vlSelf->ARVALID = VL_RAND_RESET_I(1);
    vlSelf->ARREADY = VL_RAND_RESET_I(1);
    vlSelf->RDATA = VL_RAND_RESET_I(32);
    vlSelf->RRESP = VL_RAND_RESET_I(2);
    vlSelf->RVALID = VL_RAND_RESET_I(1);
    vlSelf->RREADY = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outstanding_writes = 0;
    vlSelf->__PVT__outstanding_reads = 0;
    vlSelf->_Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->_Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->_Vpast_2_0 = VL_RAND_RESET_I(32);
    vlSelf->_Vpast_3_0 = VL_RAND_RESET_I(1);
    vlSelf->_Vpast_4_0 = VL_RAND_RESET_I(1);
    vlSelf->_Vpast_5_0 = VL_RAND_RESET_I(32);
    vlSelf->_Vpast_6_0 = VL_RAND_RESET_I(4);
    vlSelf->_Vpast_7_0 = VL_RAND_RESET_I(1);
    vlSelf->_Vpast_8_0 = VL_RAND_RESET_I(1);
    vlSelf->_Vpast_9_0 = VL_RAND_RESET_I(2);
    vlSelf->_Vpast_10_0 = VL_RAND_RESET_I(1);
    vlSelf->_Vpast_11_0 = VL_RAND_RESET_I(1);
    vlSelf->_Vpast_12_0 = VL_RAND_RESET_I(32);
    vlSelf->_Vpast_13_0 = VL_RAND_RESET_I(1);
    vlSelf->_Vpast_14_0 = VL_RAND_RESET_I(1);
    vlSelf->_Vpast_15_0 = VL_RAND_RESET_I(32);
    vlSelf->_Vpast_16_0 = VL_RAND_RESET_I(2);
}
