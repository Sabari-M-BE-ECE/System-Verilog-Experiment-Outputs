// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mux4to1.h for the primary calling header

#include "Vtb_mux4to1__pch.h"

void Vtb_mux4to1_tb_mux4to1__03a__03atransaction::__VnoInFunc_display(Vtb_mux4to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03atransaction::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("I0=%0# I1=%0# I2=%0# I3=%0# | S1=%0# S0=%0#\n",0,
                 1,this->__PVT__i0,1,(IData)(this->__PVT__i1),
                 1,this->__PVT__i2,1,(IData)(this->__PVT__i3),
                 1,this->__PVT__s1,1,(IData)(this->__PVT__s0));
}

Vtb_mux4to1_tb_mux4to1__03a__03atransaction::Vtb_mux4to1_tb_mux4to1__03a__03atransaction(Vtb_mux4to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03atransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_mux4to1_tb_mux4to1__03a__03atransaction::__VnoInFunc_randomize(Vtb_mux4to1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03atransaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__0__Vfuncout;
    __Vfunc___VBasicRand__0__Vfuncout = 0;
    // Body
    randomize__Vfuncrtn = 1U;
    randomize__Vfuncrtn = (1U & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__0__Vfuncout);
            }(), __Vfunc___VBasicRand__0__Vfuncout));
}

void Vtb_mux4to1_tb_mux4to1__03a__03atransaction::__VnoInFunc___VBasicRand(Vtb_mux4to1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03atransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__i0 = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__i1 = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__i2 = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__i3 = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__s1 = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__s0 = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vtb_mux4to1_tb_mux4to1__03a__03atransaction::_ctor_var_reset(Vtb_mux4to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__i0 = 0;
    __PVT__i1 = 0;
    __PVT__i2 = 0;
    __PVT__i3 = 0;
    __PVT__s1 = 0;
    __PVT__s0 = 0;
    __PVT__y = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03atransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03atransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_mux4to1_tb_mux4to1__03a__03atransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03atransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_mux4to1_tb_mux4to1__03a__03atransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03atransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "i0:" + VL_TO_STRING(__PVT__i0);
    out += ", i1:" + VL_TO_STRING(__PVT__i1);
    out += ", i2:" + VL_TO_STRING(__PVT__i2);
    out += ", i3:" + VL_TO_STRING(__PVT__i3);
    out += ", s1:" + VL_TO_STRING(__PVT__s1);
    out += ", s0:" + VL_TO_STRING(__PVT__s0);
    out += ", y:" + VL_TO_STRING(__PVT__y);
    return (out);
}
