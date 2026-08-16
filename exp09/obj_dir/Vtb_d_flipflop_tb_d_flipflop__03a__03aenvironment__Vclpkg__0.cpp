// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::new\n"); );
    // Locals
    VlClassRef<Vtb_d_flipflop_std__03a__03amailbox__Tz1> TOP__tb_d_flipflop__DOT____PVT__gen2drv;
    VlClassRef<Vtb_d_flipflop_std__03a__03amailbox__Tz1> TOP__tb_d_flipflop__DOT____PVT__mon2scb;
    // Body
    _ctor_var_reset(vlSymsp);
    TOP__tb_d_flipflop__DOT____PVT__gen2drv = VL_NEW(Vtb_d_flipflop_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    TOP__tb_d_flipflop__DOT____PVT__mon2scb = VL_NEW(Vtb_d_flipflop_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__gen = VL_NEW(Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator, vlSymsp, TOP__tb_d_flipflop__DOT____PVT__gen2drv);
    this->__PVT__drv = VL_NEW(Vtb_d_flipflop_tb_d_flipflop__03a__03adriver, vlSymsp, TOP__tb_d_flipflop__DOT____PVT__gen2drv);
    this->__PVT__mon = VL_NEW(Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor, vlSymsp, TOP__tb_d_flipflop__DOT____PVT__mon2scb);
    this->__PVT__scb = VL_NEW(Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard, vlSymsp, TOP__tb_d_flipflop__DOT____PVT__mon2scb);
}

VlCoroutine Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::__VnoInFunc_run(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(4U, nullptr);
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__2(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__3(vlSymsp, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "tb_d_flipflop.sv", 
                                  385);
    co_return;
}

VlCoroutine Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::__VnoInFunc_run____Vfork_1__3(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::__VnoInFunc_run____Vfork_1__3\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__scb, "tb_d_flipflop.sv", 393)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_d_flipflop.sv", 393);
    co_return;
}

VlCoroutine Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__mon, "tb_d_flipflop.sv", 391)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_d_flipflop.sv", 391);
    co_return;
}

VlCoroutine Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__drv, "tb_d_flipflop.sv", 389)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_d_flipflop.sv", 389);
    co_return;
}

VlCoroutine Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__gen, "tb_d_flipflop.sv", 387)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_d_flipflop.sv", 387);
    co_return;
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::_ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment::to_string_middle\n"); );
    // Body
    std::string out;
    out += "gen:" + VL_TO_STRING(__PVT__gen);
    out += ", drv:" + VL_TO_STRING(__PVT__drv);
    out += ", mon:" + VL_TO_STRING(__PVT__mon);
    out += ", scb:" + VL_TO_STRING(__PVT__scb);
    return (out);
}
