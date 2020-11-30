#pragma once
#include <iostream>
#include <string>

class Fighter {
private:
	std::string name;
	int health;
	int* phealth;
	int damage;
	int* pdamage;
public:
	friend class Fight;
	Fighter();
	~Fighter();
	void set_name();
	void set_health();
	void set_damage();
	std::string get_name();
	std::string get_name(Fighter fighter);
	int get_health();
	int get_health(Fighter fighter);
	int get_damage();
	int get_damage(Fighter fighter);
	void input();
	void output();

};