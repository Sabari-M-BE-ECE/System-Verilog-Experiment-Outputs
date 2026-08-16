// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter.h for the primary calling header

#include "Vtb_counter__pch.h"

VL_ATTR_COLD void Vtb_counter_tb_counter___eval_initial__TOP__tb_counter(Vtb_counter_tb_counter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_counter_tb_counter___eval_initial__TOP__tb_counter\n"); );
    Vtb_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("counter.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_counter_tb_counter___ctor_var_reset(Vtb_counter_tb_counter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_counter_tb_counter___ctor_var_reset\n"); );
    Vtb_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10730142128712957955ull);
}
