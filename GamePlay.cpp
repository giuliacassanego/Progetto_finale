/**
 * @brief Definitions of functions of GamePlay
 */

#include <cstdlib>
#include <ctime>

#include "GamePlay.h"
#include "ComputerPlayer.h"
#include "HumanPlayer.h"

using namespace std;

void GamePlay::playGame()
{
	logFile.open("./log.txt");
	
	switch(mode)
	{
		case PC:
		{
			HumanPlayer p1("Player1");
			cout << endl << p1.getName() <<"'s grid:"<< endl<< p1.getGrid(); 
			ComputerPlayer p2("Player2");
			
			logFile << "Posizioni player1\n" << p1.getInitPos() << "\n";
			logFile << "Posizioni player2\n" << p2.getInitPos() << "\n";
			
			p1.setOpponent(&p2);
			p2.setOpponent(&p1);
			
			int first = start();
			Player* active;
			if(first == 1)
			{
				active = &p1;
			}
			else
			{
				active = &p2;
			}

			logFile << "The first action is of " << active->getName() <<  "\n";
			int n = 0;
			try{
				while(n < 10)
				{
					cout << endl << "Game turn of " << active->getName() << endl;
					Action a = active->nextAction();
					if(a.getType() == SHOW)
					{
						actionCoords.push_back("XX XX");
					}
					else if(a.getType() == CLEAR)
					{
						actionCoords.push_back("AA AA");
					}
					else
					{
						actionCoords.push_back(Coordinates::createString(a.getSource(), a.getTarget()));
					}
					
					active->play(a);
				
					if(a.getType() != CLEAR && a.getType() != SHOW)
					{
						if(active == &p1)
						{
							active = &p2;
						}
						else
						{
							active = &p1;
						}
						n++;
					}
				}
				cout << p1.checkWin()->getName() << " has won :) " << endl;
			}
			catch(invalid_argument e)
			{
				cout << e.what() << endl;
			}
			logFile << getActionCoords();
			break;
		}
		case CC:
		{
			ComputerPlayer p1("Player1");
			cout << p1.getName() <<"'s grid:"<< endl<< p1.getGrid(); 
			ComputerPlayer p2("Player2");
			cout << p2.getName() <<"'s grid:"<< endl<< p2.getGrid(); 
			
			logFile << "Posizioni player1\n" << p1.getInitPos() << "\n";
			logFile << "Posizioni player2\n" << p2.getInitPos() << "\n";
			
			p1.setOpponent(&p2);
			p2.setOpponent(&p1);
			
			int first = start();
			Player* active = (first == 1 ? &p1 : &p2);
			
			logFile << "The first action is of " << active->getName() <<  "\n";
  
			int n = 0;
			try{
				while(n < 10)
				{       
					cout << "Game turn of " << active->getName() << endl;
					Action a = active->nextAction();
					actionCoords.push_back(Coordinates::createString(a.getSource(), a.getTarget()));
					active->play(a);
					
					cout << active->getName() << "'s grid: " << endl << active->getGrid();

					active = (active == &p1 ? &p2 : &p1);

					//if(a.getType() != CLEAR)
					//{
						n++;
					//}
				}
				cout << p1.checkWin()->getName() << " has won :) " << endl;
			}
			catch(invalid_argument e)
			{
				cout << e.what() << endl;
			}
			logFile << getActionCoords();
			break;
		}
		default:
			break;
	}
	logFile.close();
}

int GamePlay::start()
{
    srand(time(NULL));
    int n = rand()%2+1; //numero casuale da 1 a 2
    return n;
}

string GamePlay::getActionCoords()
{
	string s;
	for(int i = 0; i < actionCoords.size(); i++)
	{
		s += actionCoords[i] + "\n";
	}
	return s;
}
