// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

VL_ATTR_COLD void Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop(Vtb_d_flipflop_tb_d_flipflop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("d_flipflop.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_d_flipflop_tb_d_flipflop___ctor_var_reset(Vtb_d_flipflop_tb_d_flipflop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_d_flipflop_tb_d_flipflop___ctor_var_reset\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1720370409040345145ull);
    vlSelf->__PVT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8861071527689086543ull);
}
