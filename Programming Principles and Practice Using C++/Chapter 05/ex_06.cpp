//
// Chapter 5
// Exercise 6
// 22-12-2013
//


#include "../../../std_lib_facilities.h"


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

	cout << "result: " << ctof(input) << endl << endl;

	cout << "fah to cel: ";
	cin >> input;

	cout << "result: " << ftoc(input) << endl << endl;


	keep_window_open();

}

