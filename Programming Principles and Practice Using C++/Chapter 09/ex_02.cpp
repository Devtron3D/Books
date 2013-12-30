//
// Chapter 9
// Exercise 2
//

#include "../../../std_lib_facilities.h"

// function declarations
void my_sort(vector<string>& vec_name);



class Name_pairs{

public:
	void read_names();
	void read_ages();
	void print();
	void sort();

private:
	vector<string> name;
	vector<double> age;

};

//---------------------------------------------
void Name_pairs::read_names()
{
	// read names until user types the exit command.
	string input;   
	string exit = "exit";		// exit command to stop input
	string prompt = "-> ";		// prompt for new input
	cout << "Please enter names." << endl;
	cout << prompt;

	while (cin >> input && input != exit)
	{
		name.push_back(input);
		cout << prompt;
	}
}

//---------------------------------------------
void Name_pairs::read_ages()
{
	// check if there are any names.
	if (name.size() == 0)
	{
		cout << "Error: read_ages(), name.size() = 0;" << endl;
	}
	else
	{
		cout << "Enter Ages." << endl;
		// add ages to i number of names
		for (unsigned int i = 0; i < name.size(); ++i)
		{
			cout << "Name: " << name[i] << ", age is ?: ";
			double input;
			cin >> input;
			age.push_back(input);
		}
	}
}

//---------------------------------------------
void Name_pairs::print()
{
	// check if there is anything to print
	// both name and age must contain the same amount of values.
	if (name.size() == 0 || age.size() == 0 || name.size() != age.size())
	{
		cout << "Warrning: Name_pairs::print(), name or age, size is wrong.";
		return;
	}

	for (unsigned int i = 0; i < name.size(); ++i)
	{
		cout << "Name: " << name[i] << " - Age: " << age[i] << "." << endl;
	}
}

//---------------------------------------------
void Name_pairs::sort()
{
	// check if there is anything to sort
	// both name and age must contain the same amount of values.
	if (name.size() == 0 || age.size() == 0 || name.size() != age.size())
	{
		cout << "Warrning: Name_pairs::sort(), name or age, size is wrong.";
		return;
	}
	
	// using the sort style from the last chapter

	vector<string> old_names = name;    // names before sort
	vector<double> new_ages;				// new age after sort.

	my_sort(name);	// sort name vector in alphabetical order

	for (unsigned int i = 0; i < name.size(); ++i)
	{
		for (unsigned int j = 0; j < old_names.size(); ++j)
		{
			if (name[i] == old_names[j])
			{
				new_ages.push_back(age[j]);		// add age to correct name
				j = old_names.size();			// end loop, set invariant.
			}
		}
	}
	age = new_ages;   // assign the new age location
}

// sorting the vector (helper function)
void my_sort(vector<string>& vec_name)
{
	sort(vec_name.begin(), vec_name.end());
}




int main()
{
	Name_pairs name;

	name.read_names();
	name.read_ages();

	name.print();

	name.sort();

	name.print();

	// keep window open
	char cc;
	cin >> cc;
}