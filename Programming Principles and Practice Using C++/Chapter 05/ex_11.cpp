//
// Chapter 5
// Exercise 11
// 22-12-2013
//

#include "../../../std_lib_facilities.h"


int main()
{
	int f = 1;  // first number
	int n = 2;  // next number

	while (f < n)
	{
		cout << "Current: " << f << endl;   // current number output;

		int temp = f+n;
		f = n;
		n = temp;
	}

	cout << "The largest fib number an int can hold is: " << f << endl;

	keep_window_open();

}
