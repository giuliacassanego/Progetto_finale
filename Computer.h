//Angelica Zonta 2032570

#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <cstdlib>
#include <ctime>


class Computer
{
    public:
        Computer();
        //~Computer();
        
        int randomChoseNavalUnit(); //funzione per scelta casuale della flotta che deve eseguire il movimento
        std::string randomChosePosition(); //funzione per scelta casuale della posizione in cui eseguire il movimento

};

#endif // COMPUTER_H
