//Angelica Zonta 2032570

#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "Player.h"
#include "Computer.h"



class GamePlay
{
    private:
       //bool win = false; 
       Computer player1;
       Computer player02;
       Player player2;
       
public:
        //?????
        GamePlay(Computer playerC, Player playerP);
        GamePlay(Computer playerC1, Computer playerC2);
        //~GamePlay();
        
        int start(); //funzione ch decide chi comincia ilioco in modo casuale
        void checkWin(Player p1, Player p2); //funzione per controllora se è stato affondato il gioco
        int calcShield(Player p);
        Player getPlayer1();
        Player getPlayer2();
        void randomMove();
};


#endif // GAMEPLAY_H
