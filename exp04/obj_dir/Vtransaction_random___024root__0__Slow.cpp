// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_random.h for the primary calling header

#include "Vtransaction_random__pch.h"

VL_ATTR_COLD void Vtransaction_random___024root___eval_static(Vtransaction_random___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root___eval_static\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtransaction_random_transaction_random___eval_initial__TOP__transaction_random(Vtransaction_random_transaction_random* vlSelf);

VL_ATTR_COLD void Vtransaction_random___024root___eval_initial(Vtransaction_random___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root___eval_initial\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtransaction_random_transaction_random___eval_initial__TOP__transaction_random((&vlSymsp->TOP__transaction_random));
}

VL_ATTR_COLD void Vtransaction_random___024root___eval_final(Vtransaction_random___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root___eval_final\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtransaction_random___024root___eval_settle(Vtransaction_random___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root___eval_settle\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtransaction_random___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransaction_random___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtransaction_random___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtransaction_random___024root___ctor_var_reset(Vtransaction_random___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root___ctor_var_reset\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
