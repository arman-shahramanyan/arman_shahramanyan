using namespace std;
#ifndef PROGRAMMER
#define PROGRAMMER

#include "employee.h"
#include "enums.h"

class Programmer:Employee {
private:
    ProgrammingLanguage  _programmingLanguage;
    Company _company;
	  SkillLevel _skillLevel;
	  Specialist _specialist;
public:
   	Programmer(const Employee& employee, ProgrammingLanguage programmingLanguage, Company company, SkillLevel level, Specialist specialist); 
    string WriteCode(string code);
    bool TestCode();
		void CodeReview();
	  void CorrectCodeErrors();
};

#endif

