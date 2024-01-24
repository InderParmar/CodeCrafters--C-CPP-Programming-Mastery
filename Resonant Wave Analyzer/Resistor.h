#ifndef RESISTOR_H
#define RESISTOR_H
#include <iostream> //the input/output stream library of C++


class Resistor
{
    private:
    double resistance;
    double current;
    double voltage;
	/* int* cards;//Dynamic memory allocation. We don't know how many cards the player
	              //has taken until we run the program. We allocate memory once we know. */
public:
Resistor();
Resistor(const double _resistance);
~Resistor();
double GetCurrent(double _voltage);
};
#endif
