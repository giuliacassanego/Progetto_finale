#ifndef CORAZZATA_H
#define CORAZZATA_H

#include <vector>
#include <iostream>

using namespace std;

class Corazzata
{
public:
    Corazzata(string n);
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

