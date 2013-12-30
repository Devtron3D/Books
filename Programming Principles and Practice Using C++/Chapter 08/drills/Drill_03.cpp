//
// Chapter 8
// Drill 3
//


#include <iostream>

namespace X {
	int var = 0;

	void print()
	{
		std::cout << var << std::endl;
	}
}

namespace Y {
	int var = 1;

	void print()
	{
		std::cout << var << std::endl;
	}
}

namespace Z {
	int var = 2;

	void print()
	{
		std::cout << var << std::endl;
	}
}


int main()
{
	X::var = 7;
	X::print();		// print X큦 var
	using namespace Y;
	var = 9;
	print();		// print Y큦 var
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();	// print Z큦 var
	}
	print();		// print Y큦 var
	X::print();		// print X큦 var

	// keep window open.
	char cc;
	std::cin >> cc;
}