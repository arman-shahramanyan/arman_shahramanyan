#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "date.h"
enum Gender {
  male = 1,
  female
};
enum HairColor {
  black = 1,
  blonde,
  brown,
  white,
  green,
  red,
  blue
};
enum EyeColor {
 _black = 1,
 _brown,
 _blue,
 _gray,
 _green
};
enum Food {
  burger = 1,
  pizza,
  fish,
  vegetable,
  meat
};
enum Drink {
  water = 1,
  milk,
  bear,
  vodka,
  viski,
  juice,
  tea,
  coffee
};

class Human
{
private:
	Date _birth_day;
	Gender _gender;
	HairColor _hair_color;
	EyeColor _eye_color;
	bool _mother;
	bool _father;
	int _hunger;
	int _thirst;
	int _health;
public:
	Human(Date _birth_day, Gender _gender, HairColor _hair_color, EyeColor _eye_color, bool _mother, bool _father, int _hunger = 0, int _thirst = 0, int _health = 100);

	void Walk ();
	void Eat (Food food, int hunger = 0, int health = 100);
	void Drink (Drink drink, int thirst = 0, int health = 100);
	std::string Speak;
};

#endif
