#include "human.h"

void Human::Walk () {
	++_hunger;
	_thirst += 2; 
	if (_health < 100) {
	    ++_health;
	}
}
void Eat (Food food, int hunger = 0, int health = 100) {
	switch (food) {
	 	case burger:
		case pizza:
			hunger -= 5;
			health -= 2;
			break;
		case fish:
		case meat:
		case vegetable:
			hunger -= 4;
			health += 2;
			break;
	}
}
void Drink (Drink drink, int thirst = 0, int health = 100) {
	switch (drink) {
		case water:
			thirst -= 5;
			break;
		case milk:
		case tea:
		case coffee:
			thirst -= 3;
			if (health < 100) {
			    health++;
			}
			break;
		case bear:
		case vodka:
		case viski:
			thirst -= 2;
			health -= 5;
			break;
	}
}

int main () {
return 0;
}
