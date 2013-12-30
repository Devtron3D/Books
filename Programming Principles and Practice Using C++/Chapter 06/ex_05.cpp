
// Chapter 6
// Exercise 4
// 24.12.2013
//

#include "../../../std_lib_facilities.h"

class Name_Value{

public:
	Name_Value(string na, int sc)    // make a Name_Value from string and int
	:name(na), score(sc) { }

	string get_name() { return name; }
	int get_score() { return score; }

private:
	string name;
	int score;
};


//	print the vector, with object type to cout
void print_name_score(vector<Name_Value> na_sc)
{
	cout << endl;	// new line

	//	print vector till end of size
	for (unsigned int i = 0; i < na_sc.size(); ++i)
	{
		cout << "Name: " << na_sc[i].get_name() << " - Score: " << na_sc[i].get_score() << endl;
	}
}


int main()
{
	vector<Name_Value> name_score;   // Name - Score Vector 

	string exit = "NoName";		//	Command to terminate input.
	bool quit = false;			//	

	while (quit == false)
	{
		string name = "";	//	User name input.
		int value = 0;		//	User number input.

		cout << "Enter Name: ";
		cin >> name;

		// check if user wants to terminate input
		if (name == exit)
		{
			quit = true;  // command to stop input
		}
		else
		{
			cout << "Enter score: ";
			cin >> value;

			// put name and value into Name_value object
			Name_Value na_va(name, value);

			// first time input check
			if (name_score.size() == 0)
			{
				name_score.push_back(na_va);
			}
			else
			{
				//	Check if name is unique.
				for (unsigned int i = 0; i < name_score.size(); ++i)
				{
					//	none unique name found.
					if (name_score[i].get_name() == name)
					{
						cout << "Warrning repeating input." << endl;
						i = name_score.size();   // terminate input copy found.
					}
					//	unique name found, last element in vector checked.
					else if (i == name_score.size() -1)
					{
						name_score.push_back(na_va);
						i = name_score.size();	// terminate input, new unique name
					}
				}
			}	
		}
	}


	print_name_score(name_score);
	
	keep_window_open();

}


