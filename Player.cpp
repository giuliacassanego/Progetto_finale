//Cassanego Giulia
#include <iostream>
#include <stdexcept>

#include "Player.h"
#include "Grid.h"
#include "Corazzata.h"
#include "NaveSupporto.h"
#include "SottoMarino.h"

using namespace std;

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

Grid::Grid Player::getGrid()
{
    return grid1;
}

void Player::hasHit()
{
    hits++;
}

int Player::getHits()
{
    return hits;
}

void Player::hasWin()
{
    win = true;
}

void Player::setCor(int n)
{
	if (n > 3)	//3 o 4?
	{
		throw invalid_argument("Invalid number");
	}
	num_corazzate = n;
}
	
void Player::setSup(int n)
{
	if (n > 3)
	{
		throw invalid_argument("Invalid number");
	}
	num_support = n;
}
	
void Player::setExp(int n)
{
	if (n > 2)
	{
		throw invalid_argument("Invalid number");
	}
	num_explorer = n;
}
	
int Player::getCor()
{
	return num_corazzate;
}
	
int Player::getSup()
{
	return num_support;
}
	
int Player::getExp()
{
	return num_explorer;
}
