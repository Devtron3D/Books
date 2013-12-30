//
//	Chapter 4
//	Try this page 123
//	19-12-2013
//
/*
	Write a program that "bleeps" out words that you don´t like tha is, you
	read in words using cin and pront them again on cout. If a word is among a 
	few you have defined, you write out BLEEP instead of that word. Start with
	one "displiked word" such as

		string disliked = "Broccoli";

	When that works, add a few more.
*/

#include "../../../std_lib_facilities.h"

int main()
{
	// Vector of disliked words
	vector<string> disliked;

	disliked.push_back("Broccoli");
	disliked.push_back("Carrot");
	disliked.push_back("Apple");

	
	string bleep = "BLEEP";		//	Bleep word for disliked output.
	string word;				//	The users input.

	while (cin>>word)
	{
		// Check for disliked words
		for (int i=0; i<disliked.size(); ++i)
		{
			if (word == disliked[i])
			{
				word = bleep;	// found disliked word.
			}
		}

		//	Show user the word.
		cout << "Your word is: " << word << "." << endl;
	}
}
