// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
}

VlCoroutine Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::__VnoInFunc_run(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0;
    __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        CData/*0:0*/ __VdynTrigger_h5c2ee2b9__0;
        __VdynTrigger_h5c2ee2b9__0 = 0;
        __VdynTrigger_h5c2ee2b9__0 = 0U;
        __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0 
            = vlSymsp->TOP__tb_d_flipflop.__PVT__clk;
        while ((1U & (~ (IData)(__VdynTrigger_h5c2ee2b9__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge tb_d_flipflop.clk)", 
                                                         "tb_d_flipflop.sv", 
                                                         221);
            __VdynTrigger_h5c2ee2b9__0 = ((IData)(vlSymsp->TOP__tb_d_flipflop.__PVT__clk) 
                                          & (~ (IData)(__Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h5c2ee2b9__0);
            __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0 
                = vlSymsp->TOP__tb_d_flipflop.__PVT__clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge tb_d_flipflop.clk)", 
                                                     "tb_d_flipflop.sv", 
                                                     221);
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                nullptr, 
                                                "tb_d_flipflop.sv", 
                                                227);
        this->__PVT__tr = VL_NEW(Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction, vlSymsp);
        VL_NULL_CHECK(this->__PVT__tr, "tb_d_flipflop.sv", 233)->__PVT__reset 
            = vlSymsp->TOP__tb_d_flipflop.__PVT__reset;
        VL_NULL_CHECK(this->__PVT__tr, "tb_d_flipflop.sv", 235)->__PVT__d 
            = vlSymsp->TOP__tb_d_flipflop.__PVT__d;
        VL_NULL_CHECK(this->__PVT__tr, "tb_d_flipflop.sv", 237)->__PVT__q 
            = vlSymsp->TOP__tb_d_flipflop.__PVT__q;
        VL_WRITEF_NX("[MONITOR] RESET=%0# D=%0# | Q=%0#\n",0,
                     1,VL_NULL_CHECK(this->__PVT__tr, "tb_d_flipflop.sv", 242)
                     ->__PVT__reset,1,VL_NULL_CHECK(this->__PVT__tr, "tb_d_flipflop.sv", 243)
                     ->__PVT__d,1,VL_NULL_CHECK(this->__PVT__tr, "tb_d_flipflop.sv", 244)
                     ->__PVT__q);
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb_d_flipflop.sv", 248)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::_ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", mon2scb:" + VL_TO_STRING(__PVT__mon2scb);
    return (out);
}
