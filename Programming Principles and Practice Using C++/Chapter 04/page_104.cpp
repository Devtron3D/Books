//
//	Chapter 4
//	Try This page 104.
//	19-12-13
//
/*
	Use the example above as a model for a program that converts yen, euros, 
	and pounds into dollars. If you like realism, you can find conversion rates on
	the web.
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

	double sum;					//	The sum of the calculation, will be assigned in the if statments
	string type;				//	Conversion name, will be assigned in the if statments

	if (currency == 'y')
	{
		sum = yen * money;
		type = "yen";
	}
	else if (currency = 'e')
	{
		sum = euros * money;
		type = "euros";
	}
	else if (currency = 'p')
	{
		sum = pounds * money;
		type = "pounds";
	}

	//	Tell user the results
	cout << money << " " << type << " = " << sum << " dollars." << endl;

	keep_window_open();

}