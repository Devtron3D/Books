//
//	Chapter 3
//	Exercise 8
//	2013-12-16
//
/*
	Write a program to test an integer value to determine if it is odd or even.
	As always, make sure your output is clear and complete. In other words,
	don´t just output "yes" or "no". Your output should stand alone, like
	"The value 4 is an even number." Hint: See the remainder (modulo) operator 
	in $3.4
*/

#include "../../../std_lib_facilities.h"

int main()
{
	//	Get input
	cout << "Please enter a number: ";
	int number;
	cin >> number;

	//	text string starts at "even"
	string text = "even";

	//	 check if number is odd, if so reassign text string to odd
	if (number % 2)
		text = "odd";

	//	Display result
	cout << "The value " << number << " is an " << text << " number." << endl;

	keep_window_open();
}