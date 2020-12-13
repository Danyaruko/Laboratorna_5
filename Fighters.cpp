#include <iostream>
#include "Fighters.h"
#include "Fight.h"


Fighter::Fighter() {
	std::cout << "A new fighter emerges!\n";
	input();
}

Fighter::~Fighter() {
	std::cout << "Cleaning space...\n";
}

void Fighter::set_name() {
	std::cout << "The name is ";
	std::cin >> name;
}

void Fighter::set_health() {
	std::cout << "The health is ";
	std::cin >> health;
	phealth = &health;
}

void Fighter::set_damage() {
	std::cout << "The damage is ";
	std::cin >> damage;
	pdamage = &damage;
	std::cout << '\n';
}

std::string Fighter::get_name() {
	return name;
}

std::string Fighter::get_name(Fighter fighter) {
	return fighter.name;
}

int Fighter::get_health() {
	if (health <= 0) {
		std::cout << "This fighter has fallen\n";
	}
	return health;
}

int Fighter::get_health(Fighter fighter) {
	if (health <= 0) {
		std::cout << "This fighter has fallen\n";
	}
	return fighter.health;
}

int Fighter::get_damage() {
	return damage;
}

int Fighter::get_damage(Fighter fighter) {
	return fighter.damage;
}

void Fighter::input() {
	set_name();
	set_health();
	set_damage();
}

void Fighter::output() {
	std::cout << "The name is ";
	std::cout << name << '\n';
	std::cout << "The health is ";
	std::cout << health << '\n';
	std::cout << "The damage is ";
	std::cout << damage << '\n' << '\n';
}
