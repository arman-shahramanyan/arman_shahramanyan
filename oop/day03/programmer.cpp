#include <iostream>
#include "programmer.h"

using namespace std;
Programmer :: Programmer(const Employee& employee, ProgrammingLanguage programmingLanguage, Company company, SkillLevel skillLevel, Specialist specialist);
				:Employee(employee)
{
  	_ProgrammingLanguage = ProgrammingLanguage;
 		_company = company;
		_skillLevel = skillLevel;
		_specialist = specialist;
}

void Employee::Work() override {
  _freeFromWork = false;
  int time = 0;
  while (time <= _workTime) {
				if (time == _workTime / 2) {
				    BreakTime();
				    ++time;
				    continue;
        }
        ++time;
        EndWork();
  }
}

string Programmer::WriteCode(string code){
  return code;
 }

bool Programmer::TestCode(string code){
  if (codeIsCorrect()) {
				return true;
  }
  return false;
}

void Programmer::CodeReview(){
  if(TestCode()){
				_mental_level++;
				Joy();
  }
  else {
				Smoke();
				Drink(coffee);
				GetAngry();
				CorrectCodeErrors();
  }
} 
void SetExperienceLevel(SkillLevel skillLevel) {
  if(experience >= 0 && experience <= 1) {
        _skillLevel = Internal;
  } else if (experience > 1 && experience <= 3) { 
	_skillLevel = Junior;
  } else if (experience > 3 && experience <= 6) { 
        _skillLevel = Middle;
  } else if(experience > 6) { 
        _skillLevel = Senior;
  }
  }

