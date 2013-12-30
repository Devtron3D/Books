//
// Chapter 4
// Exercise 3
// 19-12-2013
//
/*
	Read a sequence of double values into a vector. Think of each value as
	the dstance between two cities along a given route. Compute and print
	the total distance (the sum of all distances). Find and print the smallest
	and greatest distance between two neighboring cities. Find and print the
	mean distance between two neighboring cities.
*/

#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter values." << endl;

	vector<double> numbers;
	double sum = 0;				// sum of all values
	double smallest;			// smallest distance
	double greatest;			// greatest distance

	double input;

	// get numbers from user.
	while (cin >> input)
	{
		// if first value in loop
		if (numbers.size() == 0)
		{
			smallest = input;
			greatest = input;
		}
		else
		{
			if (input < smallest)
			{
				smallest = input;
			}
			else if (input > greatest)
			{
				greatest = input;
			}
		}

		numbers.push_back(input);
		sum += input;
	}

	// display total, smallest and greatest distance.
	cout << "Total distance: " << sum << endl;
	cout << "Smallest distance: " << smallest << endl;
	cout << "Greatest distance: " << greatest << endl;

	// display the mean distance between two neighboring cities.
	cout << "Mean Distance." << endl;
	for (int i = 0; i< numbers.size(); ++i)
	{
		cout << "Cities: " << (numbers[i]) / 2 << endl;	// get the current i and the last one
	}

	system("pause");
}