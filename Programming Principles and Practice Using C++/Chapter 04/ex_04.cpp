//
// Chapter 4
// Exercise 4
// 19-12-2013
//
/*
	Write a program to play a number guessing game. The user thinks of a 
	number between 1 and 100 and your program asks questions to figure
	out what the numnber is (e.g. "Is the number you are thinking of less
	than 50?). Your program should be able to identify the number after 
	asking no more than seven questions. Hint: Use the < and <= operators
	and the if-else construct.
*/

#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Think of a number between 1 and 100, and I will try to guess it." << endl;

	int nr_max = 100;
	int nr_low = 0;
	int tryes = 0;
	char high = 'h';
	char low = 'l';
	char yes = 'y';

	char exit = 'e';
	char input = 'o';

	while (input != exit)
	{
		++tryes;
		int guess;

		if (tryes == 1)
		{
			guess = nr_max / 2;
		}
		else
		{
			guess = ((nr_max-nr_low) / 2) + nr_low;
		}
		

		cout << "Is it number: " << guess << " high/low/yes?:";
		cin >> input;

		if (input == high)
		{
			nr_low = guess;
		}
		else if (input == low)
		{
			nr_max = guess;
		}
		else if (input == yes)
		{
			cout << "I got the number " << guess << " right in " << tryes << "." << endl;
			input = exit;
		}
	
	}

	keep_window_open();
}