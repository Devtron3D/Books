//
// Chpater 4
// Exercise 9
// 19-12-2013
//
/*
	Try to calculate the number of rice grains that the inventor asked for in
	exercise 8 above. You´ll find that the number is so large that it won´t fit in
	an int or a double. Observe what happens when the number gets too
	large to represent exatly as an int and as a double. What is the largest
	number of squares for which you can calculate the exat number of
	grains (using an int)?. What is the æargest number of quares for which
	you can calculate the approximate number of grains (using a double)?.
*/

#include "../../../std_lib_facilities.h"


int main()
{
	double sum = 0;
	double single_grain = 1;
	double multiplyer = 2;
	double square = 64;
	double current = 1;

	for (double i=0; i <square; ++i)
	{
		
		cout << "Square: " << i+1 << ", Grains: " << current << endl;
		current *= multiplyer;
		sum += current;
	}
	cout << "Total: " << sum << endl;

	

	keep_window_open();
}