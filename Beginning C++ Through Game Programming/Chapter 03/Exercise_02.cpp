/*
Chapter 3 - Exercise 2

What´s wrong with the following code ?

for (int i = 0; i <= phrase.size(); ++i)
{
cout << "Character at position " << i << " is: " << phrase[i] << endl;
}

// The for loop has an out of range error, should be < and not <=

*/