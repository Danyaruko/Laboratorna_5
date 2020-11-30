#include <iostream>
#include "Fighters.h"
#include "Fight.h"

int main() {
	Fighter a;
	a.output();
	Fighter b;
	b.output();
	Fight AB;
	AB.David_and_Goliath(AB.get_A(), AB.get_B());
	AB.duel(AB.get_A(), AB.get_B());
}