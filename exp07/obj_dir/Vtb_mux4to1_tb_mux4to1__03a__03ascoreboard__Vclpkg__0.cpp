// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mux4to1.h for the primary calling header

#include "Vtb_mux4to1__pch.h"

Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard(Vtb_mux4to1__Syms* __restrict vlSymsp, VlClassRef<Vtb_mux4to1_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
    this->__PVT__pass_count = 0U;
    this->__PVT__fail_count = 0U;
}

VlCoroutine Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::__VnoInFunc_run(Vtb_mux4to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000010U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb_mux4to1.sv", 336)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        this->__PVT__expected_y = (VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 343)
                                   ->__PVT__s1 ? (VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 343)
                                                  ->__PVT__s0
                                                   ? VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 362)
                                                  ->__PVT__i3
                                                   : VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 357)
                                                  ->__PVT__i2)
                                    : (VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 343)
                                       ->__PVT__s0 ? VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 352)
                                       ->__PVT__i1 : VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 347)
                                       ->__PVT__i0));
        if ((VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 376)
             ->__PVT__y == (IData)(this->__PVT__expected_y))) {
            VL_WRITEF_NX("[SCOREBOARD] PASS | Expected=%0# Actual=%0#\n",0,
                         1,this->__PVT__expected_y,
                         1,VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 381)
                         ->__PVT__y);
            this->__PVT__pass_count = ((IData)(1U) 
                                       + this->__PVT__pass_count);
        } else {
            VL_WRITEF_NX("[SCOREBOARD] FAIL | Expected=%0# Actual=%0#\n",0,
                         1,this->__PVT__expected_y,
                         1,VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 394)
                         ->__PVT__y);
            this->__PVT__fail_count = ((IData)(1U) 
                                       + this->__PVT__fail_count);
        }
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::_ctor_var_reset(Vtb_mux4to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pass_count = VL_SCOPED_RAND_RESET_I(32, 5163209219527458402ULL, 17489978223003880030ull);
    __PVT__fail_count = VL_SCOPED_RAND_RESET_I(32, 5163209219527458402ULL, 780742047261477168ull);
    __PVT__expected_y = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", mon2scb:" + VL_TO_STRING(__PVT__mon2scb);
    out += ", pass_count:" + VL_TO_STRING(__PVT__pass_count);
    out += ", fail_count:" + VL_TO_STRING(__PVT__fail_count);
    out += ", expected_y:" + VL_TO_STRING(__PVT__expected_y);
    return (out);
}
