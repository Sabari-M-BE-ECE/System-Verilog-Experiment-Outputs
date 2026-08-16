// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

VL_ATTR_COLD void Vtb_environment_tb_environment___stl_sequent__TOP__tb_environment__0(Vtb_environment_tb_environment* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_environment_tb_environment___stl_sequent__TOP__tb_environment__0\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sum = ((IData)(vlSelfRef.__PVT__a) 
                            ^ (IData)(vlSelfRef.__PVT__b));
    vlSelfRef.__PVT__carry = ((IData)(vlSelfRef.__PVT__a) 
                              & (IData)(vlSelfRef.__PVT__b));
}

VL_ATTR_COLD void Vtb_environment_tb_environment___ctor_var_reset(Vtb_environment_tb_environment* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_environment_tb_environment___ctor_var_reset\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 510903276987443985ull);
    vlSelf->__PVT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900879642891266615ull);
    vlSelf->__PVT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17823321413984766096ull);
    vlSelf->__PVT__carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16970673489425401941ull);
}
