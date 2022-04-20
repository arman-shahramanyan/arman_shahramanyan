#include <iostream>
#include "human.h"

using namespace std;

Human::Human(Gender gender, EyeColour eye_colour, HairColour hair_colour, Human* father, Human* mother, int health_level, int tirednessDegree, int mental_health, int height, int weight, int hungerDegree, int thirstDegree, int highPressure, int lowPressure, int alcoholDependency, bool isBreathing = true) {
	_gender = gender;
	_eye_colour = eye_colour;
  _hair_colour = hair_colour;
  _father = father;
  _mother = mother;
  _health_level = health_level;
	_tirednessDegree = tirednessDegree;
  _mental_health = mental_health;
  _height = height;
  _weight = weight;
	_hungerDegree = hungerDegree; 
	_thirstDegree = thirstDegree;
	_highPressure = highPressure;
	_lowPressure = lowPressure;
	_isBreathing = isBreathing;
}

void Human::Eat(Food food) {
  if ((food == banana || food == apple || food == yogurt || food == honey) && _health_level < 100) {
    ++_health_level;
	_hungerDegree -= 3; 
  }

  if ((food == chips || food == pizza || food == burger) && _health_level < 100) {
    --_health_level;
	_hungerDegree -= 5;
  }
	++_weight;
}

void Human::Drink(Drinks drink) {
  if (drink == alcohol) {
    --_health_level;
    ++_alcoholDependency;
  }

  if (drink == milk || drink == water || drink == tea || drink == juice) {
    _health_level = (_health_level >= 99 && _health_level <= 100) ? 100 : ++_health_level;
	_thirstDegree -= 3;
  }
}

void Human::Sleep(int tirednessDegree, int hour) {
	if (hour < 8) {
		--_mental_health;
		--_tirednessDegree;
	}
	_tirednessDegree = 0;
}

void Joy() {
	++_mental_health;
	_health_level += 0.2;
}

void Walk() {
	if (_health_level < 100) {
		 ++_health_level;
	}
	_weight -= 0.2;
	_thirstDegree -= 2;
	++_hungerDegree;
	++_tirednessDegree;
}

void Human::SetEyeColour(EyeColour eye_colour) {
  if (eye_colour == brown || eye_colour == black || eye_colour == blue || eye_colour == green || eye_colour == red) {
    _eye_colour = eye_colour;
  } else {
    _eye_colour = black;
  }
}

HairColour Human::GetHairColour() const {
  return _hair_colour;
}

void Human::SetHairColor(HairColour hair_colour) {
  if (hair_colour == Brown || hair_colour == Black || hair_colour == Blonde || hair_colour == White ) {
    _hair_colour = hair_colour;
  } else {
    _hair_colour = White;
  }
}

Gender Human::GetGender() const {
  return _gender;
}

Human* Human::GetFather() const {
  return _father;
}

Human* Human::GetMother() const {
  return _mother;
}

void Die () {
  if (_health_level == 0) {
      _isBreathing = false;				
  }
}

void Human::SetHealthLevel(int health_level) {
  _health_level = health_level;
}

int Human::GetHealthLevel() {
	return _health_level;
}

void Human::SetTirednessDegree (int tirednessDegree) {
	_tirednessDegree = tirednessDegree; 
}

int Human::GetTrednessDegree () const {
  return _tirednessDegree;
}
void Human::SetHighPressure(int highPressure) {
	_highPressure = highPressure;
}
int Human::GetHighPressure() const {
	return _highPressure;
}
void Human::SetLowPressure(int lowPressure) {
	_lowPressure = lowPressure;
}
int Human::GetLowPressure() const {
	return _lowPressure;
}
void Human::SetAlcoholDependency(int alcoholDependency = 0) {
	_alcoholDepemdemcy = alcoholDependency;
}
int Human::GetAlcoholDependency() {
	return _alcoholDependency;
}
