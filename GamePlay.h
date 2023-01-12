//Angelica Zonta 2032570

#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "Player.h"
#include "Computer.h"



class GamePlay
{
    private:
       //bool win = false; 
       
    
    public:
        GamePlay(Computer player1, Player player2);
        GamePlay(Computer player1, Computer player2);
        //~GamePlay();
        
        int start(); //funzione ch decide chi comincia ilioco in modo casuale
        void checkWin(Player p1, Player p2); //funzione per controllora se è stato affondato il gioco
        void playAction();//nome oggetto che deve eseguire il gioco come pratamtro);
        int calcShield(Player p);
        Player getPlayer1();
        Player getPlayer2();
};


#endif // GAMEPLAY_H
