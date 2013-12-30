//
// Chapter 5
// Exercise 3
// 22-12-2013
//


/*
	
*/


#include "../../../std_lib_facilities.h"


double ctok(double c)			// converts Celsius to Kelvin
{
	double k = c + 273.15;
	return k;
}

int main ()
{
	double c = 0;       // declare input variable
	cin >> c;			// retrieve temperature to input variable
	
	double absolute_zero = -273.15;	// Absolute Zero is -273.15
	double k = 0;					// Kelvin result.

	// check if user input is below absolute zero
	// if it is below absolute zero, set k to absolute_zero variable (lowest possible value)
	if (c < absolute_zero)
	{
		cout << "Warrning: value below -273.15c (Absolute Zero)" << endl;
		cout << "Warrning: input reset to absolute zero" << endl;

		k = ctok(absolute_zero);		// convert temperature with absolute 0 value
	}
	else
	{
		// calculate kelvin from user input
		k = ctok(c);		// convert temperature
	}

	cout << k << endl;		// print out temperature

	keep_window_open();
}