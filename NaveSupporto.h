#ifndef NAVESUPPORTO_H
#define NAVESUPPORTO_H
#include <iostream>

using namespace std;

class NaveSupporto 
{
    private:

    int space;
    int shield;
    string name;
    
    
    public:
        NaveSupporto(string n);
        ~NaveSupporto();

    
    void repair(string center);
    void shift(string center, string destination);
    int getShield();
};

#endif // NAVESUPPORTO_H
