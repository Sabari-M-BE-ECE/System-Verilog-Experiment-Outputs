// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mux4to1.h for the primary calling header

#include "Vtb_mux4to1__pch.h"

VL_ATTR_COLD void Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1(Vtb_mux4to1_tb_mux4to1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("mux4to1.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_mux4to1_tb_mux4to1___ctor_var_reset(Vtb_mux4to1_tb_mux4to1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mux4to1_tb_mux4to1___ctor_var_reset\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__i0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8471475882151657015ull);
    vlSelf->__PVT__i1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2165040029148572678ull);
    vlSelf->__PVT__i2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12628911202397369737ull);
    vlSelf->__PVT__i3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6886176223853197501ull);
    vlSelf->__PVT__s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4753788280039121835ull);
    vlSelf->__PVT__s0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17677482070238907865ull);
}
