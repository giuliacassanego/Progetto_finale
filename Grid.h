//Cassanego Giulia 2032560

#ifndef GRID_H
#define GRID_H

#include <iostream>
using namespace std;

class Grid
{
private:
	string defense[13][13];
	string attack[13][13];

public:
	Grid();
	string getDefense(int i, int j);
	string getAttack(int i, int j);	//da capire se entrambi e se con i, j
	void setDefense(int i, int j, char c);
	void setAttack(int i, int j, char c);
    int convert(string c);
	
	void insert(unità, string poppa, string prua); //fare con template(?) per gestire diversi tipi unità
//	void clear();
	void deleteSonar();
};

std::ostream& operator<< (std::ostream& os, Grid grid);

#endif	//GRID_H
