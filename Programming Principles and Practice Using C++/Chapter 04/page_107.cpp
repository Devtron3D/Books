//
//	Chapter 4
//	Try This page 107.
//	19-12-13
//
/*
	Rewrite your currency converter program from the previous Try this to use
	a switch-statment. add conversions from yuan and kroner. Which version
	of the program is easier to write, understand, and modify? why?
*/

#include "../../../std_lib_facilities.h"

int main()
{
	//	Messages to the user.
	cout << "Currency converter." << endl;
	cout << "Converts to Dollars from:" << endl;
	cout << "yen. 'y'" << endl;
	cout << "euros 'e'" << endl;
	cout << "pounds 'p'" << endl;
	cout << "yuan 'u'" << endl;
	cout << "kroner 'k'" << endl;
	cout << endl;

	//	Get the values to convert
	cout << "What do you want to convert from?: ";
	char currency;
	cin >> currency;

	cout << "Value to convert: ";
	double money;
	cin >> money;

	//	Conversion values to us dollars.
	double yen = 0.00962;		//	1 Japanese yen.
	double euros = 1.3677 ;		//	1 Euro.
	double pounds = 1.63800;	//	1 British pound.
	double yuan = 0.164677;		//	1 Chinese yuan
	double kroner = 0.183338;	//	1 Danish krone

	double sum;					//	The sum of the calculation, will be assigned in the if statments
	string type;				//	Conversion name, will be assigned in the if statments


	//	switch starment to convert the money.
	switch (currency)
	{
	case 'y':
		{
			sum = yen * money;
			type = "yen";
			break;
		}
	case 'e':
		{
			sum = euros * money;
			type = "euros";
			break;
		}
	case 'p':
		{
			sum = pounds * money;
			type = "pounds";
			break;
		}
	case 'u':
		{
			sum = yuan * money;
			type = "yuan";
			break;
		}
	case 'k':
		{
			sum = kroner * money;
			type = "kroner";
			break;
		}

	default:
		{
			cout << "Incorrect input." << endl;
			break;
		}
	}

	//	Tell user the results
	cout << money << " " << type << " = " << sum << " dollars." << endl;

	keep_window_open();

}