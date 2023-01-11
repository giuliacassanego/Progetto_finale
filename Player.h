//Cassanego Giulia

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

using namespace std;

class Player
{
private:
    int hits; //numero dei colpi andati a segno
    bool win;
       

public:
	Player(string n);
	
	//member functions
	void setCor(int n);
	void setSup(int n);
	void setExp(int n);
	int getCor();
	int getSup();
	int getExp();
    void hasHit();
    int getHits();
    void hasWin();
};

#endif
