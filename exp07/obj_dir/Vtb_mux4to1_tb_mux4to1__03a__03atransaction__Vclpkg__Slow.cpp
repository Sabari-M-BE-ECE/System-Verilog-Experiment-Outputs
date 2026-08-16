// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mux4to1.h for the primary calling header

#include "Vtb_mux4to1__pch.h"

void Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg___ctor_var_reset(Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg* vlSelf);

Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg::Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg() = default;
Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg::~Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg() = default;

void Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg::ctor(Vtb_mux4to1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg___ctor_var_reset(this);
}

void Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
