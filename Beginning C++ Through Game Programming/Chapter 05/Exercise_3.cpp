//
// Chapter 5
// Exercise 3
// 2013-12-07
//
/*
	Using default arguments, write a function that asks the user for a
	number and returns that number. The function should accept a string
	prompt from the calling code. If the caller doesn´t supply a string for the
	prompt, the function should use a generic prompt. Next, using function 
	overloading, write a function that achieves the same results.
*/

#include <iostream>
#include <string>

using namespace std;

// get a number from the user.
int get_number(string message = "Please enter a number :" )
{
	cout << message;

	int number;
	cin >> number;

	return number;
}





