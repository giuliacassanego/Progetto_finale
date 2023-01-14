#ifndef NAVESUPPORTO_H
#define NAVESUPPORTO_H
#include <iostream>
#include "Army.h"
using namespace std;

class NaveSupporto : public Army
{
    public:
        NaveSupporto(string n);
        ~NaveSupporto();
private:

    int space;
    int shield;
    string name;
    
    void repair(string center);
    void shift(string center, string destination);
    int getShield();
};

#endif // NAVESUPPORTO_H
