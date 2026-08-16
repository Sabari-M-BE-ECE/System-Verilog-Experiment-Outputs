// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

VlCoroutine Vtb_environment_tb_environment___eval_initial__TOP__tb_environment__Vtiming__0(Vtb_environment_tb_environment* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_environment_tb_environment___eval_initial__TOP__tb_environment__Vtiming__0\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_environment_tb_environment__03a__03aenvironment> __PVT__env;
    // Body
    vlSelfRef.__PVT__a = 0U;
    vlSelfRef.__PVT__b = 0U;
    VL_WRITEF_NX("\n============================================\n EXPERIMENT 5\n GENERATOR + DRIVER + ENVIRONMENT\n============================================\n\n",0);
    __PVT__env = VL_NEW(Vtb_environment_tb_environment__03a__03aenvironment, vlSymsp);
    co_await VL_NULL_CHECK(__PVT__env, "tb_environment.sv", 211)->__VnoInFunc_run(vlSymsp);
    VL_WRITEF_NX("\n============================================\n TEST COMPLETED\n============================================\n\n",0);
    VL_FINISH_MT("tb_environment.sv", 221, "");
    co_return;
}
