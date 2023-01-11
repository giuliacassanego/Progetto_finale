#ifndef CORAZZATA_H
#define CORAZZATA_H

#include <vector>

class Corazzata
{
public:
    Corazzata(std::string n);
    ~Corazzata();

private:
int space;
int shield;
std::string name;

void fire(std::string origin, std::string target);
    

};

#endif // CORAZZATA_H
