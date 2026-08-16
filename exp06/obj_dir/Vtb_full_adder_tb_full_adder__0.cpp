// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"

VlCoroutine Vtb_full_adder_tb_full_adder___eval_initial__TOP__tb_full_adder__Vtiming__0(Vtb_full_adder_tb_full_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_full_adder_tb_full_adder___eval_initial__TOP__tb_full_adder__Vtiming__0\n"); );
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __PVT__coverage_count;
    __PVT__coverage_count = 0;
    VlClassRef<Vtb_full_adder_tb_full_adder__03a__03aenvironment> __PVT__env;
    // Body
    vlSelfRef.__PVT__a = 0U;
    vlSelfRef.__PVT__b = 0U;
    vlSelfRef.__PVT__cin = 0U;
    vlSelfRef.__PVT__coverage[0U] = 0U;
    vlSelfRef.__PVT__coverage[1U] = 0U;
    vlSelfRef.__PVT__coverage[2U] = 0U;
    vlSelfRef.__PVT__coverage[3U] = 0U;
    vlSelfRef.__PVT__coverage[4U] = 0U;
    vlSelfRef.__PVT__coverage[5U] = 0U;
    vlSelfRef.__PVT__coverage[6U] = 0U;
    vlSelfRef.__PVT__coverage[7U] = 0U;
    VL_WRITEF_NX("\n==========================================\n EXPERIMENT 6\n MONITOR + SCOREBOARD + COVERAGE\n DUT : FULL ADDER\n==========================================\n\n",0);
    __PVT__env = VL_NEW(Vtb_full_adder_tb_full_adder__03a__03aenvironment, vlSymsp);
    co_await VL_NULL_CHECK(__PVT__env, "tb_full_adder.sv", 437)->__VnoInFunc_run(vlSymsp);
    VL_WRITEF_NX("\n==========================================\n TEST SUMMARY\n==========================================\nPASS = %0d\nFAIL = %0d\n",0,
                 32,VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb_full_adder.sv", 455)
                                  ->__PVT__scb, "tb_full_adder.sv", 455)
                 ->__PVT__pass_count,32,VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb_full_adder.sv", 461)
                                                      ->__PVT__scb, "tb_full_adder.sv", 461)
                 ->__PVT__fail_count);
    __PVT__coverage_count = 0U;
    if (vlSelfRef.__PVT__coverage[0U]) {
        __PVT__coverage_count = ((IData)(1U) + __PVT__coverage_count);
    }
    if (vlSelfRef.__PVT__coverage[1U]) {
        __PVT__coverage_count = ((IData)(1U) + __PVT__coverage_count);
    }
    if (vlSelfRef.__PVT__coverage[2U]) {
        __PVT__coverage_count = ((IData)(1U) + __PVT__coverage_count);
    }
    if (vlSelfRef.__PVT__coverage[3U]) {
        __PVT__coverage_count = ((IData)(1U) + __PVT__coverage_count);
    }
    if (vlSelfRef.__PVT__coverage[4U]) {
        __PVT__coverage_count = ((IData)(1U) + __PVT__coverage_count);
    }
    if (vlSelfRef.__PVT__coverage[5U]) {
        __PVT__coverage_count = ((IData)(1U) + __PVT__coverage_count);
    }
    if (vlSelfRef.__PVT__coverage[6U]) {
        __PVT__coverage_count = ((IData)(1U) + __PVT__coverage_count);
    }
    if (vlSelfRef.__PVT__coverage[7U]) {
        __PVT__coverage_count = ((IData)(1U) + __PVT__coverage_count);
    }
    VL_WRITEF_NX("\n==========================================\n FUNCTIONAL COVERAGE\n==========================================\nCovered combinations = %0d / 8\nCoverage = %0.2f%%\n\nCoverage Table:\n\nA B Cin | Covered\n------------------\n0 0  0  |   %0#\n0 0  1  |   %0#\n0 1  0  |   %0#\n0 1  1  |   %0#\n1 0  0  |   %0#\n1 0  1  |   %0#\n1 1  0  |   %0#\n1 1  1  |   %0#\n\n==========================================\n VERIFICATION COMPLETED\n==========================================\n\n",0,
                 32,__PVT__coverage_count,64,((100.0 
                                               * VL_ISTOR_D_I(32, __PVT__coverage_count)) 
                                              / 8.0),
                 1,vlSelfRef.__PVT__coverage[0U],1,
                 vlSelfRef.__PVT__coverage[1U],1,vlSelfRef.__PVT__coverage[2U],
                 1,vlSelfRef.__PVT__coverage[3U],1,
                 vlSelfRef.__PVT__coverage[4U],1,vlSelfRef.__PVT__coverage[5U],
                 1,vlSelfRef.__PVT__coverage[6U],1,
                 vlSelfRef.__PVT__coverage[7U]);
    VL_FINISH_MT("tb_full_adder.sv", 543, "");
    co_return;
}
