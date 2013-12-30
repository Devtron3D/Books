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
	X::print();		// print X�s var
	using namespace Y;
	var = 9;
	print();		// print Y�s var
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();	// print Z�s var
	}
	print();		// print Y�s var
	X::print();		// print X�s var

	// keep window open.
	char cc;
	std::cin >> cc;
}