// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_crossbar_tb.h for the primary calling header

#include "Vaxi_crossbar_tb__pch.h"
#include "Vaxi_crossbar_tb__Syms.h"
#include "Vaxi_crossbar_tb_axi4_lite_if.h"

void Vaxi_crossbar_tb_axi4_lite_if___ctor_var_reset(Vaxi_crossbar_tb_axi4_lite_if* vlSelf);

Vaxi_crossbar_tb_axi4_lite_if::Vaxi_crossbar_tb_axi4_lite_if(Vaxi_crossbar_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaxi_crossbar_tb_axi4_lite_if___ctor_var_reset(this);
}

void Vaxi_crossbar_tb_axi4_lite_if::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaxi_crossbar_tb_axi4_lite_if::~Vaxi_crossbar_tb_axi4_lite_if() {
}
