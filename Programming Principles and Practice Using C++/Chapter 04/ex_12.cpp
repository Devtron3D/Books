//
// Chapter 4
// Exercise 12
// 19-12-2013
//


#include "../../../std_lib_facilities.h"


bool prime(int number)
{
	// start i at 2
	for (int i=2; i<number; ++i)
	{
		if ((number % i) == 0)
		{

			return false;
		}
	}
	return true;

}

int main()
{
	
	cout << "Please enter a max prime to look for: ";
	int max;
	cin >> max;

	vector<int> primes;


	// start i at 2
	for (int i=2; i<max; ++i)
	{
		bool result = prime(i);

		if (result == true)
		{
			primes.push_back(i);
		}
	}
	

	for (int i=0; i < primes.size(); ++i)
	{
		cout << "Nr. " << i << " - Prime: " << primes[i] << endl; 
	}

	keep_window_open();
}