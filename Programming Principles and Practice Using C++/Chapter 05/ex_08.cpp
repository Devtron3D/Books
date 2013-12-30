//
// Chapter 5
// Exercise 8
// 22-12-2013
//

#include "../../../std_lib_facilities.h"

void print_numbers(vector<int> integers, unsigned int number)
{
	// check if numbers is greater than integer size, if so display error
	if (integers.size() < number)
	{
		cout << "Error: number is greater than integer.size()" << endl;
	}
	else
	{
		for (unsigned int i=0; i < number; ++i)
		{
			cout << integers[i] << " ";
		}
	}
}


int main()
{
	cout << "Please enter the number of values you want to sum: ";
	unsigned int number;
	cin >> number;

	cout << "Please enter some integers (press '|' to stop): " ;
	vector<int> integers;   // stores the integers the users enters
	
	// get integers from user
	while (cin)
	{
		int input;
		cin >> input;
		
		// check cin has correct input (not in error) 
		if (cin)
		{
			integers.push_back(input);
		}
	}

	if (number > integers.size() || integers.size() == 0)     // if to few numbers in integer or integer size is 0
	{
		cout << "Error: number to sum is greather than number input." << endl;
	}
	else if (number < integers.size() || number != 0)		// if number < integer or numbers is not 0
	{
		int sum = 0;    // sum of integers

		for (unsigned int i=0; i < number; ++i)
		{
			sum += integers[i];
		}

		// print sum
		cout << "The sum of the first " << number <<  " numbers { ";
		
		print_numbers(integers, number);    // call to print numbers that we sum.
		
		cout << "}" << " is " << sum << endl;
	}


	keep_window_open();
	system("pause");
}
