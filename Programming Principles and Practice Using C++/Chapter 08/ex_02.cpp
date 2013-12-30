//
// Chapter 8
// Exercise 2
//

#include <iostream>
#include <vector>
#include <string>

using std::cin;		using std::cout;	using std::endl;
using std::vector;	using std::string;

//----------------------------------------------
// Function declatations
void print(const vector<int> vec, string label);


int main()
{


}

//-------------------------------------------------
// print to cout a label followed by vecter[i]
void print(const vector<int> vec, string label)
{
	for (unsigned int i = 0; i < vec.size(); ++i)
	{
		cout << label << vec[i] << endl;
	}
}