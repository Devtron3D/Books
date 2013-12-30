//
// Chapter 9
// Exercise 5
//

#include "../../../std_lib_facilities.h"

class Book {

public:
	// Constructor
	Book();																// Create the book

	// Get 
	void show_ISBN() const;													// prints to cout the ISBN
	string get_title() const { return title; }							// 
	string get_author() const { return author; }						//
	unsigned int get_copyright() const { return copyright_date; }		//	
	void check_status() const;											// prints the status to cout
	void print() const;														// print all book information to cout

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
				cout << "n" << i+1 << ": ";

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
					cout << "x" << i+1 << ": ";
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
void Book::check_status() const
{
	if (checked_status == true)
	{
		cout << "Book in stock." << endl;
	}
	else
	{
		cout << "Book out." << endl;
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
			cout << ISBN[i] << "-";
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
	check_status();
	cout << endl;
}

int main()
{
	Book test;
	cout << endl << endl;

	test.print();

	char cc;
	cin >> cc;

}