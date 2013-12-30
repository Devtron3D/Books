//
// Chapter 4
// Exercise 18
// 22-12-2013
//


#include "../../../std_lib_facilities.h"


int main()
{
	//  The formula: ax^2 + hx + c = 0
	
	// known result
	double a = 2;
	double b = 2;
	double c = -4;
	
	double discriminant = (b*2)-(4*(a*c));

	double x1 = (-b+(sqrt(discriminant))) / (2*a);
	double x2 = (-b-(sqrt(discriminant))) / (2*a);

	cout << "x1: " << x1 << endl;
	cout << "x2: " << x2 << endl;

	keep_window_open();
}
