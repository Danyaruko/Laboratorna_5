#include <iostream>
#include "Fighters.h"
#include "Fight.h"


int main() {
	Fighter Fighter_one;

	Fighter_one.output();

	Fighter Fighter_two;

	Fighter_two.output();

	Fight One_and_two;

	One_and_two.David_and_Goliath(One_and_two.get_first_fighter(), One_and_two.get_second_fighter());
	One_and_two.duel(One_and_two.get_first_fighter(), One_and_two.get_second_fighter());
}