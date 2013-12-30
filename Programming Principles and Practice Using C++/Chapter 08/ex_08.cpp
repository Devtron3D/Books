//
// Chapter 8
// Exercise 8
//

#include "../../../std_lib_facilities.h"


// this function will give the same results on runs
int per_seed = 1701;   // yes a bloody global for the randint seed;
int randint(const unsigned int max)
{
	per_seed = (289787 * per_seed * 26786872);    // hit the keyboard random number

	return per_seed % 22341;
}





int main()
{
	for (int i = 0; i < 50; ++i)
	{
		cout << randint(10) << " ,";
	}


	char cc;
	cin >> cc;
}



