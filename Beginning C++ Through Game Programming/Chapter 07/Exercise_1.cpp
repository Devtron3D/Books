//
//	Chapter 7
//	Exercise 1
//	2013-12-10
//
/*
	Write a program with a pointer to a pointer to a string object. Use
	The pointer to the pointer to call the size() member function of the string object.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text = "My Text String";

	string* ptr1 = &text;  // pointer 1 to text
	string* ptr2 = ptr1;   // pointer 2 to pointer 1

	cout << "Text String: " << text << endl;

	// display a text string with the size() member function
	cout << "prt2: " << ptr2->size() << endl; 

	system("pause");        //	Windows pause command to consol to keep window open

}
