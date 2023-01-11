#include "Sottomarino.h"
#include "Grind.h"
#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

Sottomarino::Sottomarino(string n)
{
    name = n;
    space = 5;
    shield = space;
}

Sottomarino::~Sottomarino()
{
}

void Sottomarino::scan(string center)
{
    int c = (int) Grid::convert(center.substr(0,1));
    int r = (int) center.substr(1);
    
    if(this->name == "player1")
    {
        if(player2.getGrid.getDefence[c-2][r-2] == 'C' ||player2.getGrid.getDefence[c-2][r-2] == 'c')
        {
            player1.getGrid.setAttack[c-2][r-2] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c-2][r-1] == 'C' ||player2.getGrid.getDefence[c-2][r-1] == 'c')
        {
            player1.getGrid.setAttack[c-2][r-1] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c-2][r] == 'C' ||player2.getGrid.getDefence[c-2][r] == 'c')
        {
            player1.getGrid.setAttack[c-2][r] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c-2][r+1] == 'C' ||player2.getGrid.getDefence[c-2][r+1] == 'c')
        {
            player1.getGrid.setAttack[c-2][r+1] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c-2][r+2] == 'C' ||player2.getGrid.getDefence[c-2][r+2] == 'c')
        {
            player1.getGrid.setAttack[c-2][r+2] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c-1][r-2] == 'C' ||player2.getGrid.getDefence[c-1][r-2] == 'c')
        {
            player1.getGrid.setAttack[c-1][r-2] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c-1][r-1] == 'C' ||player2.getGrid.getDefence[c-1][r-1] == 'c')
        {
            player1.getGrid.setAttack[c-1][r-1] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c-1][r] == 'C' ||player2.getGrid.getDefence[c-1][r] == 'c')
        {
            player1.getGrid.setAttack[c-1][r] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c-1][r+1] == 'C' ||player2.getGrid.getDefence[c-1][r+1] == 'c')
        {
            player1.getGrid.setAttack[c-1][r+1] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c-1][r+2] == 'C' ||player2.getGrid.getDefence[c-1][r+2] == 'c')
        {
            player1.getGrid.setAttack[c-1][r+2] = 'Y';
        }
        
         if(player2.getGrid.getDefence[c][r-2] == 'C' ||player2.getGrid.getDefence[c][r-2] == 'c')
        {
            player1.getGrid.setAttack[c][r-2] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c][r-1] == 'C' ||player2.getGrid.getDefence[c][r-1] == 'c')
        {
            player1.getGrid.setAttack[c][r-1] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c][r] == 'C' ||player2.getGrid.getDefence[c][r] == 'c')
        {
            player1.getGrid.setAttack[c][r] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c][r+1] == 'C' ||player2.getGrid.getDefence[c][r+1] == 'c')
        {
            player1.getGrid.setAttack[c][r+1] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c][r+2] == 'C' ||player2.getGrid.getDefence[c][r+2] == 'c')
        {
            player1.getGrid.setAttack[c][r+2] = 'Y';
        }
        
         if(player2.getGrid.getDefence[c+1][r-2] == 'C' ||player2.getGrid.getDefence[c+1][r-2] == 'c')
        {
            player1.getGrid.setAttack[c+1][r-2] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c+1][r+1] == 'C' ||player2.getGrid.getDefence[c+1][r-1] == 'c')
        {
            player1.getGrid.setAttack[c+1][r+1] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c+1][r] == 'C' ||player2.getGrid.getDefence[c+1][r] == 'c')
        {
            player1.getGrid.setAttack[c+1][r] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c+1][r+1] == 'C' ||player2.getGrid.getDefence[c+1][r+1] == 'c')
        {
            player1.getGrid.setAttack[c+1][r+1] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c+1][r+2] == 'C' ||player2.getGrid.getDefence[c+1][r+2] == 'c')
        {
            player1.getGrid.setAttack[c+1][r+2] = 'Y';
        }
        
         if(player2.getGrid.getDefence[c+2][r-2] == 'C' ||player2.getGrid.getDefence[c+2][r-2] == 'c')
        {
            player1.getGrid.setAttack[c+2][r-2] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c+2][r-1] == 'C' ||player2.getGrid.getDefence[c+2][r-1] == 'c')
        {
            player1.getGrid.setAttack[c+2][r-1] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c+2][r] == 'C' ||player2.getGrid.getDefence[c+2][r] == 'c')
        {
            player1.getGrid.setAttack[c+2][r] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c+2][r+1] == 'C' ||player2.getGrid.getDefence[c+2][r+1] == 'c')
        {
            player1.getGrid.setAttack[c+2][r+1] = 'Y';
        }
        
        if(player2.getGrid.getDefence[c+2][r+2] == 'C' ||player2.getGrid.getDefence[c+2][r+2] == 'c')
        {
            player1.getGrid.setAttack[c+2][r+2] = 'Y';
        }
      
    }
    else if(this->name == "player2")
    {
        if(player1.getGrid.getDefence[c-2][r-2] == 'C' ||player1.getGrid.getDefence[c-2][r-2] == 'c')
        {
            player2.getGrid.setAttack[c-2][r-2] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c-2][r-1] == 'C' ||player1.getGrid.getDefence[c-2][r-1] == 'c')
        {
            player2.getGrid.setAttack[c-2][r-1] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c-2][r] == 'C' ||player1.getGrid.getDefence[c-2][r] == 'c')
        {
            player2.getGrid.setAttack[c-2][r] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c-2][r+1] == 'C' ||player1.getGrid.getDefence[c-2][r+1] == 'c')
        {
            player2.getGrid.setAttack[c-2][r+1] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c-2][r+2] == 'C' ||player1.getGrid.getDefence[c-2][r+2] == 'c')
        {
            player2.getGrid.setAttack[c-2][r+2] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c-1][r-2] == 'C' ||player1.getGrid.getDefence[c-1][r-2] == 'c')
        {
            player2.getGrid.setAttack[c-1][r-2] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c-1][r-1] == 'C' ||player1.getGrid.getDefence[c-1][r-1] == 'c')
        {
            player2.getGrid.setAttack[c-1][r-1] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c-1][r] == 'C' ||player1.getGrid.getDefence[c-1][r] == 'c')
        {
            player2.getGrid.setAttack[c-1][r] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c-1][r+1] == 'C' ||player1.getGrid.getDefence[c-1][r+1] == 'c')
        {
            player2.getGrid.setAttack[c-1][r+1] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c-1][r+2] == 'C' ||player1.getGrid.getDefence[c-1][r+2] == 'c')
        {
            player2.getGrid.setAttack[c-1][r+2] = 'Y';
        }
        
         if(player1.getGrid.getDefence[c][r-2] == 'C' ||player1.getGrid.getDefence[c][r-2] == 'c')
        {
            player2.getGrid.setAttack[c][r-2] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c][r-1] == 'C' ||player1.getGrid.getDefence[c][r-1] == 'c')
        {
            player2.getGrid.setAttack[c][r-1] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c][r] == 'C' ||player1.getGrid.getDefence[c][r] == 'c')
        {
            player2.getGrid.setAttack[c][r] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c][r+1] == 'C' ||player1.getGrid.getDefence[c][r+1] == 'c')
        {
            player2.getGrid.setAttack[c][r+1] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c][r+2] == 'C' ||player1.getGrid.getDefence[c][r+2] == 'c')
        {
            player2.getGrid.setAttack[c][r+2] = 'Y';
        }
        
         if(player1.getGrid.getDefence[c+1][r-2] == 'C' ||player1.getGrid.getDefence[c+1][r-2] == 'c')
        {
            player2.getGrid.setAttack[c+1][r-2] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c+1][r+1] == 'C' ||player1.getGrid.getDefence[c+1][r-1] == 'c')
        {
            player2.getGrid.setAttack[c+1][r+1] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c+1][r] == 'C' ||player1.getGrid.getDefence[c+1][r] == 'c')
        {
            player2.getGrid.setAttack[c+1][r] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c+1][r+1] == 'C' ||player1.getGrid.getDefence[c+1][r+1] == 'c')
        {
            player2.getGrid.setAttack[c+1][r+1] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c+1][r+2] == 'C' ||player1.getGrid.getDefence[c+1][r+2] == 'c')
        {
            player2.getGrid.setAttack[c+1][r+2] = 'Y';
        }
        
         if(player1.getGrid.getDefence[c+2][r-2] == 'C' ||player1.getGrid.getDefence[c+2][r-2] == 'c')
        {
            player2.getGrid.setAttack[c+2][r-2] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c+2][r-1] == 'C' ||player1.getGrid.getDefence[c+2][r-1] == 'c')
        {
            player2.getGrid.setAttack[c+2][r-1] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c+2][r] == 'C' ||player1.getGrid.getDefence[c+2][r] == 'c')
        {
            player2.getGrid.setAttack[c+2][r] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c+2][r+1] == 'C' ||player1.getGrid.getDefence[c+2][r+1] == 'c')
        {
            player2.getGrid.setAttack[c+2][r+1] = 'Y';
        }
        
        if(player1.getGrid.getDefence[c+2][r+2] == 'C' ||player1.getGrid.getDefence[c+2][r+2] == 'c')
        {
            player2.getGrid.setAttack[c+2][r+2] = 'Y';
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
        if(player1.getGrid.getDefence[cd][rd] != 'C' || player1.getGrid.getDefence[cd][rd] != 'c')
            {
                    player1.getGrid.getDefence[cd][rd] = player1.getGrid.getDefence[c][r];
                    player1.getGrid.getDefence[c][r] = ' ';
            }

    }
    if(this->name == "player1")
    {
        if(player2.getGrid.getDefence[cd][rd] != 'C' || player2.getGrid.getDefence[cd][rd] != 'c')
            {
                player2.getGrid.getDefence[cd][rd] = player2.getGrid.getDefence[c][r];
                player2.getGrid.getDefence[c][r] = ' ';
            }

    }
}

