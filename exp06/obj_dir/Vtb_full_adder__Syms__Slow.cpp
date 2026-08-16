// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_full_adder__pch.h"

Vtb_full_adder__Syms::Vtb_full_adder__Syms(VerilatedContext* contextp, const char* namep, Vtb_full_adder* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(516);
    // Setup sub module instances
    TOP__std.ctor(this, "std");
    TOP__tb_full_adder.ctor(this, "tb_full_adder");
    TOP__std__03a__03amailbox__Tz1__Vclpkg.ctor(this, "std::mailbox__Tz1__Vclpkg");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    TOP__tb_full_adder__03a__03adriver__Vclpkg.ctor(this, "tb_full_adder::driver__Vclpkg");
    TOP__tb_full_adder__03a__03aenvironment__Vclpkg.ctor(this, "tb_full_adder::environment__Vclpkg");
    TOP__tb_full_adder__03a__03agenerator__Vclpkg.ctor(this, "tb_full_adder::generator__Vclpkg");
    TOP__tb_full_adder__03a__03amonitor__Vclpkg.ctor(this, "tb_full_adder::monitor__Vclpkg");
    TOP__tb_full_adder__03a__03ascoreboard__Vclpkg.ctor(this, "tb_full_adder::scoreboard__Vclpkg");
    TOP__tb_full_adder__03a__03atransaction__Vclpkg.ctor(this, "tb_full_adder::transaction__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__std = &TOP__std;
    TOP.__PVT__tb_full_adder = &TOP__tb_full_adder;
    TOP.std__03a__03amailbox__Tz1__Vclpkg = &TOP__std__03a__03amailbox__Tz1__Vclpkg;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    TOP.tb_full_adder__03a__03adriver__Vclpkg = &TOP__tb_full_adder__03a__03adriver__Vclpkg;
    TOP.tb_full_adder__03a__03aenvironment__Vclpkg = &TOP__tb_full_adder__03a__03aenvironment__Vclpkg;
    TOP.tb_full_adder__03a__03agenerator__Vclpkg = &TOP__tb_full_adder__03a__03agenerator__Vclpkg;
    TOP.tb_full_adder__03a__03amonitor__Vclpkg = &TOP__tb_full_adder__03a__03amonitor__Vclpkg;
    TOP.tb_full_adder__03a__03ascoreboard__Vclpkg = &TOP__tb_full_adder__03a__03ascoreboard__Vclpkg;
    TOP.tb_full_adder__03a__03atransaction__Vclpkg = &TOP__tb_full_adder__03a__03atransaction__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__tb_full_adder.__Vconfigure(true);
    TOP__std__03a__03amailbox__Tz1__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    TOP__tb_full_adder__03a__03adriver__Vclpkg.__Vconfigure(true);
    TOP__tb_full_adder__03a__03aenvironment__Vclpkg.__Vconfigure(true);
    TOP__tb_full_adder__03a__03agenerator__Vclpkg.__Vconfigure(true);
    TOP__tb_full_adder__03a__03amonitor__Vclpkg.__Vconfigure(true);
    TOP__tb_full_adder__03a__03ascoreboard__Vclpkg.__Vconfigure(true);
    TOP__tb_full_adder__03a__03atransaction__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Vtb_full_adder__Syms::~Vtb_full_adder__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__tb_full_adder__03a__03atransaction__Vclpkg.dtor();
    TOP__tb_full_adder__03a__03ascoreboard__Vclpkg.dtor();
    TOP__tb_full_adder__03a__03amonitor__Vclpkg.dtor();
    TOP__tb_full_adder__03a__03agenerator__Vclpkg.dtor();
    TOP__tb_full_adder__03a__03aenvironment__Vclpkg.dtor();
    TOP__tb_full_adder__03a__03adriver__Vclpkg.dtor();
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__std__03a__03amailbox__Tz1__Vclpkg.dtor();
    TOP__tb_full_adder.dtor();
    TOP__std.dtor();
}
