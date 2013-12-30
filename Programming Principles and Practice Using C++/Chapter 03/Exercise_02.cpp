//
//	Chapter 3
//	Exercise 2
//	2012-12-15
//

#include "../../../std_lib_facilities.h"

int main()
{
	double miles = 0;			 //	miles
	double km = 0;				 //	holds km value
	double convert = 1.609;		 //	miles to km

	//	ask for input
	cout << "Enter miles: ";
	cin >> miles;

	//	do the math
	km = convert * miles;

	//	display result
	cout << miles << " miles = " << km << " Kilometers." << endl;

	keep_window_open();
}