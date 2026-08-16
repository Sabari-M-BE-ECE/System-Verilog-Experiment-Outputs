// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mux4to1.h for the primary calling header

#include "Vtb_mux4to1__pch.h"

Vtb_mux4to1_tb_mux4to1__03a__03adriver::Vtb_mux4to1_tb_mux4to1__03a__03adriver(Vtb_mux4to1__Syms* __restrict vlSymsp, VlClassRef<Vtb_mux4to1_std__03a__03amailbox__Tz1> gen2drv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03adriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = gen2drv;
}

VlCoroutine Vtb_mux4to1_tb_mux4to1__03a__03adriver::__VnoInFunc_run(Vtb_mux4to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03adriver::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mux4to1____PVT__clk__0;
    __Vtrigprevexpr___TOP__tb_mux4to1____PVT__clk__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000010U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
        co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb_mux4to1.sv", 180)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        CData/*0:0*/ __VdynTrigger_hf2da9958__0;
        __VdynTrigger_hf2da9958__0 = 0;
        __VdynTrigger_hf2da9958__0 = 0U;
        __Vtrigprevexpr___TOP__tb_mux4to1____PVT__clk__0 
            = vlSymsp->TOP__tb_mux4to1.__PVT__clk;
        while ((1U & (~ (IData)(__VdynTrigger_hf2da9958__0)))) {
            vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(negedge tb_mux4to1.clk)", 
                                                         "tb_mux4to1.sv", 
                                                         185);
            __VdynTrigger_hf2da9958__0 = ((~ (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__clk)) 
                                          & (IData)(__Vtrigprevexpr___TOP__tb_mux4to1____PVT__clk__0));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf2da9958__0);
            __Vtrigprevexpr___TOP__tb_mux4to1____PVT__clk__0 
                = vlSymsp->TOP__tb_mux4to1.__PVT__clk;
        }
        vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(negedge tb_mux4to1.clk)", 
                                                     "tb_mux4to1.sv", 
                                                     185);
        vlSymsp->TOP__tb_mux4to1.__PVT__i0 = VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 190)
            ->__PVT__i0;
        vlSymsp->TOP__tb_mux4to1.__PVT__i1 = VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 192)
            ->__PVT__i1;
        vlSymsp->TOP__tb_mux4to1.__PVT__i2 = VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 194)
            ->__PVT__i2;
        vlSymsp->TOP__tb_mux4to1.__PVT__i3 = VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 196)
            ->__PVT__i3;
        vlSymsp->TOP__tb_mux4to1.__PVT__s1 = VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 198)
            ->__PVT__s1;
        vlSymsp->TOP__tb_mux4to1.__PVT__s0 = VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 200)
            ->__PVT__s0;
        VL_WRITEF_NX("[DRIVER] I0=%0# I1=%0# I2=%0# I3=%0# | S1=%0# S0=%0#\n",0,
                     1,vlSymsp->TOP__tb_mux4to1.__PVT__i0,
                     1,(IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i1),
                     1,vlSymsp->TOP__tb_mux4to1.__PVT__i2,
                     1,(IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i3),
                     1,vlSymsp->TOP__tb_mux4to1.__PVT__s1,
                     1,(IData)(vlSymsp->TOP__tb_mux4to1.__PVT__s0));
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
    co_return;
}

void Vtb_mux4to1_tb_mux4to1__03a__03adriver::_ctor_var_reset(Vtb_mux4to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03adriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03adriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_mux4to1_tb_mux4to1__03a__03adriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03adriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_mux4to1_tb_mux4to1__03a__03adriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03adriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", gen2drv:" + VL_TO_STRING(__PVT__gen2drv);
    return (out);
}
