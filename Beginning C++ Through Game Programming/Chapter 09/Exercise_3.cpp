//
//	Chapter 9
//	Exercise 3
//	2013-12-10
//
/*
	What´s wrong with the following code?
*/

int main()
{
	int* pScore = new int;
	*pScore = 500;
	pScore = new int(1000);
	delete pScore;
	pScore = 0;

	return 0;
}

/*
	After pScore is created and given the value 500 to the int on the heap
	It is assigned to a new int on the heap, the old location of pScore was not deleted
	Or reassigned to another pointer, there is now a memory leak, in this function,
	unknown location of int(500)


*/