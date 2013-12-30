//
//	Chapter 4
//	Exercise 2
//	19.12.2013
//
/*
	if we define the median of a sequence as  "a number so that exactly as
	many elements come before it in the sequence as comes after it," fix  the
	program in $4.6.2 so that it always prints out a median. Hint: A median
	need not be an element of the sequence.
*/

#include "../../../std_lib_facilities.h"

int main()
{
	vector<double> temps;		// Temperatures
	double temp;
	while (cin>>temp)			// read
		temps.push_back(temp);	// put into vector


	// compute mean temperature:
	double sum = 0;
	for (int i=0; i<temps.size(); ++i) sum += temps[i];
	cout << "Average temperature: " << sum/temps.size() << endl;


	// compute the median temperature
	sort(temps.begin(), temps.end());	// sort temps
										// "from the beginning to the end"
	double result;


	if (temps.size() % 2)
	{
		result = temps[temps.size()/2];
	}
	else
	{
		result = (temps[temps.size()/2] + temps[(temps.size()/2)-1]) / 2;
	}

	cout << "Median temperature: " << result << endl;

	keep_window_open();

	system("pause");
}