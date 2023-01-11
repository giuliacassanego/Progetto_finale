#include "NaveSupporto.h"
#include "Grind.h"
#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

NaveSupporto::NaveSupporto(string n)
{
    name = n;
    space = 5;
    shield = space;
}

NaveSupporto::~NaveSupporto()
{
}

void NaveSupporto::repair(string center)//capire il return come farlo-grosso problema :), risolto sono un genio
{
    int c = (int) Grid::convert(center.substr(0,1));
    int r = (int) center.substr(1);
    //string target = "";
    
    if(this->name == "player1")
    {
        if(player1.getGrid.getDefence[c-1][r-1] == 'c')
        {
            player1.getGrid.getDefence[c-1][r-1] = (char)toupper(player1.getGrid.getDefence[-1][r-1]);
        }
        
        if(player1.getGrid.getDefence[c-1][r] == 'c')
        {
           player1.getGrid.getDefence[c-1][r] = (char)toupper(player1.getGrid.getDefence[c-1][r]);
        }
        
        if(player1.getGrid.getDefence[c-1][r+1] == 'c')
        {
            player1.getGrid.getDefence[c-1][r+1] = (char)toupper(player1.getGrid.getDefence[c-1][r+1]);
        }
        
        if(player1.getGrid.getDefence[c+1][r-1] == 'c')
        {
            player1.getGrid.getDefence[c+1][r-1] = (char)toupper(player1.getGrid.getDefence[c+1][r-1]);
        }
        
        if(player1.getGrid.getDefence[c][r+1] == 'c')
        {
            player1.getGrid.getDefence[c][r+1] = (char)toupper(player1.getGrid.getDefence[c][r+1]);
        }
        
        if(player1.getGrid.getDefence[c+1][r-1] == 'c')
        {
           player1.getGrid.getDefence[c+1][r-1] = (char)toupper(player1.getGrid.getDefence[c+1][r-1]);
        }
        
        if(player1.getGrid.getDefence[c+1][r] == 'c')
        {
            player1.getGrid.getDefence[c+1][r] = (char)toupper(player1.getGrid.getDefence[+1][r]);
        }
        
        if(player1.getGrid.getDefence[c+1][r+1] == 'c')
        {
            player1.getGrid.getDefence[c+1][r-1] = (char)toupper(player1.getGrid.getDefence[+1][r-1]);
        }
        
    }
    else if(this->name == "player2")
    {
        if(player2.getGrid.getDefence[c-1][r-1] == 'c')
        {
            player2.getGrid.getDefence[c-1][r-1] = (char)toupper(player2.getGrid.getDefence[-1][r-1]);
        }
        
        if(player2.getGrid.getDefence[c-1][r] == 'c')
        {
           player2.getGrid.getDefence[c-1][r] = (char)toupper(player2.getGrid.getDefence[c-1][r]);
        }
        
        if(player2.getGrid.getDefence[c-1][r+1] == 'c')
        {
            player2.getGrid.getDefence[c-1][r+1] = (char)toupper(player2.getGrid.getDefence[c-1][r+1]);
        }
        
        if(player2.getGrid.getDefence[c+1][r-1] == 'c')
        {
            player2.getGrid.getDefence[c+1][r-1] = (char)toupper(player2.getGrid.getDefence[c+1][r-1]);
        }
        
        if(player2.getGrid.getDefence[c][r+1] == 'c')
        {
            player2.getGrid.getDefence[c][r+1] = (char)toupper(player2.getGrid.getDefence[c][r+1]);
        }
        
        if(player2.getGrid.getDefence[c+1][r-1] == 'c')
        {
           player2.getGrid.getDefence[c+1][r-1] = (char)toupper(player2.getGrid.getDefence[c+1][r-1]);
        }
        
        if(player2.getGrid.getDefence[c+1][r] == 'c')
        {
            player2.getGrid.getDefence[c+1][r] = (char)toupper(player2.getGrid.getDefence[c+1][r]);
        }
        
        if(player2.getGrid.getDefence[c+1][r+1] == 'c')
        {
            player2.getGrid.getDefence[c+1][r-1] = (char)toupper(player2.getGrid.getDefence[c+1][r-1]);
        }
        
    }
    
    void NaveSupporto::shift(string center, string destination)//capire se era in verticale o in orizzntale, oppure default e via
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
    
    
}

