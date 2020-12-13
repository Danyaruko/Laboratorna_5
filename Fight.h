#pragma once
#include <iostream>
#include "Fighters.h"

class Fight {
private: 
	Fighter first_fighter;
	Fighter second_fighter;
	int winner;
	int initiator;

public:
	friend class Fighter;

	Fight();
	~Fight();

	Fighter get_first_fighter();
	Fighter get_second_fighter();
	int get_winner();
	int get_initiator();
	void David_and_Goliath(Fighter fighter1, Fighter fighter2);
	void duel(Fighter fighter1, Fighter fighter2);
};