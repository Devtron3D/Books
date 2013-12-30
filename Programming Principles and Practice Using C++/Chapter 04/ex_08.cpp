//
// Chpater 4
// Exercise 8
// 19-12-2013
//
/*
	Thre is an old story that th emperor wanted to thank the inventor of
	the game chess and asked the inventor to name his reward. The inventor
	asked for one grain of rise for first square, 2 for the second, 4
	for the thrid, and so on, doubling for each of the 64 squares. That may
	sound modest, but there wasn´t that much rise in the empire! Write a
	program to calculate how many squares are required to give the inventor
	at least 100 grains of rice, at least 1,000,000 grains, and at least
	1,000,000,000 grains. You´ll need a loop, of course, and probably an int
	to keep track of which square you are at, an int to keep track of the grains on all
	previous squares. We sugest that you write out the value of all your variables 
	for each iteration of the loop so that you can see what´s going on
*/

#include "../../../std_lib_facilities.h"


int main()
{
	int sum = 0;
	int single_grain = 1;
	int multiplyer = 2;
	int square = 64;
	int current = 1;

	for (int i=0; i <square; ++i)
	{
		
		cout << "Square: " << i+1 << ", Grains: " << current << endl;
		current *= multiplyer;
		sum += current;
	}
	cout << "Total: " << sum << endl;
	

	keep_window_open();
}