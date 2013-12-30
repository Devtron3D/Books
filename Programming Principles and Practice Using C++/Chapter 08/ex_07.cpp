//
// Chapter 8
// Exercise 7
//

#include "../../../std_lib_facilities.h"

//------------------------------------------------------------------------
// function declarations
void get_names(vector<string>& name);
void get_ages(const vector<string>& name, vector<int>& age);
int get_name_index(const string name, const vector<string> orginal);


int main()
{
	vector<string> name;
	vector<int> age;

	// get names and ages.
	get_names(name);
	get_ages(name, age);



	// keep backup of name and age vector
	vector<string> name_orginal = name;
	vector<int> age_orignal = age;

	// sort the names
	sort(name.begin(), name.end());

	// get ages to match again
	age.clear(); // clear the age vector

	for (unsigned int i = 0; i < name.size(); ++i)
	{
		age.push_back(age_orignal[get_name_index(name[i], name_orginal)]);
	}

	// print the names and ages
	cout << endl;

	for (unsigned int i = 0; i < name.size(); ++i)
	{
		cout << "Name: " << name[i] << ", Age: " << age[i] << endl;
	}

	//  keep window open.
	char cc;
	cin >> cc;

}

//-----------------------------------------------------------------
// get names and fill them in name vector
void get_names(vector<string>& name)
{
	string stop = "stop";	// stop input command
	string input;
	
	// first time input
	cout << "Please enter names. " << endl; 
	cout << "type stop, to end input." << endl;
	cout << "Name: ";

	while (cin >> input && input != stop)
	{
		cout << "Name: ";
		name.push_back(input);
	}

}

//-----------------------------------------------------------------
// get ages and fill them in age vector, untill all name vectors are equal
void get_ages(const vector<string>& name, vector<int>& age)
{
	cout << "Please input all ages." << endl;
	cout << "There are " << name.size() << " names." << endl;

	for (unsigned int i = 0; i < name.size(); ++i)
	{
		cout << "Name: " << name[i] << ", age: ";
		int x;
		cin >> x;
		age.push_back(x);
	}

	// check if all names has an age.
	if (name.size() != age.size())
	{
		cout << "Warrning: get_ages(), name and ages are not the same." << endl;
	}
}


//-------------------------------------------------------------------------
// locate the index number for the new and old name location
int get_name_index(const string name, const vector<string> orginal)
{
	for (unsigned int i = 0; i < orginal.size(); ++i)
	{
		if (name == orginal[i])
		{
			return i;
		}
	}

	cout << "´Warrning: get_name_index, name not found." << endl;

	return 0;  // return 0 if no name.
}