//Angelica Zonta 2032570

#include "GamePlay.h"
#include "Grid.h"
#include "Computer.h"
#include "sottomarino.h"
#include "NaveSupporto.h"
#include "Sottomarino.h"

#include <cstdlib>
#include <ctime>

//GamePlay::GamePlay(){}

GamePlay::GamePlay(Computer playerC, Player playerP)
{
    playerC = Computer("player1");
    playerP = Player("player2");
}

GamePlay::GamePlay(Computer playerC1, Computer playerC2);
{
    playerC1 = Computer("player1");
    playerC2 = Computer("player2");
}

/*
~GamePlay() //distruttore che elimina oggetto creato alla fine edella partita
{
    
}
*/

//da fare con template perchè posso inserire sia computer cheplayer
void GamePlay::hasHit()
{
    hits++;
}

int GamePlay::start()
{
    srand(time(NULL));
    int n = rand()%2+1; //numero casuale da 1 a 2
    return n;
}


Player::Player GamePlay::getPlayer1()
{
    return player1;
}

Player::Player GamePlay::getPlayer2()
{
    return player2;
}

//mossa da fare
void GamePlay::randomAction()
{
    srand(time(NULL));
    int n = rand()%3+1;
    if(n==1)
    {
        int c = rand()%3+1;
        if(c==1)
        {
            
        }
        //faccio esegure l'azione alla corazzata che esce in c
    } 
    else if(n==2)
    {
        int c = rand()%3+1;
        //faccio eseguire azione alla nave che esce in n
    }
    else{
        int c = rand()%2+1;
        //faccio eseguire azione al sottomarino che esce in n
    }
    
}

int GamePlay::calcShield(Player p)
{
    return (p.getCor1().getShield() + p.getCor2().getShield()+p.getCor3().getShield() + p.getNave1().getShield() + p.getNave2().getShield() + p.getNave3().getShield() + p.getSub1().getShield() + p.getSub2().getShield());
}

void GamePlay::checkWin(Player p1, Player p2)
{    
    if(calcShield(p1) > calcShield(p2))
    {
        p1.hasWin();
    }
    else{
        p2.hasWin();
    }
}

bool GamePlay::checkAffondato()
{
    if(this->getShield() ==0)
    {
        this->clear();
        return true;
    }
    return false;
}
