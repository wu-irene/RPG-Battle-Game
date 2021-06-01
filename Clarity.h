#ifndef __CLARITY_HPP__
#define __CLARITY_HPP__
#include "Consumable.h"

class Clarity : public Consumable
{
	Clarity() : Consumable("Clarity") {}
	double GetHp();
	double GetExp();
	double GetPrice();

};

#endif