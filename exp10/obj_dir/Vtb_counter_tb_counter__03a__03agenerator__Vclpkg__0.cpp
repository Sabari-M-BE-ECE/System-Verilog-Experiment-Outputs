// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter.h for the primary calling header

#include "Vtb_counter__pch.h"

Vtb_counter_tb_counter__03a__03agenerator::Vtb_counter_tb_counter__03a__03agenerator(Vtb_counter__Syms* __restrict vlSymsp, VlClassRef<Vtb_counter_std__03a__03amailbox__Tz1> gen2drv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03agenerator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = gen2drv;
}

VlCoroutine Vtb_counter_tb_counter__03a__03agenerator::__VnoInFunc_run(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03agenerator::__VnoInFunc_run\n"); );
    // Locals
    IData/*31:0*/ __Vtask_randomize__1__Vfuncout;
    __Vtask_randomize__1__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000014U, unnamedblk1__DOT__i)) {
        this->__PVT__tr = VL_NEW(Vtb_counter_tb_counter__03a__03atransaction, vlSymsp);
        if (VL_UNLIKELY(((0U != ((VlNull{} != this->__PVT__tr)
                                  ? ([&]() {
                                    VL_NULL_CHECK(this->__PVT__tr, "tb_counter.sv", 126)
                                     ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
                                }(), __Vtask_randomize__1__Vfuncout)
                                  : 0U))))) {
            VL_WRITEF_NX("[GENERATOR] Transaction %0d\n",0,
                         32,((IData)(1U) + unnamedblk1__DOT__i));
            VL_NULL_CHECK(this->__PVT__tr, "tb_counter.sv", 133)->__VnoInFunc_display(vlSymsp);
            co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb_counter.sv", 136)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    co_return;
}

void Vtb_counter_tb_counter__03a__03agenerator::_ctor_var_reset(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03agenerator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_counter_tb_counter__03a__03agenerator>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03agenerator::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_counter_tb_counter__03a__03agenerator::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03agenerator::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_counter_tb_counter__03a__03agenerator::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03agenerator::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", gen2drv:" + VL_TO_STRING(__PVT__gen2drv);
    return (out);
}
