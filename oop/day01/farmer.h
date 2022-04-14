#ifndef FARMER_H
#define FARMER_H
#include "employe.h"

enum FarmingType {
	Beekeeping = 1,
	CowBreeding,
	PigBreeding,
	SheepBreeding
};

class Farmer : Employe {
private:
	FarmingType _farming_type;
	int _profit;
public:
	Farmer (
		FarmingType farmingtype,
		int profit	
	);
};

#endif
