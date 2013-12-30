//
//	Chapter 4
//	Drills for the chapter
//	19-12-2013
//
/*
	I have but all the drills into this one file
*/


/////////////////////////////////////////////////////////////////////
// Drill 1.
/*
	Write a program that consists of a while-loop that (each time around the 
	loop) reads in two ints and then prints them. Exit the program when 
	terminating '|' is entered.
*/

/*
#include "../../../std_lib_facilities.h"

int main()
{
	while (cin)
	{
		cout << "Please enter two ints." << endl;

		int one;
		int two;

		cin >> one >> two;

		cout << "You typed: " << one << " and " << two << "." << endl;
	}


}
*/


/////////////////////////////////////////////////////////////////////
// Drill 2 and 3
/*
	Change the program to write out "The smaller value is: " followed by the
	smaller of the numbers and "the larger value is: " followed by the larger value.
*/

/*
#include "../../../std_lib_facilities.h"

int main()
{
	while (cin)
	{
		cout << "Please enter two ints." << endl;

		int one;
		int two;

		cin >> one >> two;

		if (one < two)
		{
			cout << "The smaller value is: " << one << endl;
			cout << "The larger value is: " << two << endl;
		}
		else if (one > two)
		{
			cout << "The smaller value is: " << two << endl;
			cout << "The larger value is: " << one << endl;
		}
		else if (one == two)
		{
			cout << one << " and " << two << " are the same." << endl;
		}
	}
}
*/




/////////////////////////////////////////////////////////////////////
// Drill 4.
/*
	Change the program so that it uses doubles instead of ints.
*/
/*
#include "../../../std_lib_facilities.h"

int main()
{
	while (cin)
	{
		cout << "Please enter two doubles." << endl;

		double one;
		double two;

		cin >> one >> two;

		if (one < two)
		{
			cout << "The smaller value is: " << one << endl;
			cout << "The larger value is: " << two << endl;
		}
		else if (one > two)
		{
			cout << "The smaller value is: " << two << endl;
			cout << "The larger value is: " << one << endl;
		}
		else if (one == two)
		{
			cout << one << " and " << two << " are the same." << endl;
		}
	}
}
*/


/////////////////////////////////////////////////////////////////////
// Drill 5.
/*
	Change the program so that it writes out "the numbers are almost equal"
	after writing out which is the larger and smaller if the two numbers 
	differ by less than 1.0/100
*/
/*
#include "../../../std_lib_facilities.h"

int main()
{
	while (cin)
	{
		cout << "Please enter two doubles." << endl;

		double one;
		double two;

		// for the almost equal check.
		double small;
		double big;

		cin >> one >> two;

		if (one < two)
		{
			cout << "The smaller value is: " << one << endl;
			cout << "The larger value is: " << two << endl;
			
			small = one;
			big = two;

		} else if (one > two)
		{
			cout << "The smaller value is: " << two << endl;
			cout << "The larger value is: " << one << endl;

			small = two;
			big = one;
		}


		double almost = 1.0/100.0;
		
		if (one == two)	// check if they are equal
		{
			cout << one << " and " << two << " are the same." << endl;
		}
		else if (big-small < almost)	//	Check if they are almost equal.
		{
			cout << "The numbers are almost queal." << endl;
		}
	}
}
*/


/////////////////////////////////////////////////////////////////////
// Drill 6.
/*
	Now change the body of the loop so that it reads just one double each
	time around. Define two variables to keep trach of which is the smallest 
	and which is the largest value you have seen so far. Each time through
	the loop write out the value enterd, if it´s the smallest so fare, write
	"The smallest so fare " after the number. If it is the largest so far,
	write "the largest so far after the number.
*/
/*
#include "../../../std_lib_facilities.h"

int main()
{
	double input;
	//	First time numbers
	double smallest = 0;
	double largest = 0;

	while (cin)
	{

		cout << "Please enter a number: ";
		
		cin >> input;

		//	If first time entering a number
		//	else check for smaller number
		//	else check for larger number
		if (smallest == 0 && largest == 0)
		{
			smallest = input;
			largest = input;
		} 
		else if (input < smallest)
		{
			smallest = input;
		}
		else if (input > largest)
		{
			largest = input;
		}

		cout << "The smallest so far: " << smallest << endl;
		cout << "The largest so fare: " << largest << endl;
	
	}
}
*/



/////////////////////////////////////////////////////////////////////
// Drill 7.
/*
	Add a unit to each double entered; that is, enter values such as 10cm,
	2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume conversion
	factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit indicator
	into a string. You may consider 12 m (with the space between the number
	and the unit) equivalent to 12m (without a space).
*/

