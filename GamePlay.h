//Angelica Zonta 2032570

#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "Player.h"


template<typename T> //template che mi rappresenta le tre unità
class GamePlay
{
    private:
       //bool win = false; 
       
    
    public:
        GamePlay();
        //~GamePlay();
        
        int start(); //funzione ch decide chi comincia ilioco in modo casuale
        void checkWin(Player p1, Player p2); //funzione per controllora se è stato affondato il gioco
        void playAction();//nome oggetto che deve eseguire il gioco come pratamtro);
        void affondato(Player p1, T unita);
        int calcShield(Player p);
        Player getPlayer1();
        Player getPlayer2();
};

#include "GamePlay.hpp"
#endif // GAMEPLAY_H
