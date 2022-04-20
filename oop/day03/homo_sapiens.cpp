#include <iostream>
#include "homo_sapiens.h"

using namespace std;

HomoSapience::HomoSapience(const Human& human, Religion religion, Race race, Nationality nationality, string surname, string fatherName, int patienceLevel, int intelectLevel, int smokeDependency)
    :Human(human)
{
    _surname = surname;
    _fatherName = fatherName;
	  _religion = religion; 
    _race = race; 
    _nationality = nationality;
    _patienceLevel = patienceLevel;
	  _intelectLevel = intelectLevel;
		_smokeDependency = smokeDependency;
}

void HomoSapience::GoToGym() {
    if (_health_level < 100) { 
         ++_health_level;
    }
    --_weight;
    _thirstDegree -= 3;
    ++_hungerDegree;
    _tirednessDegree += 2;
}

void HomoSapience::Smoke (int smokeDependecy = 0) {
  _health_level--;
	smokeDependency++;
}

int HomoSapience::GetSmokeDependency () const {
	return _smokeDependency;
}

void HomoSapience::GoToParty() {
  Joy();
	Dance();
	Drink(Drink _drink);
	Eat(Food _food);
}

void HomoSapience::ListenToMusic() {
  if (_mental_health < 100) { 
      ++_mental_health;
	}
}

void HomoSapience::Read() {
  ++_intelectLevel;
  if (_mental_health < 100) { 
      _mental_health += 0.2;
	}
}

void HomoSapience::SetSmokeDependency(int smokeDependency) {
  _smokeDependency = smokeDependency;
}

void HomoSapience::Relax() {
  _tirednessDegree -= 3;
}

