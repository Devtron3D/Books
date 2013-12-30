//
// Chapter 8
// Exercise 4
//

// Notes
// The largest int fib can hold is 1836311903
// can be diffrent on another system, and on this system
// a 32bit unsigned int, can store a number above 4billion




#include <iostream>
#include <vector>
#include <string>

using std::cin;		using std::cout;	using std::endl;
using std::vector;	using std::string;

//----------------------------------------------
// Function declatations
void print(const vector<int>& vec, const string& label);
void fibonacci(int x, int y, vector<int>& vec, int num);


int main()
{
	vector<int> fib;

	cout << "Enter start numbers x and y" << endl;
	int x, y;
	cin >> x >> y;

	cout << "Enter amount of numbers n: ";
	int num;
	cin >> num;

	// get fib results
	fibonacci(x, y, fib, num);

	// just a new line
	cout << endl;

	// print numbers;
	string marker = ": ";

	print(fib, marker);

	// keep window open
	cout << endl;
	char cc;
	cin >> cc;
}

// 
void fibonacci(int x, int y, vector<int>& vec, int num)
{
	// add x and y to the vector
	vec.push_back(x);
	vec.push_back(y);

	// start with i 2 as vector element [0] and [1] are used by x and y
	for (unsigned int i = 2; i < num; ++i)
	{
		int sum = x + y;
		vec.push_back(sum);
		x = y;		// set x to the last large number
		y = sum;	// set y to the new large number
	}
}





//-------------------------------------------------
// print to cout a label followed by vecter[i]
void print(const vector<int>& vec, const string& label)
{
	for (unsigned int i = 0; i < vec.size(); ++i)
	{
		cout << label << vec[i] << endl;
	}
}