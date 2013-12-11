// Exercises 3

/*
	Write a new version of the Guess My Number program in which the 
	player and the computer switch roles. That is, the player picks a number
	and the computer must guess what it is.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));  //seed random number generator

	cout << "\tWelcome to Guess My Number\n\n";
	cout << "Please enter a number, for the computer to guess (1-100): ";

	// get the number
	int secretNumber = 0;   // set number to 0 before getting one.
	cin >> secretNumber;

	int tries = 0;
	int guess = -1; // set computers number to negative (-1) before start of guessing.
	int high = 100; // high start number
	int low = 1;    // low start number

	// computer tries to guess the secret number.
	do {

		int range = high - low;

		guess = (rand() % range + low) + 1;
		++tries;

		cout << guess << endl;

		if (guess > secretNumber && guess < high)
		{
			high = guess;
		}
		else if (guess < secretNumber && guess > low)
		{
			low = guess;
		}
		else if (guess == secretNumber)
		{
			cout << endl << "the computer got it in: " << tries << endl;
		}
		
	} while (guess != secretNumber);

	system("pause");
	return 0;
}
