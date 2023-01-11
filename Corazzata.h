#ifndef CORAZZATA_H
#define CORAZZATA_H

#include <vector>
using namespace std;
class Corazzata
{
public:
    Corazzata(std::string n);
    ~Corazzata();

private:
int space;
int shield;
string name;

void fire(std::string origin, std::string target);
    

};

#endif // CORAZZATA_H
