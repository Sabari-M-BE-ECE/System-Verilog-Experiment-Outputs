// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mux4to1.h for the primary calling header

#include "Vtb_mux4to1__pch.h"

Vtb_mux4to1_tb_mux4to1__03a__03amonitor::Vtb_mux4to1_tb_mux4to1__03a__03amonitor(Vtb_mux4to1__Syms* __restrict vlSymsp, VlClassRef<Vtb_mux4to1_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
}

VlCoroutine Vtb_mux4to1_tb_mux4to1__03a__03amonitor::__VnoInFunc_run(Vtb_mux4to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03amonitor::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mux4to1____PVT__clk__0;
    __Vtrigprevexpr___TOP__tb_mux4to1____PVT__clk__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000010U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        CData/*0:0*/ __VdynTrigger_hf2da9979__0;
        __VdynTrigger_hf2da9979__0 = 0;
        __VdynTrigger_hf2da9979__0 = 0U;
        __Vtrigprevexpr___TOP__tb_mux4to1____PVT__clk__0 
            = vlSymsp->TOP__tb_mux4to1.__PVT__clk;
        while ((1U & (~ (IData)(__VdynTrigger_hf2da9979__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge tb_mux4to1.clk)", 
                                                         "tb_mux4to1.sv", 
                                                         244);
            __VdynTrigger_hf2da9979__0 = ((IData)(vlSymsp->TOP__tb_mux4to1.__PVT__clk) 
                                          & (~ (IData)(__Vtrigprevexpr___TOP__tb_mux4to1____PVT__clk__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf2da9979__0);
            __Vtrigprevexpr___TOP__tb_mux4to1____PVT__clk__0 
                = vlSymsp->TOP__tb_mux4to1.__PVT__clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge tb_mux4to1.clk)", 
                                                     "tb_mux4to1.sv", 
                                                     244);
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                nullptr, 
                                                "tb_mux4to1.sv", 
                                                250);
        this->__PVT__tr = VL_NEW(Vtb_mux4to1_tb_mux4to1__03a__03atransaction, vlSymsp);
        VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 258)->__PVT__i0 
            = vlSymsp->TOP__tb_mux4to1.__PVT__i0;
        VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 260)->__PVT__i1 
            = vlSymsp->TOP__tb_mux4to1.__PVT__i1;
        VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 262)->__PVT__i2 
            = vlSymsp->TOP__tb_mux4to1.__PVT__i2;
        VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 264)->__PVT__i3 
            = vlSymsp->TOP__tb_mux4to1.__PVT__i3;
        VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 266)->__PVT__s1 
            = vlSymsp->TOP__tb_mux4to1.__PVT__s1;
        VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 268)->__PVT__s0 
            = vlSymsp->TOP__tb_mux4to1.__PVT__s0;
        VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 273)->__PVT__y 
            = ((IData)(vlSymsp->TOP__tb_mux4to1.__PVT__s1)
                ? ((IData)(vlSymsp->TOP__tb_mux4to1.__PVT__s0)
                    ? (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i3)
                    : (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i2))
                : ((IData)(vlSymsp->TOP__tb_mux4to1.__PVT__s0)
                    ? (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i1)
                    : (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i0)));
        VL_WRITEF_NX("[MONITOR] I0=%0# I1=%0# I2=%0# I3=%0# | S1=%0# S0=%0# | Y=%0#\n",0,
                     1,VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 278)
                     ->__PVT__i0,1,VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 279)
                     ->__PVT__i1,1,VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 280)
                     ->__PVT__i2,1,VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 281)
                     ->__PVT__i3,1,VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 282)
                     ->__PVT__s1,1,VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 283)
                     ->__PVT__s0,1,VL_NULL_CHECK(this->__PVT__tr, "tb_mux4to1.sv", 284)
                     ->__PVT__y);
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb_mux4to1.sv", 290)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_mux4to1_tb_mux4to1__03a__03amonitor::_ctor_var_reset(Vtb_mux4to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03amonitor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03amonitor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_mux4to1_tb_mux4to1__03a__03amonitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03amonitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_mux4to1_tb_mux4to1__03a__03amonitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mux4to1_tb_mux4to1__03a__03amonitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", mon2scb:" + VL_TO_STRING(__PVT__mon2scb);
    return (out);
}
