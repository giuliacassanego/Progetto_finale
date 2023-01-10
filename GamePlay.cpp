//Angelica Zonta 2032570

#include "GamePlay.h"


#include <cstdlib>
#include <ctime>

GamePlay::GamePlay(){}

/*GamePlay::~GamePlay()
{
}
 * */
 
int GamePlay::start()
{
    srand(time(NULL));
    int n = rand()%2+1; //numero casuale da 1 a 2
    return n;
}


//lo utilizzo nel main dentro ad un ciclo whiledove controllo che finche win != true, mi continua a giocare
void GamePlay::checkWin()
{
    if(//"inseriscoil noe della varibaile quantita" ==0)
    {
        win = true;
    }
    return;
}

void GamePlay::playAction(//nome oggetto che deve eseguire il gioco)
{
    
}

bool GamePlay::isHit()
{
    if(
}
