//Angelica zOnta 2032570
#ifndef REPLAY_H
#define REPLAY_H

#include <iostream>
#include "GamePlay.h"

using namespace std;

class Replay{

private:

GamePlay game;
string fileName;
    
public:

    Replay(const string &input, const string output); //gli passo come parametri gli argoemnti su riga di comando
    Replay(const string &input);

    ~Replay(); //distruttore per l'oggetto

        
}



#endif