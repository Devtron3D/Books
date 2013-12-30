//
// Chapter 6
// Exercise 7
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

	if (discriminant > 0)
	{
		// 2 solutions
		double x1 = (-b+(sqrt(discriminant))) / (2*a);
		double x2 = (-b-(sqrt(discriminant))) / (2*a);

		// display x1 and x2 solutions
		cout << "x1: " << x1 << endl;
		cout << "x2: " << x2 << endl;
	}
	else if (discriminant = 0)
	{
		// 1 solution
		double x1 = (-b+(sqrt(discriminant))) / (2*a);
		double x2 = (-b-(sqrt(discriminant))) / (2*a);

		// display result if they are the same
		if (x1 == x2)
		{
			cout << "x = " << x1 << endl;
		}
		else
		{
			cout << "Error x1 and x2 are not the same" << endl;
		}
	}
	else if (discriminant < 0)
	{
		// no solutions
		cout << "No solutions:" << endl;

	}

}











/*
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
*/