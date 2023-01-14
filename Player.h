//Cassanego Giulia 2032560

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Grid.h"

using namespace std;

class Player
{
private:
    int hits; //numero dei colpi andati a segno
    bool win;
       

public:
	Player(string n);
	
	//member functions
    void hasHit();
    int getHits();
    void hasWin();
	Grid getGrid();
	Corazzata getCor1();
	Corazzata getCor2();
	Corazzata getCor3();
	NaveSupporto getNave1();
	NaveSupporto getNave2();
	NaveSupporto getNave3();
	Sottomarino getSub1();
	Sottomarino getSub2();
};

#endif	//PLAYER_H
