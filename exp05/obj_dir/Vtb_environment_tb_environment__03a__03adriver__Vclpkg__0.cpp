// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

Vtb_environment_tb_environment__03a__03adriver::Vtb_environment_tb_environment__03a__03adriver(Vtb_environment__Syms* __restrict vlSymsp, VlClassRef<Vtb_environment_std__03a__03amailbox__Tz1> gen2drv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03adriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = gen2drv;
}

VlCoroutine Vtb_environment_tb_environment__03a__03adriver::__VnoInFunc_run(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03adriver::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb_environment.sv", 115)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        vlSymsp->TOP__tb_environment.__PVT__a = VL_NULL_CHECK(this->__PVT__tr, "tb_environment.sv", 117)
            ->__PVT__a;
        vlSymsp->TOP__tb_environment.__PVT__b = VL_NULL_CHECK(this->__PVT__tr, "tb_environment.sv", 118)
            ->__PVT__b;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000002710ULL, 
                                                nullptr, 
                                                "tb_environment.sv", 
                                                120);
        VL_WRITEF_NX("[DRIVER] Applied A=%0# B=%0#\n[DRIVER] DUT Output SUM=%0# CARRY=%0#\n\n",0,
                     1,vlSymsp->TOP__tb_environment.__PVT__a,
                     1,(IData)(vlSymsp->TOP__tb_environment.__PVT__b),
                     1,vlSymsp->TOP__tb_environment.__PVT__sum,
                     1,(IData)(vlSymsp->TOP__tb_environment.__PVT__carry));
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_environment_tb_environment__03a__03adriver::_ctor_var_reset(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_environment_tb_environment__03a__03adriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03adriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_environment_tb_environment__03a__03adriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03adriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_environment_tb_environment__03a__03adriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03adriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", gen2drv:" + VL_TO_STRING(__PVT__gen2drv);
    return (out);
}
