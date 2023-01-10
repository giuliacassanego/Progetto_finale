//Cassanego Giulia

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	int num_corazzate;
	int num_support;
	int num_explorer;

	
public:
	Player();
	
	//member functions
	void setCor(int n);
	void setSup(int n);
	void setExp(int n);
	int getCor();
	int getSup();
	int getExp();
};

#endif