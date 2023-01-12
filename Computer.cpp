//Angelica Zonta 2032570
#include "Computer.h"
#include "Grid.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Computer::Computer(string s)
{
    Player player1(s);
}

Player Computer::getPlayer()
{
    return player1;
}

char Computer::randomChoseNavalUnit()
{
    srand(time(NULL));
    int n = rand()%3+1; //numero casuale da 1 a 3
    char navalUnit;
    if(n==1)
    {
        navalUnit = 'C';
    }
    else if(n==2)
    {
        navalUnit = 'S';
    }
    else if(n==3)
    {
        navalUnit = 'E';
    }
    return navalUnit;
}

int Computer::randomChosePositionLett()
{
    srand(time(NULL));
    
    bool correctLett = false; 
    int pos;
    while(correctLett != true)
    {
        pos =rand()%78+65; //scelgo una lettera casulamente con codice ascii: da A a N;
        if(pos != 74 && pos != 75)//controllo che non escano le lettere K e J
        {
            correctLett=true;
        }
    }
    return pos;
}

int Computer::randomChosePositionNum()
{
    std::string s;
    srand(time(NULL));
    int n = rand()%12+1; ///scelto la posizione nella griglia da 1 a 12
    return n;
   
}

void Computer::prepareGrid()
{
    int corazzata=1;
    while(corazzata<=3)
    {
        try{
            this.getPlayer().getGrid().setAttack(randomChosePositionNum(), randomChosePositionLett(), 'C');
            corazzata++;
        }
        catch(invalid_argument exception()){}
    }
    int nave =1;
    while(nave<=3)
    {
        try{
            this.getPlayer().getGrid().setAttack(randomChosePositionNum(), randomChosePositionLett(), 'S');
            nave++;
        }
        catch(invalid_argument exception()){}
    }
    int sottomarino =1;
    while(sottomarino <=2)
    {
        try{
            this.getPlayer().getGrid().setAttack(randomChosePositionNum(), randomChosePositionLett(), 'E');
            sottomarino++;
        }
        catch(invalid_argument exception()){}
    }
}
 