/*
#include "../../../std_lib_facilities.h"

int main()
{
	// the input 
	double number;
	string unit;

	//	First time numbers and strings
	double smallest = 0;	

	double largest = 0;
	double con_small = 0;	//	smallest number that has been converted to meters
	double con_large = 0;	//	largest number that has been converted to meter
	string smallest_unit = "";
	string largest_unit = "";

	while (cin)
	{

		cout << endl;
		cout << "Please enter a number. " << endl;
		cout << "And a unit, cm, m, in, ft" << endl;
		cin >> number >> unit;

		//
		//	this is used to set a default unit (meters)
		//
		double temp_number = 0;

		//	conversion to 1 meter
		double meter = 1;
		double cm = 100;
		double in = 39.3700787402;
		double ft = 3.280839895;


		if (unit == "cm")
		{
			temp_number = number / cm;	    
		}
		else if (unit == "m")
		{
			temp_number = number;	  
		}
		else if (unit == "in")
		{
			temp_number = number / in;	
		}
		else if (unit == "ft")
		{
			temp_number = number / ft;
		}


		//	If first time entering a number
		//	else check for smaller number
		//	else check for larger number
		if (smallest == 0 && largest == 0)
		{
			smallest = number;
			smallest_unit = unit;
			con_small = temp_number;

			largest = number;
			largest_unit = unit;
			con_large = temp_number;
		} 
		else if (temp_number < con_small)
		{
			smallest = number;
			smallest_unit = unit;
			con_small = temp_number;
		}
		else if (temp_number > con_large)
		{
			largest = number;
			largest_unit = unit;
			con_large = temp_number;
		}

		cout << "The smallest so far: " << smallest << smallest_unit << endl;
		cout << "The largest so fare: " << largest << largest_unit << endl;

	}
}
*/


/////////////////////////////////////////////////////////////////////
// Drill 8.
/*
	Reject values without units or "illegal" representations of units, such
	as y, years, meter, km and gallons.
*/

