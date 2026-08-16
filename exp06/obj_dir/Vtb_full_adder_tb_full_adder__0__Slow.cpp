// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"

VL_ATTR_COLD void Vtb_full_adder_tb_full_adder___ctor_var_reset(Vtb_full_adder_tb_full_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_full_adder_tb_full_adder___ctor_var_reset\n"); );
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 510903276987443985ull);
    vlSelf->__PVT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900879642891266615ull);
    vlSelf->__PVT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8404852791380219477ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__coverage[__Vi0] = 0;
    }
}
