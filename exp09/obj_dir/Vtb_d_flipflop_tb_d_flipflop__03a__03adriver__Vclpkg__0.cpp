// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::Vtb_d_flipflop_tb_d_flipflop__03a__03adriver(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_std__03a__03amailbox__Tz1> gen2drv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = gen2drv;
}

VlCoroutine Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::__VnoInFunc_run(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0;
    __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb_d_flipflop.sv", 168)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        CData/*0:0*/ __VdynTrigger_h5c2ee298__0;
        __VdynTrigger_h5c2ee298__0 = 0;
        __VdynTrigger_h5c2ee298__0 = 0U;
        __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0 
            = vlSymsp->TOP__tb_d_flipflop.__PVT__clk;
        while ((1U & (~ (IData)(__VdynTrigger_h5c2ee298__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(negedge tb_d_flipflop.clk)", 
                                                         "tb_d_flipflop.sv", 
                                                         174);
            __VdynTrigger_h5c2ee298__0 = ((~ (IData)(vlSymsp->TOP__tb_d_flipflop.__PVT__clk)) 
                                          & (IData)(__Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h5c2ee298__0);
            __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0 
                = vlSymsp->TOP__tb_d_flipflop.__PVT__clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(negedge tb_d_flipflop.clk)", 
                                                     "tb_d_flipflop.sv", 
                                                     174);
        vlSymsp->TOP__tb_d_flipflop.__PVT__reset = VL_NULL_CHECK(this->__PVT__tr, "tb_d_flipflop.sv", 177)
            ->__PVT__reset;
        vlSymsp->TOP__tb_d_flipflop.__PVT__d = VL_NULL_CHECK(this->__PVT__tr, "tb_d_flipflop.sv", 179)
            ->__PVT__d;
        VL_WRITEF_NX("[DRIVER] RESET=%0# D=%0#\n",0,
                     1,vlSymsp->TOP__tb_d_flipflop.__PVT__reset,
                     1,(IData)(vlSymsp->TOP__tb_d_flipflop.__PVT__d));
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::_ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03adriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03adriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", gen2drv:" + VL_TO_STRING(__PVT__gen2drv);
    return (out);
}
