//
//	Chapter 6
//	Exercise 3
//	2013-12-08
//
/*
What´s wrong with the following function ?
*/

int& plusThree(int number)
{
	int threeMore = number + 3;
	return threeMore;
}


// this function returns a reference not an int value