#ifndef SOTTOMARINO_H
#define SOTTOMARINO_H
#include <iostream>

using namespace std;

class Sottomarino
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
