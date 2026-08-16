// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter.h for the primary calling header

#include "Vtb_counter__pch.h"

void Vtb_counter_tb_counter__03a__03adriver__Vclpkg___ctor_var_reset(Vtb_counter_tb_counter__03a__03adriver__Vclpkg* vlSelf);

Vtb_counter_tb_counter__03a__03adriver__Vclpkg::Vtb_counter_tb_counter__03a__03adriver__Vclpkg() = default;
Vtb_counter_tb_counter__03a__03adriver__Vclpkg::~Vtb_counter_tb_counter__03a__03adriver__Vclpkg() = default;

void Vtb_counter_tb_counter__03a__03adriver__Vclpkg::ctor(Vtb_counter__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_counter_tb_counter__03a__03adriver__Vclpkg___ctor_var_reset(this);
}

void Vtb_counter_tb_counter__03a__03adriver__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_counter_tb_counter__03a__03adriver__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
