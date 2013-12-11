//
//	Chapter 6
//	Exercise 2
//	2013-12-08
//
/*
	What´s wrong with the following program ?
*/

int main()
{
	int score;
	score = 1000;
	float& rScore = score;
	return 0;
}

//	Trying to assign a float reference to a int 