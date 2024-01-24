
#include "Resistor.h"

using namespace std;

Resistor::Resistor()
{
    resistance = 0.00;
    current = 0.00;
    voltage = 0.00;
}
Resistor::Resistor(const double _resistance)
{
    resistance = _resistance;
    current = 0.00;
    voltage = 0.00;
}
double Resistor::GetCurrent(double _voltage)
{
    this->voltage = _voltage;
    this->current = this->voltage / this->resistance;
    return this->current;
}

Resistor::~Resistor()
{
    resistance = 0.00;
    current = 0.00;
    voltage = 0.00;
}
