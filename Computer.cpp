//Angelica Zonta 2032570

#include "Computer.h"
\
Computer::Computer(){}

/*Computer::~Computer()
{
    
}
 * */
 
int Computer::randomChoseNavalUnit()
{
    srand(time(NULL));
    int n = rand()%3+1; //numero casuale da 1 a 3
    return n;
}

std::string Computer::randomChosePosition()
{
    std::string s;
    srand(time(NULL));
    
    char pos =rand()%78+65; //scelgo una lettera casulamente con codice ascii: da A a N;;
   
    
    int n = rand()%12+1; ///scelto la posizione nella griglia da 1 a 12
    s = pos+n;
    return s;
       
}



