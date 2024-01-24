#ifndef MOONOBJECT_H
#define MOONOBJECT_H
#include <iostream> //the input/output stream library of C++


class MoonObject
{
    private:
    double gravitational_acceleration;
    double initial_height;
    double vertical_speed;
    double horizontal_speed;
    double x_pos;
    double y_pos;
public:
MoonObject();
MoonObject(const double _initial_height,const double _vertical_speed,  const double _horizontal_speed);
bool set_initial_height(const double _initial_height);
bool set_horizontal_speed(const double _horizontal_speed);
bool set_vertical_speed(const double _vertical_speed);
double getXPos(const double _time);
double getYPos(const double _time);
};
#endif
