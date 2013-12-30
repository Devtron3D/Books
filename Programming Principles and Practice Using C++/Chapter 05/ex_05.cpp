
// Chapter 5
// Exercise 5
// 22-12-2013
//


/*
	
*/


#include "../../../std_lib_facilities.h"

// convert from celsius to kelvin
double ctok(double c)			// converts Celsius to Kelvin
{
	double absolute_zero = 0;		// Absolute Zero in kelvin

	double k = c + 273.15;	// Calculation

	// check if user input is below absolute zero
	// if it is below absolute zero, return  absolute_zero variable (lowest possible value)
	if (k < absolute_zero)
	{
		cout << "Warrning: value below 0k (Absolute Zero)" << endl;
		cout << "Warrning: input reset to absolute zero" << endl;

		double zero = 0;	// value in kelvin to return if bad result
		return zero;		// convert temperature with absolute 0 value
	}
	else
	{
		return k;			// return calculation
	}
}

// convert from kelvin to celsius
double ktoc(double k)			// converts Celsius to Kelvin
{
	double absolute_zero = -273.15;		// Absolute Zero in kelvin

	double c = k - 273.15;	// Calculation

	// check if user input is below absolute zero
	// if it is below absolute zero, return  absolute_zero variable (lowest possible value)
	if (c < absolute_zero)
	{
		cout << "Warrning: value below -273.15c (Absolute Zero)" << endl;
		cout << "Warrning: input reset to absolute zero" << endl;

		double zero = 0;	// value in celsius to return if bad result
		return zero;		// convert temperature with absolute 0 value
	}
	else
	{
		return c;			// return calculation
	}
}




int main ()
{
	double c = 0;	// declare input variable
	cin >> c;		// retrieve temperature to input variable

	double k = ctok(c);		// retrive result of celsius to kelvin

	cout << k << endl;		// print out temperature

	
	cin >> c;	// retrieve temperature to input variable again.

	double cel = ktoc(c);	// retrive result of kelvin to celsius

	cout << cel << endl;	// print out temperature

	keep_window_open();
}