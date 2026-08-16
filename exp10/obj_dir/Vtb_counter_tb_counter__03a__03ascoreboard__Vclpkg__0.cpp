// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter.h for the primary calling header

#include "Vtb_counter__pch.h"

Vtb_counter_tb_counter__03a__03ascoreboard::Vtb_counter_tb_counter__03a__03ascoreboard(Vtb_counter__Syms* __restrict vlSymsp, VlClassRef<Vtb_counter_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
    this->__PVT__pass_count = 0U;
    this->__PVT__fail_count = 0U;
    this->__PVT__expected_count = 0U;
}

VlCoroutine Vtb_counter_tb_counter__03a__03ascoreboard::__VnoInFunc_run(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb_counter.sv", 298)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        this->__PVT__expected_count = (VL_NULL_CHECK(this->__PVT__tr, "tb_counter.sv", 305)
                                       ->__PVT__reset
                                        ? 0U : (0x0000000fU 
                                                & ((IData)(1U) 
                                                   + (IData)(this->__PVT__expected_count))));
        if ((VL_NULL_CHECK(this->__PVT__tr, "tb_counter.sv", 320)
             ->__PVT__count == (IData)(this->__PVT__expected_count))) {
            VL_WRITEF_NX("[SCOREBOARD] PASS | Expected=%0# Actual=%0#\n",0,
                         4,this->__PVT__expected_count,
                         4,VL_NULL_CHECK(this->__PVT__tr, "tb_counter.sv", 326)
                         ->__PVT__count);
            this->__PVT__pass_count = ((IData)(1U) 
                                       + this->__PVT__pass_count);
        } else {
            VL_WRITEF_NX("[SCOREBOARD] FAIL | Expected=%0# Actual=%0#\n",0,
                         4,this->__PVT__expected_count,
                         4,VL_NULL_CHECK(this->__PVT__tr, "tb_counter.sv", 339)
                         ->__PVT__count);
            this->__PVT__fail_count = ((IData)(1U) 
                                       + this->__PVT__fail_count);
        }
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_counter_tb_counter__03a__03ascoreboard::_ctor_var_reset(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pass_count = VL_SCOPED_RAND_RESET_I(32, 12132285535647128825ULL, 17489978223003880030ull);
    __PVT__fail_count = VL_SCOPED_RAND_RESET_I(32, 12132285535647128825ULL, 780742047261477168ull);
    __PVT__expected_count = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtb_counter_tb_counter__03a__03ascoreboard>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03ascoreboard::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_counter_tb_counter__03a__03ascoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03ascoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_counter_tb_counter__03a__03ascoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03ascoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", mon2scb:" + VL_TO_STRING(__PVT__mon2scb);
    out += ", pass_count:" + VL_TO_STRING(__PVT__pass_count);
    out += ", fail_count:" + VL_TO_STRING(__PVT__fail_count);
    out += ", expected_count:" + VL_TO_STRING(__PVT__expected_count);
    return (out);
}
