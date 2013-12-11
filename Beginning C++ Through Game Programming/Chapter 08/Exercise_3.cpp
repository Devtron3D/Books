//
//	Chapter 8
//	Exercise 3
//	2013-12-10
//
/*
	What design Problem does the following program have?
*/

#include <iostream>

using namespace std;

class Critter
{
public:
	int GerHunger() const {return m_hunger;}

private:
	int m_hunger;
};

int main()
{
	Critter crit;
	cout << crit.GerHunger() << endl;
	return 0;
}

// m_hunger has no data in it, it contains what ever garbage that is left in that memory location
// this can cause bad errors.