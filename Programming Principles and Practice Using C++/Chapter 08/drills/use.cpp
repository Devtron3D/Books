
#include <iostream>

#include "my.h"



int foo;

int main()
{
	foo = 7;
	print_foo();

	print(99);



	//	Keep window open to see result
	{
		char cc;
		std::cin >> cc;
	}

}

/*
	//	Stuff to try
	int x = 7;
	int y = 9;
	swap_?(x,y);
	swap_?(7,9);
	const int cx = 7;
	const int cy = 9;
	swap_?(cx,cy);
	swap_?(7.7,9.9);
	double dx = 7.7;
	double dy = 9;
	swap_?(dx,dy);
	swap_?(dx,dy);


*/





void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}