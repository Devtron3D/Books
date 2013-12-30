//
//	Chapter 4
//	Try this page 115
//	19-12-2013
//
/*
	Implement square() without the multiplication operator; this is, do the
	x*x by repeated addition (start a variable result at 0 and add x to it x times).
	Then run some version of "the first program" using that quare().
*/

#include "../../../std_lib_facilities.h"

int square(int number)
{
	int result = 0;

	for (int i=0; i<number; ++i)
	{
		result += number;
	}

	return result;
}

int main()
{
	cout << "Enter number to square: ";
	int number;
	cin >> number;

	cout << "Result: " << square(number) << endl;

	keep_window_open();
}