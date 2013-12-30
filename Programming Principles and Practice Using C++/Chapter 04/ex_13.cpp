//
// Chapter 4
// Exercise 13
// 19-12-2013
//

#include "../../../std_lib_facilities.h"

int main()
{

	int max = 100;
	
	vector<int> numbers;

	for (int i=0; i<max; ++i)
	{
		numbers.push_back(i);
	}

	for (int i=2; i<max; ++i)
	{

		int sum = i;
		for (int j=2; j<max; ++j)
		{
			sum += i;
			for(int k=0; k < numbers.size(); ++k)
			{
				if (numbers[k] == sum)
				{
					numbers[k] = 0;
					//
					//cout << "sum: " << sum << " - k: " << k << endl;
					k = numbers.size();   // end loop
				}
			}
		}
	}

	for (int i=0; i<numbers.size(); ++i)
	{
		if (numbers[i] != 0)
		{
			cout << "Prime: " << numbers[i] << endl; 
		}
	}

	keep_window_open();
}