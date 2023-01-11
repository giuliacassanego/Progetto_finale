//Cassanego Giulia

#ifndef GRID_H
#define GRID_H

#include <iostream>

class Grid
{
private:
	char defense[13][13];
	char attack[13][13];
	
	
public:
	Grid();
	
	//member functions
	char getDefense(int i, int j);
	char getAttack(int i, int j);	//da capire se entrambi e se con i, j
	void setDefense(int i, int j, char c);
	void setAttack(int i, int j, char c);
	
	void position(String s);
//	void insert(unità, int i, int j); //fare con template(?) per gestire diversi tipi unità
//	void clear();
	void deleteSonar();
};

//helper function
std::ostream& operator<< (std::ostream& os, Grid grid);

#endif 