#include "Corazzata.h"
#include "Grid.h"
#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

Corazzata::Corazzata(string n)
{
    space = 5;
    shield = space;
    name = n;
}

Corazzata::~Corazzata()
{
}


void Corazzata::fire(std::string origin, std::string target)
{
    int c = (int) Grid::convert(target.substr(0,1));
    int r = (int) target.substr(1);
    
    if(this ->name == "player1")
    {
        if(player2.getGrid.getAttack[c][r] != ' ')
        {
            player2.getGrid.getAttack[c][r] = (char)tolower(player2.getGrid.getAttack[c][r]);
        }
    }
    else if(this ->name == "player2")
    {
        if(player1.getGrid.getAttack[c][r] != ' ')
        {
            player1.getGrid.getAttack[c][r] = (char)tolower(player2.getGrid.getAttack[c][r]);
        }
    }
}

}
