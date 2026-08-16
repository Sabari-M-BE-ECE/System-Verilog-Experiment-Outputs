// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocess_communication.h for the primary calling header

#include "Vprocess_communication__pch.h"

void Vprocess_communication_std___ctor_var_reset(Vprocess_communication_std* vlSelf);

Vprocess_communication_std::Vprocess_communication_std() = default;
Vprocess_communication_std::~Vprocess_communication_std() = default;

void Vprocess_communication_std::ctor(Vprocess_communication__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vprocess_communication_std___ctor_var_reset(this);
}

void Vprocess_communication_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vprocess_communication_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
