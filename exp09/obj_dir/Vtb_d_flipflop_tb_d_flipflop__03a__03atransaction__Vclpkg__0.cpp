// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

void Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc_display(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("RESET=%0# D=%0#\n",0,1,this->__PVT__reset,
                 1,(IData)(this->__PVT__d));
}

Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc_randomize(Vtb_d_flipflop__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__0__Vfuncout;
    __Vfunc___VBasicRand__0__Vfuncout = 0;
    // Body
    randomize__Vfuncrtn = 1U;
    randomize__Vfuncrtn = (1U & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__0__Vfuncout);
            }(), __Vfunc___VBasicRand__0__Vfuncout));
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc___VBasicRand(Vtb_d_flipflop__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__reset = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__d = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::_ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__reset = 0;
    __PVT__d = 0;
    __PVT__q = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "reset:" + VL_TO_STRING(__PVT__reset);
    out += ", d:" + VL_TO_STRING(__PVT__d);
    out += ", q:" + VL_TO_STRING(__PVT__q);
    return (out);
}
