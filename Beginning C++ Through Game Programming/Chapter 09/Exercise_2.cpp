//
//	Chapter 9
//	Exercise 2
//	2013-12-10
/*
	The Lobby::AddPlayer() member functiuon from the Game Lobby program
	is inefficient because it iterates through all of the player nodes to 
	add a new player to the end of the line. Add a m_pTail pointer data 
	member to the Lobby class that always points to the last player node in 
	the line and use it to more efficiently add a player.
*/

//Game Lobby
//Simulates a game lobby where players wait

#include <iostream>
#include <string>

using namespace std;

class Player
{
	friend ostream& operator<<(ostream& os, const Player& aPlayer);

public:  
    Player(const string& name = "");
    string GetName() const;
    Player* GetNext() const;
    void SetNext(Player* next);
    
private:
    string m_Name;
    Player* m_pNext;  //Pointer to next player in list
};

Player::Player(const string& name): 
    m_Name(name), 
    m_pNext(0) 
{}

string Player::GetName() const
{
    return m_Name;
}

Player* Player::GetNext() const
{
    return m_pNext;
}

void Player::SetNext(Player* next)
{
    m_pNext = next;
}

class Lobby
{
    friend ostream& operator<<(ostream& os, const Lobby& aLobby);
    
public:
    Lobby();
    ~Lobby();
    void AddPlayer();
    void RemovePlayer();
    void Clear();
    
private:
    Player* m_pHead;  
	Player* m_pTail;
};

Lobby::Lobby():
    m_pHead(0)
	,m_pTail(0)
{}

Lobby::~Lobby()
{
    Clear();
}

void Lobby::AddPlayer()
{
    //create a new player node
    cout << "Please enter the name of the new player: ";
    string name;
    cin >> name;
    Player* pNewPlayer = new Player(name);

    //if list is empty, make head and tail of list this new player
    if (m_pHead == 0)
    {
        m_pHead = pNewPlayer;
		m_pTail = pNewPlayer;
    }
    //otherwise find the end of the list and add the player there
    else
    {
		// add new player to the front of the list
		m_pTail->SetNext(pNewPlayer);
		// change old tail to the pNewPlayer one
		m_pTail = pNewPlayer;
    }
}


void Lobby::RemovePlayer()
{
    if (m_pHead == 0)
    {
        cout << "The game lobby is empty.  No one to remove!\n";
    }
    else
    {
        Player* pTemp = m_pHead;
        m_pHead = m_pHead->GetNext();
        delete pTemp;
    }
}

void Lobby::Clear()
{
    while (m_pHead != 0)
    {
        RemovePlayer();
    }
}

ostream& operator<<(ostream& os, const Player& aPlayer)
{

	os << "Player: " << aPlayer.m_Name;

    return os;

}


ostream& operator<<(ostream& os, const Lobby& aLobby)
{
	Player* pIter = aLobby.m_pHead;

	os << "\nHere's who's in the game lobby:\n";
	if (pIter == 0)
    {
        os << "The lobby is empty.\n";
    }
    else
    {
        while (pIter != 0)
        {   
			os << *pIter << endl;
	        pIter = pIter->GetNext();
        }
    }

    return os;
}

int main()
{
    Lobby myLobby;
    int choice;
    
    do
	{
	    cout << myLobby;
        cout << "\nGAME LOBBY\n";
        cout << "0 - Exit the program.\n";
        cout << "1 - Add a player to the lobby.\n";
        cout << "2 - Remove a player from the lobby.\n";
        cout << "3 - Clear the lobby.\n";
        cout << endl << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 0: cout << "Good-bye.\n"; break;
	        case 1: myLobby.AddPlayer(); break;  
            case 2: myLobby.RemovePlayer(); break;
            case 3: myLobby.Clear(); break;
            default: cout << "That was not a valid choice.\n";
        }
	}
    while (choice != 0);
    
    return 0;
}
