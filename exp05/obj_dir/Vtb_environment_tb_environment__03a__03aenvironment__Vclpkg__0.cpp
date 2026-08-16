// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

Vtb_environment_tb_environment__03a__03aenvironment::Vtb_environment_tb_environment__03a__03aenvironment(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = VL_NEW(Vtb_environment_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__gen = VL_NEW(Vtb_environment_tb_environment__03a__03agenerator, vlSymsp, this->__PVT__gen2drv);
    this->__PVT__drv = VL_NEW(Vtb_environment_tb_environment__03a__03adriver, vlSymsp, this->__PVT__gen2drv);
}

VlCoroutine Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(2U, nullptr);
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "tb_environment.sv", 
                                  168);
    co_return;
}

VlCoroutine Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1(Vtb_environment__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__drv, "tb_environment.sv", 172)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_environment.sv", 172);
    co_return;
}

VlCoroutine Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0(Vtb_environment__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__gen, "tb_environment.sv", 170)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_environment.sv", 170);
    co_return;
}

void Vtb_environment_tb_environment__03a__03aenvironment::_ctor_var_reset(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_environment_tb_environment__03a__03aenvironment>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_environment_tb_environment__03a__03aenvironment::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_environment_tb_environment__03a__03aenvironment::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::to_string_middle\n"); );
    // Body
    std::string out;
    out += "gen:" + VL_TO_STRING(__PVT__gen);
    out += ", drv:" + VL_TO_STRING(__PVT__drv);
    out += ", gen2drv:" + VL_TO_STRING(__PVT__gen2drv);
    return (out);
}
