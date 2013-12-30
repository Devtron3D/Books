//
// Chapter 5
// Exercise 9
// 22-12-2013
//


#include "../../../std_lib_facilities.h"


void is_int(double value)
{
	int y = value;
	double x = y;

	if (x != value)
	{
		cout << "Cannot fit in an int." << endl;
	}

}


// Convert Celsius to Fahrenheit
double ctof(double cel)
{
	
	double fah = (cel*1.8) + 32;	// the math

	return fah;
}


// Convert Fahrenheit to Celsius
double ftoc(double fah)
{
	double cel = (fah-32) / 1.8;   // the math

	return cel;
}



int main()
{
	double input;	

	cout << "cel to fah: ";
	cin >> input;

	double result = ctof(input);

	cout << "result: " << result  << endl << endl;
	is_int(result);

	cout << "fah to cel: ";
	cin >> input;

	result = ftoc(input);
	cout << "result: " << result << endl << endl;
	is_int(result);

	keep_window_open();

}

