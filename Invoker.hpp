#ifndef __INVOKER_HPP__
#define __INVOKER_HPP__
#include "CharacterEntity.h"

class Invoker : public CharacterEntity
{
public:
	Invoker() : CharacterEntity("Invoker") {}
	double GetMaxHp();
	double GetMaxExp();
	double GetPower();
	double GetArmor();
	double GetPrice();
};

#endif
