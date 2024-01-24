
// BankAccount.cpp - function definitions for a bank account

#include "Inductor.h"

using namespace std;
Inductor::Inductor()
{
    inductance = 0.00;
    current = 0.00;
    voltage = 0.00;
    timeStep = 0.00;
}
Inductor::Inductor(const double _inductance)
{
    inductance = _inductance;
    current = 0.00;
    voltage = 0.00;
    timeStep = 0.00;
}
double Inductor::GetCurrent(double _voltage, double _timeStep)
{
    this->voltage = _voltage;
    this->timeStep = _timeStep;
    this->current += this->voltage * this->timeStep / inductance;
    return this->current;
}

Inductor::~Inductor()
{
    inductance = 0.00;
    current = 0.00;
    voltage = 0.00;
    timeStep = 0.00;
}
