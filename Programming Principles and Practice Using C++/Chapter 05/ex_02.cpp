//
// Chapter 5
// Exercise 2
// 22-12-2013
//


// Code with errors from the book
//
/*
#include "../../../std_lib_facilities.h"


double ctok(double c)			// converts Celsius to Kelvin
{
	int k = c + 273.15;
	return int
}

int main ()
{
	double c = 0;       // declare input variable
	cin >> d;			// retrieve temperature to input variable
	double k = ctok("c");		// convert temperature
	Cout << k << endl;			// print out temperature
}
*/


// Code that has been fixed
// error list from top down.
/*
	1. int k = c + 273.15; 
		int should be double

	2. return int
		should be return k;

	3. cin >> d;
		should be: cin >> c;

	4. double k = ctok("c");	
		should be: double k = ctok(c);

	5. Cout << k << endl;
		should be: cout << k << endl;
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
	double k = ctok(c);		// convert temperature
	cout << k << endl;		// print out temperature

}