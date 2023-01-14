//Cassanego Giulia 2032560

#include <iostream>
#include <stdexcept>

#include "Player.h"
#include "Grid.h"
#include "Corazzata.h"
#include "NaveSupporto.h"
#include "Sottomarino.h"

using namespace std;

Player::Player(){}

Player::Player(string n)
{
    hits=0; 
    win = false;
    
    Corazzata corazzata1(n);
    Corazzata corazzata2(n);
    Corazzata corazzata3(n);
    
    NaveSupporto nave1(n);
    NaveSupporto nave2(n);
    NaveSupporto nave3(n);
    
    Sottomarino sottomarino1(n);
    Sottomarino sottomarino2(n);
    
    Grid grid1;
    
}

Grid Player::getGrid()
{
    return grid1;
}


int Player::getHits()
{
    return hits;
}

void Player::hasWin()
{
    win = true;
}

Corazzata Player::getCor1()
{
	return corazzata1;
}

Corazzata Player::getCor2()
{
	return corazzata2;
}

Corazzata Player::getCor3()
{
	return corazzata3;
}

NaveSupporto Player::getNave1()
{
	return nave1;
}

NaveSupporto Player::getNave2()
{
	return nave2;
}

NaveSupporto Player::getNave3()
{
	return nave3;
}

Sottomarino Player::getSub1()
{
	return sottomarino1;
}

Sottomarino Player::getSub2()
{
	return sottomarino2;
}
