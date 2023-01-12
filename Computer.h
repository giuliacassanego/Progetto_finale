//Angelica Zonta 2032570

#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include "Player.h"

using namespace std;

class Computer
{
    public:
        Computer(string s);
        
        char randomChoseNavalUnit(); //funzione per scelta casuale della flotta che deve eseguire il movimento
        //funzioni per la scelta della posizione
        int randomChosePositionNum();
        int randomChosePositionLett();
        Player getPlayer();
};

#endif // COMPUTER_H
