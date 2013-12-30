//
//	Chapter 3
//	Exercise 9
//	2013-12-16
//
/*
	Write a program that converts spelled-out numbers such as "zero" and
	"two" into digits, such as 0 and 2. When the user inputs a number, the
	program should print out the corresponding digit. Do it for the values 
	0, 1, 2, 3, and 4 and write out "not a number I know" if the user enters
	something that dosen´t correspond, such as "stupid computer!"
*/

#include "../../../std_lib_facilities.h"

int main()
{
	
	// get input and keep showing numbers
	string number; // for the user input
	string one = "one";
	string two = "two";
	string three = "three";
	string four = "four";
	string wrong = "Not a number I know.";

	while (cin >> number) 
	{
		if (number == one)
		{
			cout << number << " = 1" << endl;
		} 
		else if (number == two)
		{
			cout << number << " = 2" << endl;
		} 
		else if (number == three)
		{
			cout << number << " = 3" << endl;
		}
		else if (number == four)
		{
			cout << number << " = 4" << endl;
		}
		else
		{
			cout << "Not a number I know." << endl;
		}
	}



}