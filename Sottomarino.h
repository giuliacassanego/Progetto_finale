#ifndef SOTTOMARINO_H
#define SOTTOMARINO_H
#include <iostream>

using namespace std;

class Sottomarino 
{
 private:
    int space;
    int shield;
    string name;   
    
    
    
    public:
    Sottomarino(string name);
    ~Sottomarino();

    void scan(string center);
    void shift(string destination);
        
int getShield();

};

#endif // SOTTOMARINO_H
