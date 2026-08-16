// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_random.h for the primary calling header

#include "Vtransaction_random__pch.h"

VL_ATTR_COLD void Vtransaction_random_transaction_random___eval_initial__TOP__transaction_random(Vtransaction_random_transaction_random* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtransaction_random_transaction_random___eval_initial__TOP__transaction_random\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtransaction_random_transaction_random__03a__03atransaction> __PVT__unnamedblk1__DOT__tr;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_randomize__1__Vfuncout;
    __Vtask_randomize__1__Vfuncout = 0;
    // Body
    __PVT__unnamedblk1__DOT__tr = VL_NEW(Vtransaction_random_transaction_random__03a__03atransaction, vlSymsp);
    VL_WRITEF_NX("\n====================================\n TRANSACTION RANDOMIZATION\n====================================\n\n",0);
    __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000000aU, __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
        if ((0U != ((VlNull{} != __PVT__unnamedblk1__DOT__tr)
                     ? ([&]() {
                            VL_NULL_CHECK(__PVT__unnamedblk1__DOT__tr, "transaction_random.sv", 56)
                        ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
                        }(), __Vtask_randomize__1__Vfuncout)
                     : 0U))) {
            VL_WRITEF_NX("Transaction %0d:\n",0,32,
                         ((IData)(1U) + __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i));
            VL_NULL_CHECK(__PVT__unnamedblk1__DOT__tr, "transaction_random.sv", 60)->__VnoInFunc_display(vlSymsp);
        } else {
            VL_WRITEF_NX("Randomization FAILED\n",0);
        }
        __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF_NX("\nRandomization completed.\n\n",0);
    VL_FINISH_MT("transaction_random.sv", 77, "");
}

VL_ATTR_COLD void Vtransaction_random_transaction_random___ctor_var_reset(Vtransaction_random_transaction_random* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtransaction_random_transaction_random___ctor_var_reset\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
