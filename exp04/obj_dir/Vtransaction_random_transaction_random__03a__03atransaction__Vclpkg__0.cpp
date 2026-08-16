// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_random.h for the primary calling header

#include "Vtransaction_random__pch.h"

void Vtransaction_random_transaction_random__03a__03atransaction::__VnoInFunc_display(Vtransaction_random__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtransaction_random_transaction_random__03a__03atransaction::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("A = %0# | B = %0# | Cin = %0#\n",0,
                 1,this->__PVT__a,1,(IData)(this->__PVT__b),
                 1,this->__PVT__cin);
}

Vtransaction_random_transaction_random__03a__03atransaction::Vtransaction_random_transaction_random__03a__03atransaction(Vtransaction_random__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtransaction_random_transaction_random__03a__03atransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtransaction_random_transaction_random__03a__03atransaction::__VnoInFunc_randomize(Vtransaction_random__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtransaction_random_transaction_random__03a__03atransaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__0__Vfuncout;
    __Vfunc___VBasicRand__0__Vfuncout = 0;
    // Body
    randomize__Vfuncrtn = 1U;
    randomize__Vfuncrtn = (1U & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__0__Vfuncout);
            }(), __Vfunc___VBasicRand__0__Vfuncout));
}

void Vtransaction_random_transaction_random__03a__03atransaction::__VnoInFunc___VBasicRand(Vtransaction_random__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtransaction_random_transaction_random__03a__03atransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__a = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__b = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__cin = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vtransaction_random_transaction_random__03a__03atransaction::_ctor_var_reset(Vtransaction_random__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtransaction_random_transaction_random__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__a = 0;
    __PVT__b = 0;
    __PVT__cin = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtransaction_random_transaction_random__03a__03atransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtransaction_random_transaction_random__03a__03atransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransaction_random_transaction_random__03a__03atransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtransaction_random_transaction_random__03a__03atransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransaction_random_transaction_random__03a__03atransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtransaction_random_transaction_random__03a__03atransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "a:" + VL_TO_STRING(__PVT__a);
    out += ", b:" + VL_TO_STRING(__PVT__b);
    out += ", cin:" + VL_TO_STRING(__PVT__cin);
    return (out);
}
