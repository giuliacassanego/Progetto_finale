#include <stdio.h>

#include "Grid.h"

using namespace std;

int main(void)
{
	Grid grid;
	
	grid.setDefense(4,5,'E');
	
	cout << grid;
	
	
	return 0;
}
