//
// Exercises 1.
//
// Rewrite the Menu Chooser program from this chapter using an enumeration
// to represent difficulty levels. The variable choice will still be of type int.
//


#include <iostream>
using namespace std;

int main()
{
	enum difficulty{EASY = 1, NORMAL, HARD};
	
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch (choice)
	{
	case EASY:
		cout << "You picked Easy.\n";
		break;
	case NORMAL:
		cout << "You picked Normal.\n";
		break;
	case HARD:
		cout << "You picked Hard.\n";
		break;
	default:
		cout << "You made an illegal choice.\n";
	}

	system("pause"); // to keep console window open

	return 0;
}



/*
	Orginal code from book

// Menu Chooser
// Demonstrates the switch statement

#include <iostream>
using namespace std;

int main()
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "You picked Easy.\n";
		break;
	case 2:
		cout << "You picked Normal.\n";
		break;
	case 3:
		cout << "You picked Hard.\n";
		break;
	default:
		cout << "You made an illegal choice.\n";
	}

	return 0;
}
*/