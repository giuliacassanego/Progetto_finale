#include "Corazzata.h"
#include "Grid.h"
#include "Player.h"
#include "GamePlay.h"
#include <cctype>
#include <cstring>
#include <iostream>

Corazzata::Corazzata()
{
    space = 5;
    shield = space;
    name = n;
}

Corazzata::~Corazzata()
{
}

void Corazzata::setCenter(int i, int j)
{
    char c = (char) i;
    char r = (char) j;
    
    center = c + r;
}

string Corazzata::getCenter()
{
    return center;
}

void Corazzata::fire(string origin, string target)
{
    string s = target.substr(0,1);
    int c = convert(s);
    int r = (int) target.substr(1);
    
    if(this ->name == "player1")
    {
        if(getPlayer2.getAttack(c,r) != ' ')
        {
            GamePlay.getPlayer2.getGrid.setDefense(c, r, 'c');
            player1.getGrid.setAttack(c, r, 'X');
            player1.hasHit();
            checkAffondato();
        }
    }
    else if(this ->name == "player2")
    {
        if(player1.getGrid.getAttack(c,r) != ' ')
        {
            player1.getGrid.getAttack(c,r,'X');
        }
    }
}

void Corazzata::checkAffondato()
{
    if(this.getShield() ==0)
    {
        std::cout <<"ciao";//da finire
        //da richiamare il distruttore degli oggetti
    }
}

int Corazzata::getShield()
{
    return shield;
}
