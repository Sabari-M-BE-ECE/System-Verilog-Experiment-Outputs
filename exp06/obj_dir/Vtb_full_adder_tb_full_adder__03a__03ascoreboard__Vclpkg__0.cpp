// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"

Vtb_full_adder_tb_full_adder__03a__03ascoreboard::Vtb_full_adder_tb_full_adder__03a__03ascoreboard(Vtb_full_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
    this->__PVT__pass_count = 0U;
    this->__PVT__fail_count = 0U;
}

VlCoroutine Vtb_full_adder_tb_full_adder__03a__03ascoreboard::__VnoInFunc_run(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 8U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb_full_adder.sv", 273)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        this->__PVT__expected_sum = ((VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 281)
                                      ->__PVT__a ^ VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 281)
                                      ->__PVT__b) ^ VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 281)
                                     ->__PVT__cin);
        this->__PVT__expected_cout = (((VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 285)
                                        ->__PVT__a 
                                        & VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 285)
                                        ->__PVT__b) 
                                       | (VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 286)
                                          ->__PVT__b 
                                          & VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 286)
                                          ->__PVT__cin)) 
                                      | (VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 287)
                                         ->__PVT__a 
                                         & VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 287)
                                         ->__PVT__cin));
        if (((VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 295)
              ->__PVT__sum == (IData)(this->__PVT__expected_sum)) 
             && (VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 296)
                 ->__PVT__cout == (IData)(this->__PVT__expected_cout)))) {
            VL_WRITEF_NX("[SCOREBOARD] PASS\n",0);
            this->__PVT__pass_count = ((IData)(1U) 
                                       + this->__PVT__pass_count);
        } else {
            VL_WRITEF_NX("[SCOREBOARD] FAIL\n  Expected: SUM=%0# COUT=%0#\n  Actual:   SUM=%0# COUT=%0#\n",0,
                         1,this->__PVT__expected_sum,
                         1,(IData)(this->__PVT__expected_cout),
                         1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 321)
                         ->__PVT__sum,1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 322)
                         ->__PVT__cout);
            this->__PVT__fail_count = ((IData)(1U) 
                                       + this->__PVT__fail_count);
        }
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_full_adder_tb_full_adder__03a__03ascoreboard::_ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pass_count = VL_SCOPED_RAND_RESET_I(32, 14495657909334241514ULL, 17489978223003880030ull);
    __PVT__fail_count = VL_SCOPED_RAND_RESET_I(32, 14495657909334241514ULL, 780742047261477168ull);
    __PVT__expected_sum = 0;
    __PVT__expected_cout = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtb_full_adder_tb_full_adder__03a__03ascoreboard>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03ascoreboard::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_full_adder_tb_full_adder__03a__03ascoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03ascoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_full_adder_tb_full_adder__03a__03ascoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03ascoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", mon2scb:" + VL_TO_STRING(__PVT__mon2scb);
    out += ", pass_count:" + VL_TO_STRING(__PVT__pass_count);
    out += ", fail_count:" + VL_TO_STRING(__PVT__fail_count);
    out += ", expected_sum:" + VL_TO_STRING(__PVT__expected_sum);
    out += ", expected_cout:" + VL_TO_STRING(__PVT__expected_cout);
    return (out);
}
