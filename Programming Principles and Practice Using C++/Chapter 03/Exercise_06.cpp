//
//	Chapter 3
//	Exercise 6
//	2013-12-16
//
/*
	Write a program that prompts the uset to enter three integer values, and
	the outputs the values in numerical sequence separated by commas. So,
	if the user enters values 10 4 6, the output should be 4, 6, 10. If two
	values are the same, they should be ordered together. So the input 4 
	5 4 should give 4, 4, 5.
*/

#include "../../../std_lib_facilities.h"

int main()
{
	// The user input
	cout << "Please enter 3 integer values: ";

	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	// the storage for the sorted numbers
	int low, med, high;

	if (num1 <= num2)
		low = num1;

	if (num1 <= num3)
		low = num1;

	if (num1 >= num2)
		low = num2;

	if (num1 >= num3)
		low = num3;







	keep_window_open();


}