#ifndef __TANGO_HPP__
#define __TANGO_HPP__
#include "Consumable.h"

class Tango : public Consumable
{
	Tango() : Consumable("Tango") {}
	double GetHp();
	double GetExp();
	double GetPrice();

};

#endif