/*
#include "../../../std_lib_facilities.h"

int main()
{
	// the input 
	double number;
	string unit;

	//	First time numbers and strings
	double smallest = 0;	

	double largest = 0;
	double con_small = 0;	//	smallest number that has been converted to meters
	double con_large = 0;	//	largest number that has been converted to meter
	string smallest_unit = "";
	string largest_unit = "";

	while (cin)
	{

		cout << endl;
		cout << "Please enter a number. " << endl;
		cout << "And a unit, cm, m, in, ft" << endl;
		cin >> number >> unit;

		//
		//	this is used to set a default unit (meters)
		//
		double temp_number = 0;

		//	conversion to 1 meter
		double meter = 1;
		double cm = 100;
		double in = 39.3700787402;
		double ft = 3.280839895;

		char valid = 'v';	//	set to valid as default.

		if (unit == "cm")
		{
			temp_number = number / cm;	    
		}
		else if (unit == "m")
		{
			temp_number = number;	  
		}
		else if (unit == "in")
		{
			temp_number = number / in;	
		}
		else if (unit == "ft")
		{
			temp_number = number / ft;
		}
		else 
		{
			// set to bad unit
			cout << "Warrning bad unit: " << unit << " is an invalid unit." << endl;
			valid = 'b';  //   set bad input
		}
		

		// check if input was valid
		if ( valid == 'v' )
		{

			//	If first time entering a number
			//	else check for smaller number
			//	else check for larger number
			if (smallest == 0 && largest == 0)
			{
				smallest = number;
				smallest_unit = unit;
				con_small = temp_number;

				largest = number;
				largest_unit = unit;
				con_large = temp_number;
			} 
			else if (temp_number < con_small)
			{
				smallest = number;
				smallest_unit = unit;
				con_small = temp_number;
			}
			else if (temp_number > con_large)
			{
				largest = number;
				largest_unit = unit;
				con_large = temp_number;
			}

			cout << "The smallest so far: " << smallest << smallest_unit << endl;
			cout << "The largest so fare: " << largest << largest_unit << endl;
		}
	}
}

*/


	
/////////////////////////////////////////////////////////////////////
// Drill 9.
/*
	Keep track of the sum of values entered ( as well as the smallest and the
	largest) and the numbers of values entered. When the loop ends, print the
	smallest, the largest, the number of values, and the sum of the values. 
	Note that to keep the sum, you have to desice on a unit to use for the sum;
	use meters.
*/
/*
#include "../../../std_lib_facilities.h"

int main()
{
	// the input 
	double number;
	string unit;

	//	First time numbers and strings
	double smallest = 0;	
	double largest = 0;
	double con_small = 0;	//	smallest number that has been converted to meters
	double con_large = 0;	//	largest number that has been converted to meter
	string smallest_unit = "";
	string largest_unit = "";

	double sum = 0;				//	sum in meters.
	int numbers_entered = 0;		//	number of values entert in the program.


	while (cin)
	{

		cout << endl;
		cout << "Please enter a number. " << endl;
		cout << "And a unit, cm, m, in, ft" << endl;
		cin >> number >> unit;

		//
		//	this is used to set a default unit (meters)
		//
		double temp_number = 0;

		//	conversion to 1 meter
		double meter = 1;
		double cm = 100;
		double in = 39.3700787402;
		double ft = 3.280839895;

		char valid = 'v';	//	set to valid as default.

		if (unit == "cm")
		{
			temp_number = number / cm;	    
		}
		else if (unit == "m")
		{
			temp_number = number;	  
		}
		else if (unit == "in")
		{
			temp_number = number / in;	
		}
		else if (unit == "ft")
		{
			temp_number = number / ft;
		}
		else 
		{
			// set to bad unit
			cout << "Warrning bad unit: " << unit << " is an invalid unit." << endl;
			valid = 'b';  //   set bad input
		}
		

		// check if input was valid
		if ( valid == 'v' )
		{

			//	If first time entering a number
			//	else check for smaller number
			//	else check for larger number
			if (smallest == 0 && largest == 0)
			{
				smallest = number;
				smallest_unit = unit;
				con_small = temp_number;

				largest = number;
				largest_unit = unit;
				con_large = temp_number;
			} 
			else if (temp_number < con_small)
			{
				smallest = number;
				smallest_unit = unit;
				con_small = temp_number;
			}
			else if (temp_number > con_large)
			{
				largest = number;
				largest_unit = unit;
				con_large = temp_number;
			}

			cout << "The smallest so far: " << smallest << smallest_unit << endl;
			cout << "The largest so fare: " << largest << largest_unit << endl;

			sum += temp_number;	//	add the temp_number(number in meters) to sum.
			++numbers_entered;	//	new number was enterd;
		}
	}

	cout << endl;
	cout << "Values are in meters: "<< endl;
	cout << "Smallest: " << con_small << endl;
	cout << "Largest: " << con_large << endl;
	cout << "Sum: " << sum << endl;
	cout << "Numbers entered: " << numbers_entered << endl;

	keep_window_open();
	//	note as cin got a bad input, keep_window_open(), will not work.
}
*/




	/////////////////////////////////////////////////////////////////////
// Drill 10.
/*
	Keep all the values entered (converted into meters) in a vector. At the
	end, write out those values.
*/
/*
#include "../../../std_lib_facilities.h"

int main()
{
	// the input 
	double number;
	string unit;

	//	First time numbers and strings
	double smallest = 0;	
	double largest = 0;
	double con_small = 0;			//	smallest number that has been converted to meters
	double con_large = 0;			//	largest number that has been converted to meter
	string smallest_unit = "";
	string largest_unit = "";

	double sum = 0;					//	sum in meters.
	int numbers_entered = 0;		//	number of values entert in the program.
	vector<double> num_in_meters;	//	stores all the numbers entered in meters


	while (cin)
	{

		cout << endl;
		cout << "Please enter a number. " << endl;
		cout << "And a unit, cm, m, in, ft" << endl;
		cin >> number >> unit;

		//
		//	this is used to set a default unit (meters)
		//
		double temp_number = 0;

		//	conversion to 1 meter
		double meter = 1;
		double cm = 100;
		double in = 39.3700787402;
		double ft = 3.280839895;

		char valid = 'v';	//	set to valid as default.

		if (unit == "cm")
		{
			temp_number = number / cm;	    
		}
		else if (unit == "m")
		{
			temp_number = number;	  
		}
		else if (unit == "in")
		{
			temp_number = number / in;	
		}
		else if (unit == "ft")
		{
			temp_number = number / ft;
		}
		else 
		{
			// set to bad unit
			cout << "Warrning bad unit: " << unit << " is an invalid unit." << endl;
			valid = 'b';  //   set bad input
		}
		

		// check if input was valid
		if ( valid == 'v' )
		{

			//	If first time entering a number
			//	else check for smaller number
			//	else check for larger number
			if (smallest == 0 && largest == 0)
			{
				smallest = number;
				smallest_unit = unit;
				con_small = temp_number;

				largest = number;
				largest_unit = unit;
				con_large = temp_number;
			} 
			else if (temp_number < con_small)
			{
				smallest = number;
				smallest_unit = unit;
				con_small = temp_number;
			}
			else if (temp_number > con_large)
			{
				largest = number;
				largest_unit = unit;
				con_large = temp_number;
			}

			cout << "The smallest so far: " << smallest << smallest_unit << endl;
			cout << "The largest so fare: " << largest << largest_unit << endl;

			sum += temp_number;						//	add the temp_number(number in meters) to sum.
			++numbers_entered;						//	new number was enterd;
			num_in_meters.push_back(temp_number);	//	Store the number in meters.
		}
	}

	cout << endl;
	cout << "Values are in meters: "<< endl;
	cout << "Smallest: " << con_small << endl;
	cout << "Largest: " << con_large << endl;
	cout << "Sum: " << sum << endl;
	cout << "Numbers entered: " << numbers_entered << endl;
	cout << endl;

	//	Display vector
	cout << "The vector contains the following values entered." << endl;

	for (int i = 0; i < num_in_meters.size(); ++i)
	{
		cout << num_in_meters[i] << endl;
	}

	keep_window_open();
	//	note as cin got a bad input, keep_window_open(), will not work.
}
*/


		/////////////////////////////////////////////////////////////////////
