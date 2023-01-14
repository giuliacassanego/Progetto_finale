#include "NaveSupporto.h"
#include "Grid.h"
#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

NaveSupporto::NaveSupporto()
{
    name = n;
    space = 3;
    shield = space;
}

NaveSupporto::~NaveSupporto()
{
}


int NaveSupporto::getShield()
{
    return shield;
}

void NaveSupporto::repair(string center)//capire il return come farlo-grosso problema :), risolto sono un genio
{
    int c = (int) Grid::convert(center.substr(0,1));
    int r = (int) center.substr(1);
    //string target = "";
    
    if(this->name == "player1")
    {
       for( int i = c-2; i < c+3; i ++)
        {
            for(int j = r-2; j < r+3; j++)
            {
               
            }
        }
       
    }
    else if(this->name == "player2")
    {
        for( int i = c-2; i < c+3; i ++)
        {
            for(int j = r-2; j < r+3; j++)
            {
               
            }
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
    
    
}


