//
// Chapter 4
// Exercise 17
// 19.12.2013
//

#include "../../../std_lib_facilities.h"

int main()
{
	vector<string> words;	// all the words;
	vector<string> mode;	// mode
	vector<int> nr_mode;	// number of times a mode has been seen

	string input = "";
	string exit = "exit";
	
	while (input != exit)
	{
		cout << "Enter a word: ";
		cin >> input;

		words.push_back(input);
	
		// If first input
		if (words.size() == 1 && mode.size() == 0)
		{
			mode.push_back(input);
			int one = 1; // first time word has been seen
			nr_mode.push_back(one);
		}
		else if (input != exit)  // do not add the exit command
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
					int one = 1; // first time word has been seen
					nr_mode.push_back(one);
					i = mode.size();   // end search

				}
			}
		}

	}


	// display mode
	for (int i=0; i<mode.size(); ++i)
	{
		// check if word has been seen only once
		// if so use correct spelling.
		string time;
		if (nr_mode[i] == 1)
		{
			time = " time.";
		}
		else
		{
			time = " times.";
		}
		

		cout << "word: " << mode[i] << " seen " << nr_mode[i] << time << endl;
	}

	system("pause");
}
