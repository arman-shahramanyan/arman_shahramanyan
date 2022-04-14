#ifndef HOMOSAPIENS_H
#define HOMOSAPIENS_H
#include <string>
#include "human.h"

using namespace std;

enum Nationality {
	armenian = 1,
	russian,
	georgian,
	franchman,
	arabian
};

enum Religia {
	Christianity = 1,
	Islam,
	Buddhism,
	Hinduism
};

class HomoSapiens : Human {
	private:
		string _firstname;
		string _lastname;
		Nationality _nationality;
		Religia _religia;
		string _address;
	public:
		HomoSapiens (
			string firstname,
		       	string lastname,
		       	Nationality nationality,
		       	Religia religia,
		      	string address
		);
};

#endif
