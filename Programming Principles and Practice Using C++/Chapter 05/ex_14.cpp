//
// Chapter 5
// Exercise 14
// 22-12-2013
//


#include "../../../std_lib_facilities.h"


//Function declarations.
bool week_check(string day); 


int main()
{
	
	vector<string> week;		//	days of the week in use
	vector<int> week_values;	//	values for days of week in use (week) vector

	int rejected = 0;   //	number of rejected values

	string exit = "exit";	// used to exit program
	string input_text = "";		// set empty string
	int input_value = 0;			// set 0 for empty value

	while (input_text != exit)
	{
		// get day name
		cout << "Enter day of the week: ";
		cin >> input_text;

		if (input_text != exit)
		{
			// is the day correct ( true = correct ) 
			bool day = week_check(input_text);

			if (day == true)
			{
				// get the value for the day
				cout << "Enter Value for day: ";
				cin >> input_value;



				// add value if vector empty
				int first = 0;   /// first input
				if (week.size() == 0)
				{
					week.push_back(input_text);
					week_values.push_back(input_value);
				}
				else
				{
					// check if day is already in week
					for (unsigned int i=0; i < week.size(); ++i)
					{
						if (week[i] == input_text)
						{
							// add input_value to the week_values
							week[i] += input_value;
						}
						// if not in week, add new elements
						else if (i == week.size() -1)
						{
							week.push_back(input_text);
							week_values.push_back(input_value);
							i = week.size(); // reset i to end of vector
						}
					}
				}
			
			}
			// if false name of week (rejected)
			else if (day == false)
			{
				++rejected; 
			}
		
		}
	
	}

	// print week to screen plus sum of the days
	for (unsigned int i=0; i < week.size(); ++i)
	{
		cout << week[i] << " - " << week_values[i] << endl;
	}

	cout << "Number of rejected values: " << rejected << endl;

	keep_window_open();

}

//----------------------------------------------------------------
//	Check if day of the week string is correct.
//
bool week_check(string day) 
{
	vector<string> week;

	//----------------------------
	//	Fill vector with acceptet days of the week names.
	//
	week.push_back("monday");
	week.push_back("Mon");
	week.push_back("tuesday");
	week.push_back("Tue");
	week.push_back("wednesday");
	week.push_back("wed");
	week.push_back("thursday");
	week.push_back("Thu");
	week.push_back("friday");
	week.push_back("Fri");
	week.push_back("saturday");
	week.push_back("Sat");
	week.push_back("sunday");
	week.push_back("Sun");
	//
	//	End input
	//------------------------------
 
	// check string day, against accepted days of the week names.
	for (unsigned int i=0; i < week.size(); ++i)
	{
		if (week[i] == day)
		{
			// found correct day
			return true;
		}
	}

	// no correct day found in week
	return false;
}
//
//	End !!-- bool week_check(string day)  --!! function.
//-----------------------------------------------------------