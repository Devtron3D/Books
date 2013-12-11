//
// Exercises 3.
//
// Write a program that gets three game scores from the user and displays the average.
//

#include <iostream>

using namespace std;

int main()
{
	// get scores from user
	cout << "Please enter 3 game scores. " << endl;

	int first, second, third;

	cin >> first >> second >> third;
	
	int number = 3;  // three scores
	int avg = (first + second + third) / number;  // The average

	cout << endl << "The average score is : " << avg << endl;;

	system("pause");  // quick a dirty to keep consol window open
}