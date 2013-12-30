//
// Chapter 8
// Exercise 5
//

#include "../../../std_lib_facilities.h" 

//----------------------------------------------
// Function declatations
void print(const vector<int>& vec);
void reverse(vector<int>& vec);
void reverse_two(vector<int>& vec);


int main()
{
	vector<int> test;
	test.push_back(0);
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);
	test.push_back(6);
	test.push_back(7);
	test.push_back(8);

	// show orginal vector
	cout << "Orignal" << endl;
	print(test);
	cout << endl;

	// first reverse test
	cout << "First." << endl;
	reverse(test);
	print(test);
	cout << endl;

	// second reverse test
	cout << "Second." << endl;
	reverse_two(test);
	print(test);
	cout << endl;


	// keep window open
	cout << endl;
	char cc;
	cin >> cc;
}


//-------------------------------------------------
// reverse elements in vec into rev
void reverse(vector<int>& vec)
{
	vector<int> swap;
	unsigned int zero = 0;	// used to show end of vector in for loop

	for (unsigned int i = vec.size(); zero < i; --i)
	{
		swap.push_back(vec[i-1]);
	}

	vec = swap; 
}

//-------------------------------------------------
// reverse orginal vector using the swap() function from the STD
void reverse_two(vector<int>& vec)
{
	// to store the size of vector / 2
	// otherwise the swap function with move all elements back (swap twice)
	unsigned int vec_half = (vec.size() / 2);  

	for (unsigned int i = 0; i < vec_half; ++i)
	{
		swap(vec[i], vec[vec.size() - 1 - i]);
	}
}


//-------------------------------------------------
// print to cout a vector
void print(const vector<int>& vec)
{
	for (unsigned int i = 0; i < vec.size(); ++i)
	{
		cout << "-> " << vec[i] << endl;
	}
}