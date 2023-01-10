#ifndef CORAZZATA_H
#define CORAZZATA_H

#include <vector>

class Corazzata
{
public:
    Corazzata();
    ~Corazzata();

private:
int space;
int shield;
    void fire(std::string origin, std::string target);
    

};

#endif // CORAZZATA_H
