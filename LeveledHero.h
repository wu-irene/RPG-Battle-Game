#ifndef __LEVELEDHERO_HPP__
#define __LEVELEDHERO_HPP__
#include "LeveledCharacter.h"
#include "ICharacterEntity.h"

template<class TCharacter>
class LeveledHero : public LeveledCharacter
{
private:
	ICharacterEntity _character;
public:
	double Hp = 300;
	double Exp = 150;
	double Power = 60;
	double Armor = 2;
	int GetLevel();
	double GetMaxHp();
	double GetMaxExp();
	double GetPower();
	double GetArmor();
	LeveledHero(ICharacterEntity character);
};

#endif
