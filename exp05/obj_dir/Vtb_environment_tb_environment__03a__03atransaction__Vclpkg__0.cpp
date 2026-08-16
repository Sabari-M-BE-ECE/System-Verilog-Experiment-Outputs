// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

void Vtb_environment_tb_environment__03a__03atransaction::__VnoInFunc_display(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03atransaction::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("[TRANSACTION] A=%0# B=%0#\n",0,1,
                 this->__PVT__a,1,(IData)(this->__PVT__b));
}

Vtb_environment_tb_environment__03a__03atransaction::Vtb_environment_tb_environment__03a__03atransaction(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03atransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_environment_tb_environment__03a__03atransaction::__VnoInFunc_randomize(Vtb_environment__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03atransaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__0__Vfuncout;
    __Vfunc___VBasicRand__0__Vfuncout = 0;
    // Body
    randomize__Vfuncrtn = 1U;
    randomize__Vfuncrtn = (1U & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__0__Vfuncout);
            }(), __Vfunc___VBasicRand__0__Vfuncout));
}

void Vtb_environment_tb_environment__03a__03atransaction::__VnoInFunc___VBasicRand(Vtb_environment__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03atransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__a = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__b = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vtb_environment_tb_environment__03a__03atransaction::_ctor_var_reset(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__a = 0;
    __PVT__b = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtb_environment_tb_environment__03a__03atransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03atransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_environment_tb_environment__03a__03atransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03atransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_environment_tb_environment__03a__03atransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03atransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "a:" + VL_TO_STRING(__PVT__a);
    out += ", b:" + VL_TO_STRING(__PVT__b);
    return (out);
}
