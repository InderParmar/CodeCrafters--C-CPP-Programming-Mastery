#ifndef INDUCTOR_H
#define INDUCTOR_H
#include <iostream> //the input/output stream library of C++


class Inductor
{
    private:
    double inductance;
    double current;
    double voltage;
    double timeStep;
public:
Inductor();
Inductor(const double _inductance);
~Inductor();
double GetCurrent(double _voltage, double _timeStep);

};
#endif
