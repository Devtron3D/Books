//
// Chapter 5
// Exercise 13
// 22-13-2013
//

#include "../../../std_lib_facilities.h"


// function declarations
vector<int> bull_cow_check(vector<int> secret_numbers, vector<int> player_guess);		// check how many bulls and cows
void game_loop();   // main game loop

//------------------------------------------------------------------------------------
// you know this main function don´t you ?
//
int main()
{
	bool play_gain = true;    
	// as long as play_again is true, continue to play
	while (play_gain)
	{

		game_loop();	// the game

		// ask user if he wants to play again
		cout << "Do you want to play again y/n ?: ";
		char again;
		cin >> again;

		// quite the game if user enters y (yes)
		if (again != 'y')
		{
			play_gain = false;
		}
	}

	// End game message.
	cout << endl;
	cout << "Thanks for playing" << endl;

	keep_window_open();

	
}

//--------------------------------------------------------------------------
// Random number for the user to guess
//
vector<int> random_number(vector<int> secret_number)
{
	cout << "Please enter a number between 1-100: ";
	int number; 
	cin >> number;

	// seed the random number generator
	srand(number);

	// add random number to the vector (4 numbers get a random number)
	for (unsigned int i = 0; i < secret_number.size(); ++i)
	{
		secret_number[i] = randint(10);
	}

	return secret_number;
}



//-----------------------------------------------------------------------------------
// main game loop
//
void game_loop()
{
	vector<int> secret_numbers;

	// current secret number (Need random number generator);
	secret_numbers.push_back(0);
	secret_numbers.push_back(0);
	secret_numbers.push_back(0);
	secret_numbers.push_back(0);

	secret_numbers = random_number(secret_numbers);

	bool status = false;   // playing = flase,  win and end game = true;


	while (!status)
	{
		cout << "Please enter 4 numbers." << endl;

		vector<int> player_guess;

		unsigned int numbers = 4;	// the players enters 4 numbers
		unsigned int input;			// player input

		// get user numbers
		while (player_guess.size() != numbers)
		{
			cin >> input;
			player_guess.push_back(input);
		}

		if (player_guess.size() != numbers)
		{
			error("User did not enter 4 numbers");
		}

		// get bull cow result
		vector<int> result = bull_cow_check(secret_numbers, player_guess);
		
		unsigned win = 4; // if user has 4 bulls he has won

		// result  ([0] = bulls,  [1] = cows).
		if (result[0] == win)
		{
			cout << "You won." << endl;
			status = true;  // user won, set to true to exit loop
		}
		else
		{
			// display current game status.
			cout << "Bull: " << result[0] << ", Cows: " << result[1] << endl;
		}
	}
}


//---------------------------------------------------------------------
// check for bulls and cows, return a string with bulls and cows
// function returns a vector [0] = bulls,  [1] = cows.
//
vector<int> bull_cow_check(vector<int> secret_numbers, vector<int> player_guess)
{
	// [0] = bulls,  [1] = cows.
	vector<int> result;
	unsigned int zero = 0;
	result.push_back(zero);	// [0] Bulls
	result.push_back(zero);	// [1] Cows

	// check if secret_numbers and player_guess both contain 4 numbers (size 4)
	unsigned int size_check = 4;
	if (secret_numbers.size() != size_check && player_guess.size() != size_check)
	{
		error("WARRNING: (bull_cow_check): secret_numbers or player_guess, have incorrect size");
	}

	// check player guess j, against secret_number i
	for (unsigned int i=0; i < secret_numbers.size(); ++i)
	{
		if (secret_numbers[i] == player_guess[i])
		{
			++result[0];	// [0] Bulls
		}
		else
		{	
			for (unsigned int j=0; j < player_guess.size(); ++j)
			{
				// check the guess against the secret number, and that secret_number and player_guess are not a bull
				if (secret_numbers[i] == player_guess[j] && secret_numbers[j] != player_guess[j])
				{
					++result[1];	// [1] Cows
				}
			}
		}
	}

	// return bull cow result.
	return result;

}