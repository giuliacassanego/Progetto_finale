//Cassanego Giulia
#include <iostream>
#include <stdexcept>

#include "Player.h"

Player::Player()
{
	num_corazzate = 3;
	num_support = 3;
	num_explorer = 2;
}

void Player::setCor(int n)
{
	if (n > 3)	//3 o 4?
	{
		throw std::invalid_argument("Invalid number");
	}
	num_corazzate = n;
}
	
void Player::setSup(int n)
{
	if (n > 3)
	{
		throw std::invalid_argument("Invalid number");
	}
	num_support = n;
}
	
void Player::setExp(int n)
{
	if (n > 2)
	{
		throw std::invalid_argument("Invalid number");
	}
	num_explorer = n;
}
	
int Player::getCor()
{
	return num_corazzate;
}
	
int Player::getSup()
{
	return num_support;
}
	
int Player::getExp()
{
	return num_explorer;
}