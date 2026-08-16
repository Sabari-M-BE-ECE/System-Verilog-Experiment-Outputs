// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_random.h for the primary calling header

#include "Vtransaction_random__pch.h"

void Vtransaction_random_transaction_random___ctor_var_reset(Vtransaction_random_transaction_random* vlSelf);

Vtransaction_random_transaction_random::Vtransaction_random_transaction_random() = default;
Vtransaction_random_transaction_random::~Vtransaction_random_transaction_random() = default;

void Vtransaction_random_transaction_random::ctor(Vtransaction_random__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtransaction_random_transaction_random___ctor_var_reset(this);
}

void Vtransaction_random_transaction_random::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtransaction_random_transaction_random::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
