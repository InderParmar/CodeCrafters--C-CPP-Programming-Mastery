#ifndef EARTHOBJECT_H
#define EARTHOBJECT_H
#include <iostream> //the input/output stream library of C++


class EarthObject
{
    private:
    double gravitational_acceleration;
    double initial_height;
    double horizontal_speed;
    double x_pos;
    double y_pos;
public:
EarthObject();
EarthObject(const double _initial_height, const double _horizontal_speed);
bool set_initial_height(const double _initial_height);
bool set_horizontal_speed(const double _horizontal_speed);
double getXPos(const double _time);
double getYPos(const double _time);
};
#endif
