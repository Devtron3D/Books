//
// Exercise 2
//

/*
	Assuming that socres is a vector that holds elements of type int,
	what´s wrong with the following code snippet (meant to increment
	each element)?
*/

{
	vector<int>::iterator iter;
	//increment each score
	for (iter = scores.negin(); iter != scores.end(); ++iter)
	{
		iter++;
	}

}


/*
	the problem with this code is that iter in incrementet twice

*/