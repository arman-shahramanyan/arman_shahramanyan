#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "homosapiens.h"

class Employe : HomoSapiens {
private:
	int _work_time;
	int _salaty;
	int _bonus;
public:
	Employe (int work_time, int salary, int bonus);
};


#endif
