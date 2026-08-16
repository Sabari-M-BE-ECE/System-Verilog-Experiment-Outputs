// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"

Vtb_full_adder_tb_full_adder__03a__03amonitor::Vtb_full_adder_tb_full_adder__03a__03amonitor(Vtb_full_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
}

VlCoroutine Vtb_full_adder_tb_full_adder__03a__03amonitor::__VnoInFunc_run(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03amonitor::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 8U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                nullptr, 
                                                "tb_full_adder.sv", 
                                                188);
        this->__PVT__tr = VL_NEW(Vtb_full_adder_tb_full_adder__03a__03atransaction, vlSymsp);
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 194)->__PVT__a 
            = vlSymsp->TOP__tb_full_adder.__PVT__a;
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 195)->__PVT__b 
            = vlSymsp->TOP__tb_full_adder.__PVT__b;
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 196)->__PVT__cin 
            = vlSymsp->TOP__tb_full_adder.__PVT__cin;
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 201)->__PVT__sum 
            = ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
               ^ ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__b) 
                  ^ (IData)(vlSymsp->TOP__tb_full_adder.__PVT__cin)));
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 202)->__PVT__cout 
            = (((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
                & (IData)(vlSymsp->TOP__tb_full_adder.__PVT__b)) 
               | ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__cin) 
                  & ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
                     | (IData)(vlSymsp->TOP__tb_full_adder.__PVT__b))));
        vlSymsp->TOP__tb_full_adder.__PVT__coverage[(7U 
                                                     & ((VL_SHIFTL_III(3,32,32, VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 210)
                                                                       ->__PVT__a, 2U) 
                                                         + 
                                                         VL_SHIFTL_III(3,32,32, VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 211)
                                                                       ->__PVT__b, 1U)) 
                                                        + VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 212)
                                                        ->__PVT__cin))] = 1U;
        VL_WRITEF_NX("[MONITOR] A=%0# B=%0# Cin=%0# | Sum=%0# Cout=%0#\n",0,
                     1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 218)
                     ->__PVT__a,1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 219)
                     ->__PVT__b,1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 220)
                     ->__PVT__cin,1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 221)
                     ->__PVT__sum,1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 222)
                     ->__PVT__cout);
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb_full_adder.sv", 228)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000002328ULL, 
                                                nullptr, 
                                                "tb_full_adder.sv", 
                                                230);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_full_adder_tb_full_adder__03a__03amonitor::_ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_full_adder_tb_full_adder__03a__03amonitor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03amonitor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_full_adder_tb_full_adder__03a__03amonitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03amonitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_full_adder_tb_full_adder__03a__03amonitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03amonitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", mon2scb:" + VL_TO_STRING(__PVT__mon2scb);
    return (out);
}
