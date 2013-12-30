//
// Chapter 9
// Exercise 6
//

#include "../../../std_lib_facilities.h"

class Book {

public:
	// Constructor
	Book();																// Create the book

	// Get 
	void show_ISBN() const;							     				// ISBN
	string get_title() const { return title; }							// 
	string get_author() const { return author; }						//
	unsigned int get_copyright() const { return copyright_date; }		//	
	string print_status() const;										// 
	bool book_status() const { return checked_status; }
	void print() const;													// print all book information to cout
	string get_ISBN_index(unsigned int index) const { return ISBN[index]; }  

	// Set
	void set_ISBN();
	void check_out() { checked_status = true; }							// checking the book out
	void check_in() { checked_status = false; }							// checking the boook in
	void set_title(string book_title)  { title = book_title; }			// 
	void set_author(string book_author) { author = book_author; }		//
	void set_copyright(int copyright) { copyright_date = copyright; }	//	


private:

	vector<string> ISBN;
	string title;
	string author;
	unsigned int copyright_date;
	bool checked_status;		// (in = true) , (out = false)

};

bool operator==(const Book& a, const Book& b)
{
	// check ISBN
	int size = 4;	// size of ISBN  n-n-n-x

	for (unsigned int i = 0; i < 4; ++i)
	{
		if (a.get_ISBN_index(i) != b.get_ISBN_index(i))
			return false;
	}

	// check author
	if (a.get_author() != b.get_author())
		return false;

	// check title
	if (a.get_title() != b.get_title())
		return false;

	// check copyright date
	if (a.get_copyright() != b.get_copyright())
		return false;

	// check book stock status
	if (a.book_status() != b.book_status())
		return false;

	// all values are the same
	return true;
}

bool operator!=(const Book& a, const Book& b)
{
	return !(a == b);
}

ostream& operator<<(ostream& os, const Book& b)
{
	os << "Book details." << endl;
	// isbn output (4 is the size of the isbn n-n-n-x)
	os << "ISBN: ";
	unsigned int four = 4;

	for (unsigned int i = 0; i < four; ++i)
	{
		// just to display some nice output (isbn is 4 elements)
		if (i == 3)
		{
			os << b.get_ISBN_index(i);
		}
		else
		{
			os << b.get_ISBN_index(i);
			os << "-";
		}
	}

	os << endl;
	os << "Title: " << b.get_title() << endl;
	os << "Author: " << b.get_author() << endl;
	os << "Copyright Date: " << b.get_copyright() << endl;
	os << "Status: ";
	os << b.print_status();
	os << endl;
	return os;
}

//----------------------------------------------------------------------------
//
Book::Book()
{
	// Greeting information
	cout << "Enter book information." << endl;

	set_ISBN();

	cout << "Title: ";
	cin >> title;

	cout << "Author: ";
	cin >> author;

	cout << "Copyright date:";
	cin >> copyright_date;

	checked_status = true;  // set book to in. 
	cout << "----- Book created-------" << endl << endl;

}

//-----------------------------------------------------------------------
// get the ISBN
//
void Book::set_ISBN()
{
	unsigned int size = 4;		// ISBN length,  n-n-n-x 
	bool check = false;			// used to check if isbn is valid


	while (check == false)
	{
		vector<string> temp_ISBN;	// temp ISBN storage
		cout << "ISBN (n1-n2-n3-x4)" << endl;

		for (unsigned int i = 0; i < size; ++i)
		{

			// display n, until final value then x
			if (i < (size - 1))
			{
				cout << "n" << i + 1 << ": ";

				string input;
				cin >> input;
				// check if input is a number
				if (cin)
				{
					temp_ISBN.push_back(input);
				}
				else
				{
					// if not a number, reset vector and try again
					cout << "Bad input: try again." << endl;
					cout << "ISBN (n1-n2-n3-x4)" << endl;
					i = size;  // end loop and try again
					cin.clear();
					cin.ignore();
				}

			}
			else
			{
				// x can be a single char or int
				bool single = false;

				while (single == false)
				{
					cout << "x" << i + 1 << ": ";
					string input;
					cin >> input;

					// check if string has a max 1 value in it
					if (input.size() == 1)
					{
						temp_ISBN.push_back(input);
						single = true;  // correct input
						check = true;	// all values correct
					}
					else
					{
						cout << "Not correct x, must be a single int or char." << endl;
					}
				}
			}
		}

		// check if correct input
		if (check == true)
		{
			ISBN = temp_ISBN;
		}
	}
}

//--------------------------------------------------
//
string Book::print_status() const
{
	if (checked_status == true)
	{
		return  "Book in stock.";
	}
	else
	{
		return  "Book out.";
	}
}


//----------------------------------------------------------
//
void Book::show_ISBN() const
{
	cout << "ISBN: ";

	for (unsigned int i = 0; i < ISBN.size(); ++i)
	{
		// just to display some nice output (isbn is 4 elements)
		if (i == 3)
		{
			 cout << ISBN[i];
		}
		else
		{
			cout << ISBN[i] + "-";
		}
	}

}

//-----------------------------------------------
//
void Book::print() const
{
	cout << "Book details." << endl;
	show_ISBN();
	cout << endl;
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Copyright Date: " << copyright_date << endl;
	cout << "Status: ";
	cout << print_status();
	cout << endl;
}

int main()
{
	Book test;
	cout << endl << endl;

	test.print();

	Book t2 = test;

	if (test == t2)
	{
		cout << "test == t2" << endl;
	}

	if (test != t2)
	{
		cout << "test != t2" << endl;
	}

	cout << endl << endl;
	cout << "t2" << endl << t2;


	char cc;
	cin >> cc;

}