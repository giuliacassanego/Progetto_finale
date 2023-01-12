//Angelica Zonta 2032570

#include "GamePlay.h"
#include "Grid.h"
#include "Computer.h"

#include <cstdlib>
#include <ctime>

//GamePlay::GamePlay(){}

GamePlay::GamePlay(Computer playerC, Player playerP)
{
    playerC = Computer player1("player1");
    playerP = Player player2("player2");
}

GamePlay::GamePlay(Computer playerC1, Computer playerC2);
{
    playerC1 = player1("player1");
    playerC2 = player2("player2");
}

/*
~GamePlay() //distruttore che elimina oggetto creato alla fine edella partita
{
    
}
*/

int GamePlay::start()
{
    srand(time(NULL));
    int n = rand()%2+1; //numero casuale da 1 a 2
    return n;
}


/*
void GamePlay::posInizialeUnitAtt(std::string s, char c)
{
    while(s.hasNextLine())
    {
        //se inserisco il comando con una lettera, come faccio a trasformarla in int?
    }
    Grid::setAttack(int i, int j, char c);
}
 * */

Player::Player GamePlay::getPlayer1()
{
    return player1;
}

Player::Player GamePlay::getPlayer2()
{
    return player2;
}


int GamePlay::calcShield(Player p)
{
    return (p.corazzata1.getshield() + p.corazzata2.getshield()+p.corazzata2.getshield() + p.sottomarino1.getShield() + p.sottomarino2.getshield() + p.nave1.getshield() + p.nave2.getShield() + p.nave3.getShield());
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

/*
void GamePlay::playAction(Player::Player p)
{
    
}
 * */


