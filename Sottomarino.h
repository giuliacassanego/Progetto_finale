#ifndef SOTTOMARINO_H
#define SOTTOMARINO_H
#include <iostream>
#include "Army.h"
using namespace std;

class Sottomarino : public Army
{
public:
    Sottomarino(string name);
    ~Sottomarino();
private:
    int space;
    int shield;
    string name;
    
    void scan(string center);
    void shift(string destination);
        
int getShield();

};

#endif // SOTTOMARINO_H
