// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_d_flipflop__pch.h"

Vtb_d_flipflop__Syms::Vtb_d_flipflop__Syms(VerilatedContext* contextp, const char* namep, Vtb_d_flipflop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(524);
    // Setup sub module instances
    TOP__std.ctor(this, "std");
    TOP__tb_d_flipflop.ctor(this, "tb_d_flipflop");
    TOP__std__03a__03amailbox__Tz1__Vclpkg.ctor(this, "std::mailbox__Tz1__Vclpkg");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    TOP__tb_d_flipflop__03a__03adriver__Vclpkg.ctor(this, "tb_d_flipflop::driver__Vclpkg");
    TOP__tb_d_flipflop__03a__03aenvironment__Vclpkg.ctor(this, "tb_d_flipflop::environment__Vclpkg");
    TOP__tb_d_flipflop__03a__03agenerator__Vclpkg.ctor(this, "tb_d_flipflop::generator__Vclpkg");
    TOP__tb_d_flipflop__03a__03amonitor__Vclpkg.ctor(this, "tb_d_flipflop::monitor__Vclpkg");
    TOP__tb_d_flipflop__03a__03ascoreboard__Vclpkg.ctor(this, "tb_d_flipflop::scoreboard__Vclpkg");
    TOP__tb_d_flipflop__03a__03atransaction__Vclpkg.ctor(this, "tb_d_flipflop::transaction__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__std = &TOP__std;
    TOP.__PVT__tb_d_flipflop = &TOP__tb_d_flipflop;
    TOP.std__03a__03amailbox__Tz1__Vclpkg = &TOP__std__03a__03amailbox__Tz1__Vclpkg;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    TOP.tb_d_flipflop__03a__03adriver__Vclpkg = &TOP__tb_d_flipflop__03a__03adriver__Vclpkg;
    TOP.tb_d_flipflop__03a__03aenvironment__Vclpkg = &TOP__tb_d_flipflop__03a__03aenvironment__Vclpkg;
    TOP.tb_d_flipflop__03a__03agenerator__Vclpkg = &TOP__tb_d_flipflop__03a__03agenerator__Vclpkg;
    TOP.tb_d_flipflop__03a__03amonitor__Vclpkg = &TOP__tb_d_flipflop__03a__03amonitor__Vclpkg;
    TOP.tb_d_flipflop__03a__03ascoreboard__Vclpkg = &TOP__tb_d_flipflop__03a__03ascoreboard__Vclpkg;
    TOP.tb_d_flipflop__03a__03atransaction__Vclpkg = &TOP__tb_d_flipflop__03a__03atransaction__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__tb_d_flipflop.__Vconfigure(true);
    TOP__std__03a__03amailbox__Tz1__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    TOP__tb_d_flipflop__03a__03adriver__Vclpkg.__Vconfigure(true);
    TOP__tb_d_flipflop__03a__03aenvironment__Vclpkg.__Vconfigure(true);
    TOP__tb_d_flipflop__03a__03agenerator__Vclpkg.__Vconfigure(true);
    TOP__tb_d_flipflop__03a__03amonitor__Vclpkg.__Vconfigure(true);
    TOP__tb_d_flipflop__03a__03ascoreboard__Vclpkg.__Vconfigure(true);
    TOP__tb_d_flipflop__03a__03atransaction__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Vtb_d_flipflop__Syms::~Vtb_d_flipflop__Syms() {
    if (__Vm_dumping) _traceDumpClose();
    // Tear down scopes
    // Tear down sub module instances
    TOP__tb_d_flipflop__03a__03atransaction__Vclpkg.dtor();
    TOP__tb_d_flipflop__03a__03ascoreboard__Vclpkg.dtor();
    TOP__tb_d_flipflop__03a__03amonitor__Vclpkg.dtor();
    TOP__tb_d_flipflop__03a__03agenerator__Vclpkg.dtor();
    TOP__tb_d_flipflop__03a__03aenvironment__Vclpkg.dtor();
    TOP__tb_d_flipflop__03a__03adriver__Vclpkg.dtor();
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__std__03a__03amailbox__Tz1__Vclpkg.dtor();
    TOP__tb_d_flipflop.dtor();
    TOP__std.dtor();
}

void Vtb_d_flipflop__Syms::_traceDump() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_d_flipflop__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        const std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_d_flipflop__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}
