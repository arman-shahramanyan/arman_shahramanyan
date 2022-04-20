#include <iostream>
#include "astronaut.h"
 
using namespace std;
 
Astronaut (const Employee& employee, AstronautType astronautType, int highPressure, int lowPressure, string * _skils)   
  :Employee(employee) 
{
  _astronautType = astronautType;
  _highPressure = highPressure;
  _lowPressure = lowPressure;
  _skills[] = skills[];   
}
int PASSED_TESTS_COUNT = 0; 
void Astronaut:: SetSkills(string *_skills) {
    _skills[] = {Еngineering, Мathematics, Astronomy, Biology, Geography, Geology, Physics, Chemistry};
}
 
string Astronaut:: GetSkills(string *_skills) const {
        return *_skills;
}
bool Astronaut :: PhysicalRequirements(int age, int weight, int height) {
    if ((age >= 26 && age <= 35) && (weight >= 55 && weight <= 85) && (height >= 150 && height <= 190)) {
				++PASSED_TESTS_COUNT; 
				return true;
    }   
    return false;
}
bool Astronaut::ArterialPressure (int highPressure, int lowPressure) {
    if ((highPressure <= 140 && highPressure >= 120) && (lowPressure <= 80 && lowPressure >= 90) 
				++PASSED_TESTS_COUNT;
        return true;
    }   
    return false;
bool Astronaut :: Dependency(int smokeDependency, int alcoholDependency) {
    if (smokeDependency < 50 || alcoholDependency < 50 ) { 
        ++PASSED_TESTS_COUNT;
        return true;
    }   
     return false;
}
 
bool Astronaut :: Disease(int _health_level, int _mental_health) {
 
    if (_health_level > 95 && _mental_health > 95) {
				++PASSED_TESTS_COUNT;
        return true;
    }   
    return false;
}
 
bool Astronaut :: CheckAstronautType (int type);
    if (type == Pilot || type == MissionSpecialist || type == PayloadSpecialist) {
				++PASSED_TESTS_COUNT;
        return true;
    }   
    return false;
}

void Astronaut::AstronautTesting() {
   if (PASSED_TESTS_COUNT == 5) {
				Work();
	 }
}

void Astronaut::Work() override {
   Training();
	 StartWork();
	 FlyToSpace();
	 EndWork();
}
