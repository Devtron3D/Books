//
//	Chapter 3
//	Exercise 11
//	2013-12-16
//
/*
	Write a program that prompts the user to enter some number of pennies
	(1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters (25-
	cent coins), half dollars (50-cent coins), and one-dollar coins (100-cent
	coins). Query the user separately for the number of each size coin, e.g.,
	"How many pennies do you have?" Then your program should print 
	out something like this:

	You have 23 penies.
	You have 17 nickels.
	You have 14 dimes.
	You have 7 quarters.
	You have 3 half dollars.

	The value of all your conies is 573 cents.
	Make some improvements: if only one of a coin is reported, make the out-
	put grammaticlly correct, e.g., "14 fimes" and "1 dime" (not "1 dimes").
	Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.
*/

#include "../../../std_lib_facilities.h"

int main()
{
	//	Greeting
	cout << "Coin calculator" << endl;

	//	storrage
	double pennies, nickels, dimes, quarters, half_dollars, one_dollar;

	//	Get user input
	cout << "How many pennies: ";
	cin >> pennies;
	cout << "How many nickels: ";
	cin >> nickels;
	cout << "How many dimes: ";
	cin >> dimes;
	cout << "How many quarters: ";
	cin >> quarters;
	cout << "How many half dollars: ";
	cin >> half_dollars;
	cout << "How many one dollars: ";
	cin >> one_dollar;

	// do the math
	double sum = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.1) + (quarters * 0.25) + (half_dollars * 0.5) + (one_dollar);

	/////////////
	// output
	/////
	
	cout << endl; // start output with an extra new line 

	double singel = 1; // used to check for singel number of coins

	// Pennies output.
	if (pennies == singel)
	{
		cout << "You have " << pennies << " penny." << endl;
	}
	else
	{
		cout << "You have " << pennies << " pennies." << endl;
	}
	
	// Nickels output.
	if (nickels == singel)
	{
		cout << "You have " << nickels << " nickel." << endl;
	}
	else
	{
		cout << "You have " << nickels << " nickels." << endl;
	}

	// Dimes output.
	if (dimes == singel)
	{
		cout << "You have " << dimes << " dime." << endl;
	}
	else
	{
		cout << "You have " << dimes << " dimes." << endl;
	}

	// Quarters output.
	if (quarters == singel)
	{
		cout << "You have " << quarters << " quarter." << endl;
	}
	else
	{
		cout << "You have " << quarters << " quarters." << endl;
	}

	// Half Dollars output.
	if (half_dollars == singel)
	{
		cout << "You have " << half_dollars << " half dollar." << endl;
	}
	else
	{
		cout << "You have " << half_dollars << " half dollars." << endl;
	}

	// Dollars output.
	if (one_dollar == singel)
	{
		cout << "You have " << one_dollar << " dollar." << endl;
	}
	else
	{
		cout << "You have " << one_dollar << " dollars." << endl;
	}

	// Total output
	cout << "The value of all your coins is: $" << sum << endl;


	keep_window_open();
}