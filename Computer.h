//Angelica Zonta 2032570

#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include "Player.h"
#include "Grid.h"

using namespace std;

class Computer
{
private:
    Grid grid;
    Player player;
public:
        
        Computer(string s);
        
        char randomChoseNavalUnit(); //funzione per scelta casuale della flotta che deve eseguire il movimento
        //funzioni per la scelta della posizione
        int randomChosePositionNum();
        int randomChosePositionLett();
        Player getPlayer();
        Grid getGrid();
        void prepareGrid();
        
        
    
};

#endif // COMPUTER_H
