//
//	Chapter 3
//	Drills
//	2013-12-15
//

#include "../../../std_lib_facilities.h"



//	--------------------------------
//	----------Drill 1---------------
//	--------------------------------
/*
int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;	//	first_name is a variable of type string
	cin >> first_name;	//	read characters into first_name
	cout << "Dear " << first_name << ", \n";


	keep_window_open();
}
*/


//	--------------------------------
//	----------Drill 2---------------
//	--------------------------------
/*
int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;	//	first_name is a variable of type string
	cin >> first_name;	//	read characters into first_name
	cout << "Dear " << first_name << ", \n";
	cout << "How are you and how have you been" << endl;
	cout << "So.... computers have taken over the world." << endl;


	keep_window_open();
}
*/


//	--------------------------------
//	----------Drill 3---------------
//	--------------------------------
/*
int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;	//	first_name is a variable of type string
	cin >> first_name;	//	read characters into first_name
	
	cout << "Name of friend: ";
	string name_friend; 
	cin >> name_friend;

	cout << "Dear " << first_name << ", \n";
	cout << "How are you and how have you been" << endl;
	cout << "So.... computers have taken over the world." << endl;
	cout << "Have you seen " << name_friend << ", lately? " << endl;
	
	keep_window_open();
}
*/


//	--------------------------------
//	----------Drill 4---------------
//	--------------------------------
/*
int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;	//	first_name is a variable of type string
	cin >> first_name;	//	read characters into first_name
	
	cout << "Name of friend: ";
	string name_friend; 
	cin >> name_friend;
	
	cout << "Is " << name_friend << ", male of female (m/f)?: ";
	char friend_sex = 0;
	cin >> friend_sex;

	cout << "Dear " << first_name << ", \n";
	cout << "How are you and how have you been" << endl;
	cout << "So.... computers have taken over the world." << endl;
	cout << "Have you seen " << name_friend << ", lately? " << endl;
	
	if (friend_sex == 'm')
		cout << "Please tell him to contact me" << endl;

	if (friend_sex == 'f')
		cout << "Please tell her to contact me" << endl;

	keep_window_open();
}
*/


//	--------------------------------
//	----------Drill 5---------------
//	--------------------------------
/*
int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;	//	first_name is a variable of type string
	cin >> first_name;	//	read characters into first_name

	cout << "Enter the age of the person: ";
	int age;
	cin >> age;

	cout << "Name of friend: ";
	string name_friend; 
	cin >> name_friend;

	if (age <= 0)
		simple_error("You´re Kidding!");

	if (age >= 110)
		simple_error("You´re Kidding!");
	
	cout << "Is " << name_friend << ", male of female (m/f)?: ";
	char friend_sex = 0;
	cin >> friend_sex;

	cout << "Dear " << first_name << ", \n";
	cout << "How are you and how have you been" << endl;
	cout << "So.... computers have taken over the world." << endl;
	cout << "Have you seen " << name_friend << ", lately? " << endl;
	
	if (friend_sex == 'm')
		cout << "Please tell him to contact me" << endl;

	if (friend_sex == 'f')
		cout << "Please tell her to contact me" << endl;

	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;

	keep_window_open();
}
*/



//	--------------------------------
//	----------Drill 6---------------
//	--------------------------------
/*
int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;	//	first_name is a variable of type string
	cin >> first_name;	//	read characters into first_name

	cout << "Enter the age of the person: ";
	int age;
	cin >> age;

	cout << "Name of friend: ";
	string name_friend; 
	cin >> name_friend;

	if (age <= 0)
		simple_error("You´re Kidding!");

	if (age >= 110)
		simple_error("You´re Kidding!");
	
	cout << "Is " << name_friend << ", male of female (m/f)?: ";
	char friend_sex = 0;
	cin >> friend_sex;

	cout << "Dear " << first_name << ", \n";
	cout << "How are you and how have you been" << endl;
	cout << "So.... computers have taken over the world." << endl;
	cout << "Have you seen " << name_friend << ", lately? " << endl;
	
	if (friend_sex == 'm')
		cout << "Please tell him to contact me" << endl;

	if (friend_sex == 'f')
		cout << "Please tell her to contact me" << endl;

	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;

	if (age <= 12)
		cout << "Next year you will be " << age+1 << "." << endl;

	if (age == 17)
		cout << "Next year you will be able to vote." << endl;

	if (age >= 70)
		cout << "I hope you are enjoying retierment." << endl;

	keep_window_open();
}
*/

//	--------------------------------
//	----------Drill 7---------------
//	--------------------------------
int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;	//	first_name is a variable of type string
	cin >> first_name;	//	read characters into first_name

	cout << "Enter the age of the person: ";
	int age;
	cin >> age;

	cout << "Name of friend: ";
	string name_friend; 
	cin >> name_friend;

	if (age <= 0)
		simple_error("You´re Kidding!");

	if (age >= 110)
		simple_error("You´re Kidding!");
	
	cout << "Is " << name_friend << ", male of female (m/f)?: ";
	char friend_sex = 0;
	cin >> friend_sex;

	cout << "Dear " << first_name << ", \n";
	cout << "How are you and how have you been" << endl;
	cout << "So.... computers have taken over the world." << endl;
	cout << "Have you seen " << name_friend << ", lately? " << endl;
	
	if (friend_sex == 'm')
		cout << "Please tell him to contact me" << endl;

	if (friend_sex == 'f')
		cout << "Please tell her to contact me" << endl;

	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;

	if (age <= 12)
		cout << "Next year you will be " << age+1 << "." << endl;

	if (age == 17)
		cout << "Next year you will be able to vote." << endl;

	if (age >= 70)
		cout << "I hope you are enjoying retierment." << endl;

	cout << "Yours sincerely, " << endl << endl << first_name << endl;

	keep_window_open();
}