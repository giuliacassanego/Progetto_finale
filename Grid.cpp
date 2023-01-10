//Cassanego Giulia

#include <ostream>

#include "Grid.h"

using namespace std;

Grid::Grid()
{
	//lettere
	char c = 65;
	for(int j = 0; j < 12; j++)
	{
		defense[0][j] = c;	//prima colonna
		attack[0][j] = c;
		c++;
	}
	
	//numeri
	c = 49;
	for (int i = 1; i < 13; i ++)
	{
		//while (c < 58)
		//{
			defense[i][12] = c;	//ultima riga
			attack[i][12] = c;
			c++;
		//}
		//defense[i][12] = c - 48;	//ultima riga
		//attack[i][12] = c - 48;
		//c++;
	}
	
	//all'inizio tutti spazi
	for(int i = 1; i < 13; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			defense[i][j] = ' ';
			attack[i][j] = ' ';
		}
	}
	
	defense[0][12] = ' ';
	attack[0][12] = ' ';
}

char Grid::getDefense(int i, int j)
{
	return defense[i][j];
}

char Grid::getAttack(int i, int j)
{
	return attack[i][j];
}

void Grid::setDefense(int i, int j, char c)
{
	if (c != 67 && c != 69 && c != 83)	//C, E, S
	{
		cout << "error: Valore inserito non trovato";
	}
	defense[i][j] = c;
}

void Grid::setAttack(int i, int j, char c)
{
	if (c != 79 && c != 88 && c != 89)	//O, X, Y
	{
		cout << "error: Valore inserito non trovato";
	}
	attack[i][j] = c;
}

/*void Grid::insert(unità, int i, int j)
{
	if(unità == corazzata)
	{
		for(index = i - 2; index <= i + 2; index++)
			setDefense(i, j, C);
	}
	
	if(unità == support)
	{
		for(index = i - 1; index <= i + 1; index++)
			setDefense(i, j, S);
	}
	
	if(unità == explorer)
	{
		setDefense(i, j, E);
	}
}*/

/*void Grid::clear()
{
	if(nave.sink)
	{
		nave.posizione = ' ';
	}
}*/

void Grid::deleteSonar()	//cerco Y e riporto a carattere iniziale
{
	for(int i = 1; i < 13; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			if(attack[i][j] == 'Y')
			{
				attack[i][j] = ' ';
			}
		}
	}
}

ostream& operator<< (ostream& os, Grid grid)
{
	os << "Griglia di difesa" << endl;
	//griglia difesa
	for (int j = 0; j < 13; j++)
	{
		for (int i = 0; i < 13; i++)
		{
			os << grid.getDefense(i, j) << " | ";
		}
		os << endl;	// << "-------------";
	}
	os << endl << "Griglia di attacco" << endl;
	
	//griglia attacco
	for (int j = 0; j < 13; j++)
	{
		for (int i = 0; i < 13; i++)
		{
			os << grid.getAttack(i, j) << " | ";
		}
		os << endl;	// << "-------------" << endl;
	}
	
	return os;	//not sure
}

