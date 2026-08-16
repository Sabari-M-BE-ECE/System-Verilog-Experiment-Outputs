// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtransaction_random__pch.h"

Vtransaction_random__Syms::Vtransaction_random__Syms(VerilatedContext* contextp, const char* namep, Vtransaction_random* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(296);
    // Setup sub module instances
    TOP__std.ctor(this, "std");
    TOP__transaction_random.ctor(this, "transaction_random");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    TOP__transaction_random__03a__03atransaction__Vclpkg.ctor(this, "transaction_random::transaction__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__std = &TOP__std;
    TOP.__PVT__transaction_random = &TOP__transaction_random;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    TOP.transaction_random__03a__03atransaction__Vclpkg = &TOP__transaction_random__03a__03atransaction__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__transaction_random.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    TOP__transaction_random__03a__03atransaction__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Vtransaction_random__Syms::~Vtransaction_random__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__transaction_random__03a__03atransaction__Vclpkg.dtor();
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__transaction_random.dtor();
    TOP__std.dtor();
}
