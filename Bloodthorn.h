#ifndef __BLOODTHORN_HPP__
#define __BLOODTHORN_HPP__
#include "Equipment.h"

class Bloodthorn : public Equipment
{
	Bloodthorn() : Equipment("Bloodthorn") {}
	double GetHp();
	double GetPower();
	double GetArmor();
	double GetPrice();

};

#endif