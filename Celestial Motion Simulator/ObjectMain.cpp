// ObjectMain.cpp - main program for moving objects on the moon and on earth

// 18-Mar-21  M. Watler         Created.

#include <iostream>
#include <iomanip>

#include "MoonObject.cpp"
#include "EarthObject.cpp"

using namespace std;

int main(void)
{
	double initialHeightEarth = 100;
	double horizontalSpeedEarth = 100;
	double initialHeightMoon = 100;
	double initialVerticalSpeedMoon = 10;
	double horizontalSpeedMoon = 100;

	MoonObject moon(initialHeightMoon, initialVerticalSpeedMoon, horizontalSpeedMoon);
	EarthObject earth(initialHeightEarth, horizontalSpeedEarth);
	double time;
	for (time = 0.0; moon.getYPos(time) > 0 && earth.getYPos(time) > 0; time += 0.001)
	{
	}

	cout << "time:" << time << endl;
	cout << "The moon object's horizontal position is " << moon.getXPos(time) << "m and vertical position is " << moon.getYPos(time) << "m" << endl;
	cout << "The earth object's horizontal position is " << earth.getXPos(time) << "m and vertical position is " << earth.getYPos(time) << "m" << endl
		 << endl;
	bool valid = true;
	do
	{
		cout << "Enter the moon object's horizontal speed: ";
		cin >> horizontalSpeedMoon;
		valid = moon.set_horizontal_speed(horizontalSpeedMoon);
		if (valid == false)
			cout << "Invalid speed" << endl;
	} while (valid == false);
	do
	{
		cout << "Enter the moon object's initial vertical speed: ";
	cin >> initialVerticalSpeedMoon;
		valid = moon.set_vertical_speed(initialVerticalSpeedMoon);
		if (valid == false)
			cout << "Invalid speed" << endl;
	} while (valid == false);
	do
	{
	cout << "Enter the moon object's initial height: ";
	cin >> initialHeightMoon;
		valid = moon.set_initial_height(initialHeightMoon);
		if (valid == false)
			cout << "Invalid height" << endl;
	} while (valid == false);
	do
	{
	cout << "Enter the earth object's horizontal speed: ";
	cin >> horizontalSpeedEarth;
		valid = earth.set_horizontal_speed(horizontalSpeedEarth);
		if (valid == false)
			cout << "Invalid speed" << endl;
	} while (valid == false);
	do
	{
	cout << "Enter the earth object's initial height: ";
	cin >> initialHeightEarth;
		valid = earth.set_initial_height(initialHeightEarth);
		if (valid == false)
			cout << "Invalid height" << endl;
	} while (valid == false);

	// TODO: Prompt the user to enter new parameters for the moon object and the earth object.
	//       For the moon, the parameters are: initial height, initial vertical speed, and the horizontal speed.
	//       For the earth, the parameters are: initial height and the horizontal speed.
	// Be sure to perform validation on the entered values.

	// The simulation runs again
	for (time = 0.0; moon.getYPos(time) > 0 && earth.getYPos(time) > 0; time += 0.001)
	{
	}

	cout << endl;
	cout << "time:" << time << endl;
	cout << "The moon object's horizontal position is " << moon.getXPos(time) << "m and vertical position is " << moon.getYPos(time) << "m" << endl;
	cout << "The earth object's horizontal position is " << earth.getXPos(time) << "m and vertical position is " << earth.getYPos(time) << "m" << endl;

	return 0;
}