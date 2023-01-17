/**
 * @author Giulia Cassanego
 * @brief Definitions of functions of BattleShip
 */

#include <iostream>

#include "BattleShip.h"
#include "Player.h"

using namespace std;

void BattleShip::action(Coordinates target)
{
	cout << "Battleship action" << endl;
	bool hit = player->hitOpponent(target);
    
	cout << "hit: " << hit << endl;
	if(hit)
	{
		player->getGrid().getAttack(target).setHit();
	}
	else
	{
		player->getGrid().getAttack(target).setMiss();	
	}
}