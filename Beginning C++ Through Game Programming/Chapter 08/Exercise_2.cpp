//
//	Chapter 8
//	Exercise 2
//	2013-12-10
//
/*
	Change the Critter Caretaker program so that the critter is more
	expressive about its needs by hinting at how hungry and bored it is.
*/



//Critter Caretaker
//Simulates caring for a virtual pet

#include <iostream>

using namespace std;

class Critter
{
public:          
    Critter(int hunger = 0, int boredom = 0); 
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);
	void cheat() const;

private:
    int m_Hunger;
    int m_Boredom;

    int GetMood() const;
    void PassTime(int time = 1);
	void mood() const;

};

Critter::Critter(int hunger, int boredom):
    m_Hunger(hunger),
    m_Boredom(boredom)
{}

inline int Critter::GetMood() const 
{
    return (m_Hunger + m_Boredom);
}

void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
	mood();
}

void Critter::Talk()
{
    cout << "I'm a critter and I feel ";

    int mood = GetMood();
    if (mood > 15)
	{
        cout << "mad.\n";
	}
    else if (mood > 10)
	{
        cout << "frustrated.\n";
	}
    else if (mood > 5)
	{
        cout << "okay.\n";
	}
    else
	{
        cout << "happy.\n";
	}

    PassTime();
}

void Critter::Eat(int food) 
{
    cout << "Brruppp.\n";

    m_Hunger -= food;
    if (m_Hunger < 0)
	{
        m_Hunger = 0;
	}

    PassTime();
}

void Critter::Play(int fun)
{
    cout << "Wheee!\n";

    m_Boredom -= fun;
    if (m_Boredom < 0)
	{
        m_Boredom = 0;
	}

    PassTime();
}

// critter shows its mood
void Critter::mood() const
{
	 if (m_Hunger > 10)
	{
        cout << "Eating your shoes.\n";
	}
    else if (m_Hunger > 5)
	{
        cout << "brings its food bowl.\n";
	}
    else if (m_Hunger > 2)
	{
        cout << "jumps up and down.\n";
	}
    else
	{
        cout << "Smiles and takes a nap.\n";
	}


	if (m_Boredom > 10)
	{
        cout << "Runnign around like nuts.\n";
	}
    else if (m_Boredom > 5)
	{
        cout << "Brought its Ball.\n";
	}
    else if (m_Boredom > 2)
	{
        cout << "looks at you.\n";
	}
    else
	{
        cout << "Sleeping.\n";
	}

}


// Cheat to display hunger and boredom levels.
void Critter::cheat() const
{
	cout << endl;
	cout << "Cheat Information." << endl;
	cout << "Hunger: " <<  m_Boredom << endl;
	cout << "Boredom: " << m_Hunger << endl;
}


int main()
{
    Critter crit;

    int choice = 1;  //start the critter off talking
    while (choice != 0)
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to your critter\n";
        cout << "2 - Feed your critter\n";
        cout << "3 - Play with your critter\n\n";

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:	
            cout << "Good-bye.\n";
			break;
        case 1:	
            crit.Talk();
			break;
        case 2:	
            crit.Eat();
			break;
        case 3:	
            crit.Play();
			break;
		case 6:
			crit.cheat();
			break;
        default:
            cout << "\nSorry, but " << choice << " isn't a valid choice.\n";
        }
    }

    return 0;
}
