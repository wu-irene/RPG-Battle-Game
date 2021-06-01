#ifndef __LEVELEDMONSTER_HPP__
#define __LEVELEDMONSTER_HPP__
#include "LeveledCharacter.h"
#include "ICharacterEntity.h"

template<class TCharacter>
class LeveledMonster : public LeveledCharacter
{
private:
	ICharacterEntity _character;
public:
	double Hp = 100;
	double Exp = 50;
	double Power = 20;
	double Armor = 8;
	int GetLevel();
	double GetMaxHp();
	double GetMaxExp();
	double GetPower();
	double GetArmor();
	LeveledMonster(ICharacterEntity character);
};

#endif

