// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_crossbar_tb.h for the primary calling header

#include "Vaxi_crossbar_tb__pch.h"
#include "Vaxi_crossbar_tb_axi4_lite_if.h"

std::string VL_TO_STRING(const Vaxi_crossbar_tb_axi4_lite_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_crossbar_tb_axi4_lite_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
