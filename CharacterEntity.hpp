#ifndef __CHARACTERENTITY_HPP__
#define __CHARACTERENTITY_HPP__
#include <string>
#include "ICharacterEntity.h"

using namespace std;

class CharacterEntity : ICharacterEntity
{
private:
	string _name;

protected:
	CharacterEntity(string name);

public:
	string GetName();
	int GetLevel();
	virtual double GetMaxHp() = 0;
	virtual double GetMaxExp() = 0;
	virtual double GetPower() = 0;
	virtual double GetArmor() = 0;
	virtual double GetPrice() = 0;
	string Info();
};

#endif
