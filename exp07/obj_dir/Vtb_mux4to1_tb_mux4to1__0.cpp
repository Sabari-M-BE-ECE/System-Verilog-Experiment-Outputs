// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mux4to1.h for the primary calling header

#include "Vtb_mux4to1__pch.h"

VlCoroutine Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1__Vtiming__0(Vtb_mux4to1_tb_mux4to1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1__Vtiming__0\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    while (true) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000001388ULL, 
                                                nullptr, 
                                                "tb_mux4to1.sv", 
                                                15);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
    }
    co_return;
}

VlCoroutine Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1__Vtiming__1(Vtb_mux4to1_tb_mux4to1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1__Vtiming__1\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03aenvironment> __PVT__env;
    // Body
    vlSelfRef.__PVT__i0 = 0U;
    vlSelfRef.__PVT__i1 = 0U;
    vlSelfRef.__PVT__i2 = 0U;
    vlSelfRef.__PVT__i3 = 0U;
    vlSelfRef.__PVT__s1 = 0U;
    vlSelfRef.__PVT__s0 = 0U;
    VL_WRITEF_NX("\n==========================================\n EXPERIMENT 7\n 4:1 MULTIPLEXER VERIFICATION\n==========================================\n\n",0);
    __PVT__env = VL_NEW(Vtb_mux4to1_tb_mux4to1__03a__03aenvironment, vlSymsp);
    vlSymsp->TOP.__Vm_traceActivity[2U] = 1U;
    co_await VL_NULL_CHECK(__PVT__env, "tb_mux4to1.sv", 515)->__VnoInFunc_run(vlSymsp);
    VL_WRITEF_NX("\n==========================================\n TEST SUMMARY\n==========================================\nPASS = %0d\nFAIL = %0d\n\n",0,
                 32,VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb_mux4to1.sv", 533)
                                  ->__PVT__scb, "tb_mux4to1.sv", 533)
                 ->__PVT__pass_count,32,VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb_mux4to1.sv", 539)
                                                      ->__PVT__scb, "tb_mux4to1.sv", 539)
                 ->__PVT__fail_count);
    if ((0U == VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb_mux4to1.sv", 546)
                             ->__PVT__scb, "tb_mux4to1.sv", 546)
         ->__PVT__fail_count)) {
        VL_WRITEF_NX("RESULT = ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("RESULT = SOME TESTS FAILED\n",0);
    }
    VL_WRITEF_NX("\n==========================================\n SIMULATION COMPLETED\n==========================================\n\n",0);
    VL_FINISH_MT("tb_mux4to1.sv", 574, "");
    vlSymsp->TOP.__Vm_traceActivity[2U] = 1U;
    co_return;
}
