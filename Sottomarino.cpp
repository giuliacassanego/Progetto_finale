#include "Sottomarino.h"
#include "Grid.h"
#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

Sottomarino::Sottomarino()
{
    name = n;
    space = 1;
    shield = space;
}

Sottomarino::~Sottomarino()
{
}

int Sottomarino::getShield()
{
    return shield;
}

void Sottomarino::scan(string center)
{
    int c = (int) Grid::convert(center.substr(0,1));
    int r = (int) center.substr(1);
    
    if(this->name == "player1")
    {
        for( int i = c-2; i < c+3; i ++)
        {
            for(int j = r-2; j < r+3; j++)
            {
                if(player2.getGrid.getDefence(i,j) != ' ')
                {
                    player1.getGrid.setAttack(i,j,'Y');
                }
            }
        }
    }
    else if(this->name == "player2")
    {
          for( int i = c-2; i < c+3; i ++)
        {
            for(int j = r-2; j < r+3; j++)
            {
                if(player2.getGrid.getDefence(i,j) != ' ')
                {
                    player1.getGrid.setAttack(i,j,'Y');
                }
            }
        }
    } 
}

void Sottomarino::shift(string center, string destination)//capire se era in verticale o in orizzntale, oppure default e via
{
    int c = (int) Grid::convert(center.substr(0,1));
    int r = (int) center.substr(1);
    
    int cd = (int) Grid::convert(destination.substr(0,1));
    int rd = (int) destination.substr(1);
    
   if(this->name == "player1")
        {
            if(player1.getGrid.getDefence(cd,rd) == ' ')
            {
                char c1 =  player1.getGrid.getDefence(c,r);
                
                player1.getGrid.setDefence(cd,rd,c);
                player1.getGrid.setDefence(c,r,' ');
            }
            else
            {
                    //eccezione
            }
        
        }
        if(this->name == "player2")
        {
            if(player2.getGrid.getDefence(cd,rd) == ' ')
            {
                char c2 =  player2.getGrid.getDefence(c,r);
                player2.getGrid.setDefence(cd,rd,c);
                player2.getGrid.setDefence(c,r,' ');
            }
            else
            {
                //eccezione
            }

        }
}

