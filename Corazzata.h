#ifndef CORAZZATA_H
#define CORAZZATA_H

#include <vector>
#include <iostream>

using namespace std;

class Corazzata 
{
private:
    int space;
    int shield;
    string name;
    string center;
    
    
    public:
    Corazzata();
    ~Corazzata();



    void fire(string origin, string target);
    int getShield();
    void checkAffondato();
    void setCenter(int i, int j);
    string getCenter();
        

};

#endif // CORAZZATA_H
