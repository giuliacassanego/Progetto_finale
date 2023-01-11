#ifndef NAVESUPPORTO_H
#define NAVESUPPORTO_H
#include <iostream>
using namespace std;

class NaveSupporto
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

};

#endif // NAVESUPPORTO_H