// Drill 11.
/*
	Before writing out the values from the vector, sort them (that´ll make
	them come out in increasing order).
*/

#include "../../../std_lib_facilities.h"

int main()
{
	// the input 
	double number;
	string unit;

	//	First time numbers and strings
	double smallest = 0;	
	double largest = 0;
	double con_small = 0;			//	smallest number that has been converted to meters
	double con_large = 0;			//	largest number that has been converted to meter
	string smallest_unit = "";
	string largest_unit = "";

	double sum = 0;					//	sum in meters.
	int numbers_entered = 0;		//	number of values entert in the program.
	vector<double> num_in_meters;	//	stores all the numbers entered in meters


	while (cin)
	{

		cout << endl;
		cout << "Please enter a number. " << endl;
		cout << "And a unit, cm, m, in, ft" << endl;
		cin >> number >> unit;

		//
		//	this is used to set a default unit (meters)
		//
		double temp_number = 0;

		//	conversion to 1 meter
		double meter = 1;
		double cm = 100;
		double in = 39.3700787402;
		double ft = 3.280839895;

		char valid = 'v';	//	set to valid as default.

		if (unit == "cm")
		{
			temp_number = number / cm;	    
		}
		else if (unit == "m")
		{
			temp_number = number;	  
		}
		else if (unit == "in")
		{
			temp_number = number / in;	
		}
		else if (unit == "ft")
		{
			temp_number = number / ft;
		}
		else 
		{
			// set to bad unit
			cout << "Warrning bad unit: " << unit << " is an invalid unit." << endl;
			valid = 'b';  //   set bad input
		}
		

		// check if input was valid
		if ( valid == 'v' )
		{

			//	If first time entering a number
			//	else check for smaller number
			//	else check for larger number
			if (smallest == 0 && largest == 0)
			{
				smallest = number;
				smallest_unit = unit;
				con_small = temp_number;

				largest = number;
				largest_unit = unit;
				con_large = temp_number;
			} 
			else if (temp_number < con_small)
			{
				smallest = number;
				smallest_unit = unit;
				con_small = temp_number;
			}
			else if (temp_number > con_large)
			{
				largest = number;
				largest_unit = unit;
				con_large = temp_number;
			}

			cout << "The smallest so far: " << smallest << smallest_unit << endl;
			cout << "The largest so fare: " << largest << largest_unit << endl;

			sum += temp_number;						//	add the temp_number(number in meters) to sum.
			++numbers_entered;						//	new number was enterd;
			num_in_meters.push_back(temp_number);	//	Store the number in meters.
		}
	}

	cout << endl;
	cout << "Values are in meters: "<< endl;
	cout << "Smallest: " << con_small << endl;
	cout << "Largest: " << con_large << endl;
	cout << "Sum: " << sum << endl;
	cout << "Numbers entered: " << numbers_entered << endl;
	cout << endl;


	//	Sort vector first
	sort(num_in_meters.begin(), num_in_meters.end());

	//	Display vector
	cout << "The vector contains the following values entered." << endl;

	for (int i = 0; i < num_in_meters.size(); ++i)
	{
		cout << num_in_meters[i] << endl;
	}

	keep_window_open();
	//	note as cin got a bad input, keep_window_open(), will not work.
}