//	
//  Chapter 5
//	Exercise 2
//	2013-12-07
//
/*
	Rewrite the Hangman game from chapter 4 using functions. Include a 
	function to get the player´s guess and another function to determine
	whether the player´s guess is in the secret word. 
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

char input();
bool check(string THE_WORD, char guess);

int main()
{
	// set-up
	const int MAX_WRONG = 8;  // maximum number of incorrect guesses allowed

	vector<string> words;  // collection of possible words to guess
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");

	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0];            // word to guess
	int wrong = 0;                               // number of incorrect guesses
	string soFar(THE_WORD.size(), '-');          // word guessed so far
	string used = "";                            // letters already guessed

	cout << "Welcome to Hangman.  Good luck!\n";

	// main loop
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	{
		cout << "\n\nYou have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left.\n";
		cout << "\nYou've used the following letters:\n" << used << endl;
		cout << "\nSo far, the word is:\n" << soFar << endl;

		char guess = input(); // get new char

		while (used.find(guess) != string::npos)
		{
			cout << "\nYou've already guessed " << guess << endl;
			guess = input(); // get new char
		}

		used += guess;

		if (check(THE_WORD, guess) == true)
		{
			cout << "That's right! " << guess << " is in the word.\n";

			// update soFar to include newly guessed letter
			for (unsigned int i = 0; i < THE_WORD.length(); ++i)
			{
				if (THE_WORD[i] == guess)
				{
					soFar[i] = guess;
				}
			}
		}
		else
		{
			cout << "Sorry, " << guess << " isn't in the word.\n";
			++wrong;
		}
	}

	// shut down
	if (wrong == MAX_WRONG)
		cout << "\nYou've been hanged!";
	else
		cout << "\nYou guessed it!";

	cout << "\nThe word was " << THE_WORD << endl;

	return 0;
}


bool check(string THE_WORD, char guess)
{
	if (THE_WORD.find(guess) != string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}

	
}

char input()
{
	char guess;
	cout << "\n\nEnter your guess: ";
	cin >> guess;

	char letter = toupper(guess);
	return letter; //make uppercase since secret word in uppercase
}