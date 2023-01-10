//Angelica Zonta 2032570

#ifndef GAMEPLAY_H
#define GAMEPLAY_H

class GamePlay
{
    private:
       bool win = false; 
    
    public:
        GamePlay();
        //~GamePlay();
        
        int start(); //funzione ch decide chi comincia ilioco in modo casuale
        void checkWin(); //funzione per controllora se è stato affondato il gioco
        void playAction();//nome oggetto che deve eseguire il gioco come pratamtro);
        bool isHit();
};

#endif // GAMEPLAY_H
