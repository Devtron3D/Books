//
//	Chapter 3
//	Exercise 10
//	2013-12-16
//
/*
	Write a program that takes an operation followed by two operands and
	outputs the result. For example:
		+ 100 3.14
		* 4 5
	Read the operation into a string called operation and use an if-statment
	to figure out which operation the user wants, for example, if (opera-
	tion=="+"). Read the operation into variables of type double. Implement
	this for operations called +, -, *, /, plus minus, mul, and div with their
	obvious meanings.
*/

#include "../../../std_lib_facilities.h"

int main()
{
	int val1, val2;
	string operation;

	cout << "Please enter operation followed by two integers: ";
	cin >> operation >> val1 >> val2;

	string plus = "+";
	string minus = "-";
	string mul = "*";
	string div = "/";

	if (operation == plus)
	{
		cout << "Result: " << val1 + val2 << endl;
	}
	else if (operation == minus)
	{
		cout << "Result: " << val1 - val2 << endl;
	}
	else if (operation == mul)
	{
		cout << "Result: " << val1 * val2 << endl;
	}
	else if (operation == div)
	{
		// Check if dividing by zero
		if (val2 == 0)
		{
			cout << "Error Can't divide by zero" << endl;
		}
		else
		{
			cout << "Result: " << val1 / val2 << endl;
		}
	}
	else
	{
		cout << "Wrong input" << endl;
	}

	keep_window_open();
}