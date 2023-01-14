//Angelica Zonta 2032570

#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include "Player.h"
#include "Grid.h"

using namespace std;

class Computer : public Player
{
private:
    Grid grid;
    Player player;
public:
        
        Computer();
        Computer(string s);
        
        string randomChoseInitialPos();
        Player getPlayer();
        Grid getGrid();
        void prepareGrid();
        int chooseDirection();
        string findStern(char flotta, string bow);
        int convert(string c);
        
    
};

#endif // COMPUTER_H
