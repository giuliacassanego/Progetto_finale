//Angelica Zonta 2032570
#include "Computer.h"
#include "Grid.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

Computer::Computer(){}

Computer::Computer(string s)
{
    Player player(s);
    grid;
}

Computer::Computer(string s)
{
    player = Player newP(s);
    grid = Grid newG();
}


Player Computer::getPlayer()
{
    return player;
}


string Computer::randomChoseInitialPos()
{
    srand(time(NULL));
    int n = rand()%12+1; //numero casuale da 1 a 12
    
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
    string s = to_string(pos)+ to_string(n);
    return s;
 
}

int Computer::chooseDirection()
{
    srand(time(NULL));
    int n = rand()%1+1; 
    return n;
}

string Computer::findStern(char flotta, string bow) //metodo per trovare la prua
{
    int dir = chooseDirection();
    string lett= bow.substr(0,1);
    int lettN = convert(lett); 
    int num = stoi(bow.substr(1));
    if(dir ==1) //scorro in orizzontale
    {
        if(flotta =='C')
        {
            num = num+5;
        }
        else if(flotta == 'S')
        {
            num = num+3;
        }
    }
    else{
        //scorro in verticale
        if(flotta == 'C')
        {
            lettN = lettN+5;
        }
        else if(flotta == 'S')
        {
            lettN = lettN +3;
        }
        lett = lettN;
    }
    string stern = lett+ to_string(num);
    return stern;
}

void Computer::prepareGrid()
{
    //inserisco le corazzate
    int corazzata=1;
    while(corazzata<=3)
    {
        try{
            string bow = randomChoseInitialPos();
            string stern = findStern('C', bow);
            this->getPlayer().getGrid().insert(unità, bow, stern);
            corazzata ++;
        }
        catch(invalid_argument exception()){}
    }
    //inserisoc le navi
    int nave =1;
    while(nave<=3)
    {
        try{
            string bow = randomChoseInitialPos();
            string stern = findStern('S', bow);
            this->getPlayer().getGrid().insert(unità, bow, stern);
            nave++;
        }
        catch(invalid_argument exception()){}
    }
    //inserisoc i sottomarini
    int sottomarino =1;
    while(sottomarino <=2)
    {
        try{
            string bow = randomChoseInitialPos();
            this->getPlayer().getGrid().insert(unità, bow, bow);
            sottomarino++;
        }
        catch(invalid_argument exception()){}
    }
}



