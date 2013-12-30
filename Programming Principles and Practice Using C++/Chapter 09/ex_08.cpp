//
// Chapter 9
// Exercise 8
//

#include "../../../std_lib_facilities.h"


class Patron {

public:
	Patron(string user, int c_number, double fees = 0);
	
	// Get
	string get_username() const { return username; }
	int get_card_number() const { return card_number; }
	double get_fees_owed() const { return fees_owed; }

	// Set
	void set_fees_owed(double owed) { fees_owed = owed; }


private:

	string username;
	int card_number;
	double fees_owed;     // positive number == owe fee
};

//------------------------------------------------------------------
Patron::Patron(string user, int c_number, double fees)
		: username(user), card_number(c_number), fees_owed(fees)
{

}

//-------------------------------------------------------------------
bool owes_fee(Patron p)
{
	// check if user owes a fee
	if (p.get_fees_owed() != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}




//---------------------------------------------------------------------

int main()
{
	string name = "wolf";
	int ccn = 123456;
	double fee = 50;



	Patron test(name, ccn, fee);

	cout << endl;
	cout << test.get_username() << endl;
	cout << test.get_card_number() << endl;
	cout << test.get_fees_owed() << endl;
	cout << owes_fee(test);


	char cc;
	cin >> cc;




}