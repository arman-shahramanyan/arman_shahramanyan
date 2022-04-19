#include <iostream>
#include "homo_sapiens.h"

using namespace std;

HomoSapience::HomoSapience(const Human& human, Religion religion, Race race, Nationality nationality, string surname, string fatherName, int patienceLevel, int intelectLevel)
    :Human(human)
{
    _surname = surname;
    _fatherName = fatherName;
	_religion = religion; 
    _race = race; 
    _nationality = nationality;
    _patienceLevel = patienceLevel;
	_intelectLevel = intelectLevel;
}

void HomoSapience::GoToGym() {
    if (_health_level < 100) { 
         ++_health_level;
    }
    --_weight;
    _thirstDegree -= 3;
    ++_hungerDegree;
    ++_tirednessDegree;
}

void HomoSapience::Smoke (int smokeDependecy = 0) {
       	heltlevel--;
	smokeDependency++;
}
int HomoSapience::GetSmokeDependency () {
	return _smokeDependency;
}
