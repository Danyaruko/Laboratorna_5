#pragma once
#include <iostream>
#include "Fighters.h"

class Fight {
private: 
	Fighter A;
	Fighter B;
	int winner;
	int initiator;
public:
	Fight();
	~Fight();
	Fighter get_A();
	Fighter get_B();
	int get_winner();
	int get_initiator();
	friend class Fighter;
	void David_and_Goliath(Fighter fighter1, Fighter fighter2);
	void duel(Fighter fighter1, Fighter fighter2);
};