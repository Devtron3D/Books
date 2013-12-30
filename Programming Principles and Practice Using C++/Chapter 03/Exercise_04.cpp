//
//	Chapter 3
//	Exercise 4
//	2012-12-15
//

#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter two integers: ";

	int val1;
	int val2;

	cin >> val1;
	cin >> val2;


	//	smallest and largest
	if ( val1 < val2 )
		cout << val1 << " is less than " << val2 << endl;
	
	if ( val1 > val2 )
		cout << val1 << " is greater than " << val2 << endl;

	//	the sum
	cout << val1 << " + " << val2 << " = " << val1 + val2  << endl;

	//	difference
	if ( val1 == val2 )
		cout << "The values are the same." << endl;

	if ( val1 != val2)
		cout << "The values are not the same." << endl;

	// product
	cout << val1 << " * " << val2 << " = " << val1 * val2  << endl;

	//	ratio
	cout << val1 << " / " << val2 << " = " << val1 / val2  << endl;

	keep_window_open();
}