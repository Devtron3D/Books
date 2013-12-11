//
//	Chapter 7
//	Exercise 3
//	2013-12-10
//
/*
	Will the three memory addresses displayed by the following program all
	be the same?  Explain what´s going on in the code.
*/

#include <iostream>

using namespace std;

int main()
{
	int a = 10;		//	Create a variable with adress eks. 12345
	int& b = a;		//	Create a reference to variable a, be gets the address of variable a
	int* c = &b;	//	Create a pointer that points to the address of variable a, that it got from the reference from b.

	cout << &a << endl;
	cout << &b << endl;
	cout << &(*c) << endl;


	system("pause");   //  Windows consol command. To keep window open.
}