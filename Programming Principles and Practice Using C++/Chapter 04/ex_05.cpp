//
// Chapter 4
// Exercise 5
// 19-12-2013
//
/*
	Writ a program that performs as a very simple calculator. You calculator
	should be able to handle the four basic math operations - add, subtract
	, multiply, and divide - on two input values. Your program should
	prompt the user to enter three aruments: two double values and a charcter 
	to represent an operation. If the entry arguments are 35.6, 24.1 and 
	'+', the program output should be "The sum of 35.6 and 24.1 is 59.7."
	in Chapter 6 we look at a much more sophisticated simple calculator.
*/

#include "../../../std_lib_facilities.h"

int main()
{
	cout << "-----------Simple calculator-----------" << endl;
	cout << "plus '+', minus '-', multiply '*', divide '/'" << endl;
	cout << "Input: double, double , char." << endl;

	double left;
	double right;
	double sum = 0;
	char operation;

	cin >> left >> right >> operation;

	if (operation == '+')
	{
		sum = left + right;
	}
	else if (operation == '-')
	{
		sum = left - right;
	}
	else if (operation == '*')
	{
		sum = left * right;
	}
	else if (operation == '/')
	{
		sum = left / right;
	}
	else
	{
		cout << endl << endl;
		cout << "Warrning Invalid operation.";
		cout << endl << endl;
	}
	
	cout << endl;
	cout << "The sum of " << left << " and " << right << " is " << sum << "." << endl;

	keep_window_open();

}