//
//	Chapter 10
//	Exercise 3
//	2013-12-14
//	
/*
	Improve the Abstract Creature program by adding a new class, OrcBoss,
	that is derived from Orc. An OrcBoss object should start off with 180 for
	its health data member. You should also override the virtual Greet()
	member function so that it displays: The orc boss growls hello.
*/


//Abstract Creature
//Demonstrates abstract classes

#include <iostream>
using namespace std;

class Creature  //abstract class
{
public:
    Creature(int health = 100);
    virtual void Greet() const = 0;   //pure virtual member function
    virtual void DisplayHealth() const;

protected:
    int m_Health;
};

Creature::Creature(int health): 
    m_Health(health)
{}

void Creature::DisplayHealth() const
{
    cout << "Health: " << m_Health << endl;
}

class Orc : public Creature
{
public:
    Orc(int health = 120);
    virtual void Greet() const;
};

Orc::Orc(int health): 
    Creature(health)
{}

void Orc::Greet() const
{
    cout << "The orc grunts hello.\n";
}

///////////////////////////////////
//	OrcBoss Class
////////////////
class OrcBoss : public Orc
{
public:
	OrcBoss(int health = 180);
	virtual void Greet() const;
};


OrcBoss::OrcBoss(int health)
{
	Orc::Creature::m_Health = health;
}

void OrcBoss::Greet() const
{
	cout << "The orc boss growls hello." << endl;
}
/////////////////
//	End OrcBoss class
///////////////////////////////////


int main()
{
    Creature* pCreature = new OrcBoss();
    pCreature->Greet();
    pCreature->DisplayHealth();
    
	system("pause");

    return 0;
}
