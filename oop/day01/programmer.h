#ifndef PROGRAMMER_H
#define PROGRAMMER_H
#include "employe.h"

enum WorkPlace {
	Instigate_Mobile = 1,
	Synergy,
	CapitalSoft,
	Google,
	Microsoft,
	Amazon,
	Meta,
};
enum Language {
	CPlusPlus = 1,
	CSharp,
	Java,
	Python,
	JavaScript,
	C
};
enum SpecialistLevel {
	Junior = 1,
	Middle,
	Senior
};

class Programmer : Employe{
private:
	WorkPlace _work_place;
	Language _language;
	SpecialistLevel _level;
public:
	Programmer (
		WorkPlace workplace,
		Language language,
		SpecialistLevel level	
	);
};

#endif
