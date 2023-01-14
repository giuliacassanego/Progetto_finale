//Cassanego Giulia 2032560

#include <ostream>
#include <stdio.h>

#include "Grid.h"

using namespace std;

Grid::Grid()
{
	//lettere
	char c = 65;
	for(int j = 0; j < 12; j++)
	{
		while (c == 74 || c == 75)	//escludo J e K
		{
			c++;
		}
		defense[0][j] = c;	//prima colonna
		attack[0][j] = c;
		c++;
	}
	
	//numeri
	c = 49;
    int i = 1;
    while (c < 58)
    {
        defense[i][12] = c;	//ultima riga
        attack[i][12] = c;
        c++;
        i++;
    }
    defense[10][12] = "10";
    attack[10][12] = "10";
    defense[11][12] = "11";
    attack[11][12] = "11";
    defense[12][12] = "12";
    attack[12][12] = "12";
	
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

string Grid::getDefense(int i, int j)
{
	return defense[i][j];
}

string Grid::getAttack(int i, int j)
{
	return attack[i][j];
}

void Grid::setDefense(int i, int j, char c)
{
	if (c != 67 && c != 69 && c != 83)	//C, E, S
	{
		throw invalid_argument("error: Invalid letter entered"); 
	}
	defense[i][j] = c;
}

void Grid::setAttack(int i, int j, char c)
{
	if (c != 79 && c != 88 && c != 89)	//O, X, Y
	{
		throw invalid_argument("error: Invalid letter entered"); 
	}
	attack[i][j] = c;
}



int Grid::convert(string c)
{
    int n;
    if(c == "A" || c == "a")
    {
        n = 0;
    }
    else if(c == "B" || c == "b")
    {
        n = 1;
    }
    else if(c == "C" || c == "c")
    {
        n = 2;
    }
    else if(c == "D" || c == "d")
    {
        n = 3;
    }
    else if(c == "E" || c == "e")
    {
        n = 4;
    }
    else if(c == "F" || c == "f")
    {
        n = 5;
    }
    else if(c == "G" || c == "g")
    {
        n = 6;
    }
    else if(c == "H" || c == "h")
    {
        n = 7;
    }
    else if(c == "I" || c == "i")
    {
        n = 8;
    }
    else if(c == "L" || c == "l")
    {
        n = 9;
    }
    else if(c == "M" || c == "m")
    {
        n = 10;
    }
    else if(c == "N" || c == "n")
    {
        n = 11;
    }
    return n;
}

bool Grid::isFree(int i, int j)
{
	if(getDefense(i, j) == " ")
		return true;
}

void Grid::insert(unità, string bow, string stern)	//bow=prua, stern=poppa
{
	int j = convert(bow.substr(0,1));	//lettera
	int i = stoi(bow.substr(1));	//numero
	
	int y = convert(stern.substr(0,1));
	int x = stoi(stern.substr(1));
	
	if(i < 1 || x > 12 || j < 0 || y > 11 || (x-i) < 0 || (y-j) < 0)	//boundaries check
	{
		throw invalid_argument("error: Invalid position entered");
	}
	else if(j == y)	//orizzontale
	{
		for(int index = i; index < x; index++)
		{
			if(isFree(index, j))	//controllo sia libero
			{
				setDefense(index, j, 'C');	//lettera unità
			}
			else
			{
				throw invalid_argument("error: Position already occupied");
			}
		}
		unità.center_i = (i + x)/2;
		unità.center_j = j;
	}
	else if(i == x)	//verticale
	{
		for(int index = j; index < y; index++)
		{
			if(isFree(i, index))
			{
				setDefense(i, index, 'C');	//lettera unità
			}
			else
			{
				throw invalid_argument("error: Position already occupied");
			}
		}
		unità.center_i = i;
		unità.center_j = (j + y)/2;
	}
	else
	{
		throw invalid_argument("error: Invalid position entered");
	}
}

void Grid::clear()
{
	if(unità == explorer)
	{
		setDefense(center_i, center_j, ' ');
	}
	else if(isFree(center_i + 1, center_j))	//nave verticale
	{
		for(int index = center_j - ((space-1)/2); index <= center_j + ((space-1)/2); index++)
			setDefense(center_i, index, ' ');
	}
	else if(isFree(center_i, center_j + 1))	//nave orizzontale
	{
		for(int index = center_i - ((space-1)/2); index <= center_i + ((space-1)/2); index++)
			setDefense(index, center_j, ' ');
	}
}

void Grid::deleteSonar()	//cerco Y e riporto a carattere iniziale
{
	for(int i = 1; i < 13; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			if(attack[i][j] == "Y")
			{
				attack[i][j] = "Y";
			}
		}
	}
}

char Grid::reverseConvert(int n)
{
    char c;
    switch(n)
    {
            case 0:
                return c ='A';
                break;
            case 1:
                return c ='B';
                break;
            case 2:
                return c ='C';
                break;
            case 3:
                return c ='D';
                break;
            case 4:
                return c ='E';
                break;
            case 5:
                return c ='F';
                break;
            case 6:
                return c ='G';
                break;
            case 7:
                return c ='H';
                break;
            case 8:
                return c ='I';
                break;
            case 9:
                return c ='L';
                break;
            case 10:
                return c ='M';
                break;
            case 11:
                return c ='N';
                break;
            default:
                throw invalid_argument("error: Invalid number entered");
                break;
    }
}

ostream& operator<< (ostream& os, Grid grid)
{
	os << endl << "Griglia di difesa" << endl;
	//griglia difesa
	for (int j = 0; j < 12; j++)
	{
		for (int i = 0; i < 13; i++)
		{
			os << grid.getDefense(i, j) << " | ";
		}
		os << endl;	// << "-------------";
	}
	for (int i = 0; i < 10; i++)	//stampo ultima riga, solo numeri senza |
	{
		os << grid.getDefense(i, 12) << "   ";
	}
	for (int i = 10; i < 13; i++)
	{
		os << grid.getDefense(i, 12) << "  ";
	}
	os << endl << endl << "Griglia di attacco" << endl;
	
	//griglia attacco
	for (int j = 0; j < 12; j++)
	{
		for (int i = 0; i < 13; i++)
		{
			os << grid.getAttack(i, j) << " | ";
		}
		os << endl;	// << "-------------" << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		os << grid.getAttack(i, 12) << "   ";
	}
	for (int i = 10; i < 13; i++)
	{
		os << grid.getAttack(i, 12) << "  ";
	}
	
	return os << endl;
}
