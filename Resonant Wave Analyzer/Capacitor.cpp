
#include "Capacitor.h"

using namespace std;

Capacitor::Capacitor()
{
    capacitance = 0.00;
    current = 0.00;
    voltage = 0.00;
    timeStep = 0.00;
}
Capacitor::Capacitor(const double _capacitance)
{
    capacitance = _capacitance;
    current = 0.00;
    voltage = 0.00;
    timeStep = 0.00;
}
double Capacitor::GetCurrent(double _newvoltage, double _timeStep)
{
    this->timeStep = _timeStep;
    this->current = this->capacitance * (_newvoltage - this->voltage) / this->timeStep;
    this->voltage = _newvoltage;
    return this->current;
}

Capacitor::~Capacitor()
{
    capacitance = 0.00;
    current = 0.00;
    voltage = 0.00;
    timeStep = 0.00;
}
