#ifndef __GODZILLA_HPP__
#define __GODZILLA_HPP__
#include "CharacterEntity.h"

class Godzilla : public CharacterEntity
{
public:
	Godzilla() : CharacterEntity("Godzilla") {}
	double GetMaxHp();
	double GetMaxExp();
	double GetPower();
	double GetArmor();
	double GetPrice();
};

#endif
