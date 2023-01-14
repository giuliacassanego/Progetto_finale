#ifndef CORAZZATA_H
#define CORAZZATA_H

#include <vector>
#include <iostream>
#include "Army.h"
using namespace std;

class Corazzata : public Army
{
public:
    Corazzata();
    ~Corazzata();

private:
    int space;
    int shield;
    string name;

    void fire(string origin, string target);
    int getShield();
    void checkAffondato();
        

};

#endif // CORAZZATA_H

