/*
	Chapter 3 - Exercise 1
	Improve the Word Jumble game by adding a scoring system. Make the
	point valuefor a word based on its length. Deduct points if the player
	asks for a hint.
*/


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{ "wall", "Do you feel you're banging your head against something?" },
		{ "glasses", "These might help you see the answer." },
		{ "labored", "Going slowly, is it?" },
		{ "persistent", "Keep at it." },
		{ "jumble", "It's what the game is all about." }
	};

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];  // word to guess
	string theHint = WORDS[choice][HINT];  // hint for word

	string jumble = theWord;  // jumbled version of word
	int length = jumble.size();
	for (int i = 0; i < length; ++i)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	int points = theWord.size();   // Used to store the points.
	int hint_cost = 3;             // The hint costs 3 points.
	int guess_cost = 1;           // The wrong guess cost is 1 point.

	cout << "\t\t\tWelcome to Word Jumble!\n\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'hint' for a hint.\n";
	cout << "Enter 'quit' to quit the game.\n\n";
	cout << "You get, " << points << " points for this word, if guess is correct \n";
	cout << "The jumble is: " << jumble;

	string guess;
	cout << "\n\nYour guess: ";
	cin >> guess;

	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
			points = points - hint_cost;
		}
		else
		{
			cout << "Sorry, that's not it.";
			points = points - guess_cost;
		}

		cout << "\n\nYour guess: ";
		cin >> guess;
	}

	if (guess == theWord)
	{
		cout << "\nThat's it!  You guessed it!\n";

		// return the point informaiton to the user
		if (points > 0)
		{
			cout << "You get " << points << " points.\n";
		}
		else if (points <= 0)
		{
			cout << "Sorry you dont get any points.\n";
		}
	}

	cout << "\nThanks for playing.\n";
	system("pause"); // to keep consol window open, on windows systems

	return 0;
}






