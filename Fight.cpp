#include <iostream>
#include "Fight.h"
#include "Fighters.h"

Fight::Fight() {
	std::cout << "Prepare for the fight!\n";
}
Fight::~Fight() {
	std::cout << "Cleaning up the battlefield...\n";
}

void Fight::David_and_Goliath(Fighter fighter1, Fighter fighter2) {
	std::cout << "The one with weaker health is the first to attack\n";
	if (fighter2.get_health() >= fighter1.get_health()) initiator = 1;
	else initiator = 2;
}
void Fight::duel(Fighter fighter1, Fighter fighter2) {
	std::cout << "Fight is about to start!\n";
	std::cout << "First fighter is " << fighter1.get_name() << '\n';
	std::cout << "Second fighter is " << fighter2.get_name() << '\n';
	std::cout << "Let the battle begin!\n\n";
	while ((fighter1.get_health() > 0) && (fighter2.get_health() > 0)) {
		if (initiator == 1) {
			fighter2.health = fighter2.get_health() - fighter1.get_damage();
			std::cout << "The first fighter attacks the opponent for " << fighter1.get_damage() << '\n';
			if (fighter2.get_health() <= 0) {
				std::cout << "The second fighter has fallen breathless. Battle is over\n";
				winner = 1;
				break;
			}
			fighter1.health = fighter1.get_health() - fighter2.get_damage();
			std::cout << "The second fighter attacks the opponent for " << fighter2.get_damage() << '\n';
			if (fighter2.get_health() <= 0) {
				std::cout << "The first fighter has fallen breathless. Battle is over\n";
				winner = 2;
				break;
			}
		}
		else {
			fighter1.health = fighter1.get_health() - fighter2.get_damage();
			std::cout << "The second fighter attacks the opponent for " << fighter2.get_damage() << '\n';
			if (fighter1.get_health() <= 0) {
				std::cout << "The first fighter has fallen breathless. Battle is over\n";
				winner = 2;
				break;
			}
			fighter2.health = fighter2.get_health() - fighter1.get_damage();
			std::cout << "The first fighter attacks the opponent for " << fighter1.get_damage() << '\n';
			if (fighter2.get_health() <= 0) {
				std::cout << "The second fighter has fallen breathless. Battle is over\n";
				winner = 1;
				break;
			}
		}
		if (fighter1.get_health() <= 0) {
			std::cout << "The first fighter has fallen breathless. Battle is over\n";
			winner = 1;
			break;
		}
		if (fighter2.get_health() <= 0) {
			std::cout << "The second fighter has fallen breathless. Battle is over\n";
			winner = 2;
			break;
		}
	}
	if (winner == 1) {
		std::cout << "Winner`s name is " << fighter2.get_name() << '\n';
	}
	else {
		std::cout << "Winner`s name is " << fighter1.get_name() << '\n';
	}
}
int Fight::get_initiator() {
	return initiator;
}
int Fight::get_winner() {
	return winner;
}
Fighter Fight::get_A() {
	return A;
}
Fighter Fight::get_B() {
	return B;
}