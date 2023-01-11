//Angelica Zonta 2032570

#ifndef COMPUTER_H
#define COMPUTER_H


class Computer
{
    public:
        Computer();
        
        char randomChoseNavalUnit(); //funzione per scelta casuale della flotta che deve eseguire il movimento
        //funzioni per la scelta della posizione
        int randomChosePositionNum();
        int randomChosePositionLett();
};

#endif // COMPUTER_H
