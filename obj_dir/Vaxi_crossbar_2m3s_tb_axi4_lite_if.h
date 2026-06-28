// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxi_crossbar_2m3s_tb.h for the primary calling header

#ifndef VERILATED_VAXI_CROSSBAR_2M3S_TB_AXI4_LITE_IF_H_
#define VERILATED_VAXI_CROSSBAR_2M3S_TB_AXI4_LITE_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vaxi_crossbar_2m3s_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaxi_crossbar_2m3s_tb_axi4_lite_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(ACLK,0,0);
        VL_IN8(ARESETn,0,0);
        CData/*0:0*/ AWVALID;
        CData/*0:0*/ AWREADY;
        CData/*3:0*/ WSTRB;
        CData/*0:0*/ WVALID;
        CData/*0:0*/ WREADY;
        CData/*1:0*/ BRESP;
        CData/*0:0*/ BVALID;
        CData/*0:0*/ BREADY;
        CData/*0:0*/ ARVALID;
        CData/*0:0*/ ARREADY;
        CData/*1:0*/ RRESP;
        CData/*0:0*/ RVALID;
        CData/*0:0*/ RREADY;
        CData/*0:0*/ _Vpast_0_0;
        CData/*0:0*/ _Vpast_1_0;
        CData/*0:0*/ _Vpast_3_0;
        CData/*0:0*/ _Vpast_4_0;
        CData/*3:0*/ _Vpast_6_0;
        CData/*0:0*/ _Vpast_7_0;
        CData/*0:0*/ _Vpast_8_0;
        CData/*1:0*/ _Vpast_9_0;
        CData/*0:0*/ _Vpast_10_0;
        CData/*0:0*/ _Vpast_11_0;
        CData/*0:0*/ _Vpast_13_0;
        CData/*0:0*/ _Vpast_14_0;
        CData/*1:0*/ _Vpast_16_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_0_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_1_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_10_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_11_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_7_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_8_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__BVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BRESP;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_9_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_13_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_14_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__RVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RRESP;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_16_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_3_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_4_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WVALID;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WSTRB;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_6_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__BREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__RREADY;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_0_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_1_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_10_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_11_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_7_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_8_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__BVALID;
    };
    struct {
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_9_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_13_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_14_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__RVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_16_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_3_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_4_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WVALID;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WSTRB;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_6_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__BREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__RREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_7_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_8_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_9_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_13_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_14_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_16_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_3_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_4_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WVALID;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_6_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_10_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_11_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_0_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_1_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_3_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_4_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__WVALID;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_6_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_10_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_11_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__ARVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_0_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_1_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__AWVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_7_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_8_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BRESP;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_9_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_13_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_14_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RRESP;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_16_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__WREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__ARREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__AWREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_3_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_4_0;
    };
    struct {
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__WVALID;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_6_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_10_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_11_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__ARVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_0_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_1_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__AWVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_7_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_8_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BRESP;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_9_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_13_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_14_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RRESP;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_16_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__WREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__ARREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__AWREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_3_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_4_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__WVALID;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_6_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_10_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_11_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__ARVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_0_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_1_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__AWVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_7_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_8_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BRESP;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_9_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_13_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_14_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RRESP;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_16_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__WREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__ARREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__AWREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_3_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_4_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__WVALID;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_6_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_10_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_11_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__ARVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_0_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_1_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__AWVALID;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_7_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_8_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BRESP;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_9_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_13_0;
    };
    struct {
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_14_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RVALID;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RRESP;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_16_0;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__WREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__ARREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__AWREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BREADY;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RREADY;
        IData/*31:0*/ AWADDR;
        IData/*31:0*/ WDATA;
        IData/*31:0*/ ARADDR;
        IData/*31:0*/ RDATA;
        IData/*31:0*/ __PVT__outstanding_writes;
        IData/*31:0*/ __PVT__outstanding_reads;
        IData/*31:0*/ _Vpast_2_0;
        IData/*31:0*/ _Vpast_5_0;
        IData/*31:0*/ _Vpast_12_0;
        IData/*31:0*/ _Vpast_15_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0____PVT__outstanding_writes;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0____PVT__outstanding_reads;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWADDR;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_2_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARADDR;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_12_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RDATA;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_15_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WDATA;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_5_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1____PVT__outstanding_writes;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1____PVT__outstanding_reads;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWADDR;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_2_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARADDR;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_12_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_15_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WDATA;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_5_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux____PVT__outstanding_writes;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux____PVT__outstanding_reads;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_15_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_5_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_12_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_2_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0____PVT__outstanding_writes;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0____PVT__outstanding_reads;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_5_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_12_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_2_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RDATA;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_15_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1____PVT__outstanding_writes;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1____PVT__outstanding_reads;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_5_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_12_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_2_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RDATA;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_15_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2____PVT__outstanding_writes;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2____PVT__outstanding_reads;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_5_0;
    };
    struct {
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_12_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_2_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RDATA;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_15_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err____PVT__outstanding_writes;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err____PVT__outstanding_reads;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_5_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_12_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_2_0;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RDATA;
        IData/*31:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_15_0;
    };

    // INTERNAL VARIABLES
    Vaxi_crossbar_2m3s_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaxi_crossbar_2m3s_tb_axi4_lite_if(Vaxi_crossbar_2m3s_tb__Syms* symsp, const char* v__name);
    ~Vaxi_crossbar_2m3s_tb_axi4_lite_if();
    VL_UNCOPYABLE(Vaxi_crossbar_2m3s_tb_axi4_lite_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vaxi_crossbar_2m3s_tb_axi4_lite_if* obj);

#endif  // guard
