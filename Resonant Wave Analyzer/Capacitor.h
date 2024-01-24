#ifndef CAPACITOR_H
#define CAPACITOR_H
#include <iostream> //the input/output stream library of C++


class Capacitor
{
    private:
    double capacitance;
    double current;
    double voltage;
    double timeStep;
	/* int* cards;//Dynamic memory allocation. We don't know how many cards the player
	              //has taken until we run the program. We allocate memory once we know. */
public:
Capacitor();
Capacitor(const double _capacitance);
~Capacitor();
double GetCurrent(double _newvoltage, double _timeStep);
};
#endif
