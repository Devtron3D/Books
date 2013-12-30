//
// Chapter 4
// Exercise 16
// 19.12.2013
//

#include "../../../std_lib_facilities.h"

int main()
{
	vector<int> numbers;	// all the numbers;
	vector<int> mode;		// mode
	vector<int> nr_mode;	// number of times a mode has been seen

	int input;
	
	cout << "Enter a number: ";
	while (cin >> input)
	{
		cout << "Enter a number: ";
		//cin >> input;

		numbers.push_back(input);
	
		// If first input
		if (numbers.size() == 1 && mode.size() == 0)
		{
			mode.push_back(input);
			int one = 1; // first time number has been seen
			nr_mode.push_back(one);
		}
		else
		{
			//  check if number is already there
			//	if not add it.
			for (int i=0; i<mode.size(); ++i)
			{
				if (mode[i] == input)
				{
					++nr_mode[i];
					i = mode.size();   // end search
				}
				else if (i == mode.size()-1)
				{
					mode.push_back(input);
					int one = 1; // first time number has been seen
					nr_mode.push_back(one);
					i = mode.size();   // end search

				}
			}
		}

	}


	// display mode
	for (int i=0; i<mode.size(); ++i)
	{
		cout << "Nr: " << mode[i] << " seen " << nr_mode[i] << " times." << endl;
	}

	system("pause");
}
