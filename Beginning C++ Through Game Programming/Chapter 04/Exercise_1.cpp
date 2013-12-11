// Exercise 1
/*
	Write a program using vectors and iterators that allows a user to maintain
	a list of his or her favorite games. The program should allow the
	user to list all games titles, add a game title,and remove a game title.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> games;

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	char choice = ' ';
	char exit = 'e';
	char list = 'l';
	char add = 'a';
	char remove = 'r';

	while (choice != exit)
	{
		//
		// program menu
		//
		cout << endl;
		cout << "Games list program." << endl;
		cout << "List   = l" << endl;
		cout << "add    = a" << endl;
		cout << "remove = r" << endl;
		cout << "exit   = e" << endl;
		cout << ": ";

		cin >> choice;

		//
		//	Display the game list
		//
		if (choice == list)
		{
			if (games.begin() == games.end())   // no games in list
			{
				cout << endl;
				cout << "No games in list." << endl;
			}
			else if (games.begin() != games.end())    // Display list.
			{
				cout << endl;
				cout << "Your Games: " << endl;

				for (iter = games.begin(); iter != games.end(); ++iter)
				{
					cout << "--> " << *iter << endl;
				}
			}
		}

		//
		//	Add a game to the list.
		//
		if (choice == add)
		{
			// get game name from user
			cout << "Enter game name: ";
			string input;
			cin >> input;

			games.push_back(input);	
		}

		//
		//	Remove a game from the list.
		//
		if (choice == remove)
		{
			// get game name to be removed.
			cout << "Please enter the name of the game you wish to remove: ";
			string input;
			cin >> input;

			// find the game
			iter = find(games.begin(), games.end(), input);
			
			// erase game from vector
			if (iter != games.end())
			{
				cout << "Removing: " << *iter;
				games.erase(iter);
				cout << endl;
			}
			else
			{
				cout << "Game not found!." << endl;
			}
		}
	}

}