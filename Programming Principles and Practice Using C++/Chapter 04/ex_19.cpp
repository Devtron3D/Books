//
// Chapter 4
// Exercise 19
// 20.12.2013
//

#include "../../../std_lib_facilities.h"

int main()
{
	vector<string> names;
	vector<int> scores;

	string exit = "NoName";
	bool quit = false; // if  run program
	string input = "";

	while (quit == false)
	{
		string input;
		int value;

		cout << "Enter name: ";
		cin >> input;

		// check if exit command was used
		if (input == exit)
		{
			quit = true;
		}
		else
		{
			cout << "Enter score: ";
			cin >> value;
		}


		// First time input check
		if (names.size() == 0 && scores.size() == 0)
		{
			names.push_back(input);
			scores.push_back(value);
		}
		else if (quit == false)   // do not check for new input if quite is used
		{
			for (int i=0; i<names.size(); ++i)
			{
				if (names[i] == input)
				{
					cout << "Warrning repeating input." << endl;
					i = names.size();   // terminate input copy found.
				}
				else if (i == names.size() -1)
				{
					names.push_back(input);
					scores.push_back(value);
					i = names.size();			// change the value to end the loop. 
				}
			}
		}
	}

	// Display vectors
	cout << endl;   // hey look a new line.

	for (int i=0; i<names.size(); ++i)
	{
		cout << "Name: " << names[i] << "  -  Score: " << scores[i] << endl;
	}

	keep_window_open();
	system("pause");

}