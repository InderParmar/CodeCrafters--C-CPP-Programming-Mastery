#include "EarthObject.h"
using namespace std;
/* EarthObject:: */
EarthObject::EarthObject()
{
    gravitational_acceleration = 9.81;
    initial_height = 0.00;
    horizontal_speed = 0.00;
    x_pos = 0.00;
    y_pos = 0.00;
}
EarthObject::EarthObject(const double _initial_height, const double _horizontal_speed)
{
    bool ret = set_initial_height(_initial_height);
    if(ret)
        ret = set_horizontal_speed(_horizontal_speed);
    if(ret)
    {    
    x_pos = 0.00;
    y_pos = 0.00;    
    gravitational_acceleration = 9.81;
}
else{
    cout<<"Invalid values"<<endl;
}
}
bool EarthObject::set_initial_height(const double _initial_height)
{
    bool retVal = true;
    if (_initial_height <= 0)
    {
        retVal = false;
    }
    else
    {
        initial_height = _initial_height;
    }
    return retVal;
}
bool EarthObject::set_horizontal_speed(const double _horizontal_speed)
{
    bool retVal = true;
    if (_horizontal_speed <= 0)
    {
        retVal = false;
    }
    else
    {
        horizontal_speed = _horizontal_speed;
    }
    return retVal;
}
double EarthObject::getXPos(const double _time)
{
x_pos = horizontal_speed * _time;
return x_pos;
}

double EarthObject::getYPos(const double _time)
{
y_pos = initial_height - 0.5 * gravitational_acceleration * _time * _time;
return y_pos;
}
