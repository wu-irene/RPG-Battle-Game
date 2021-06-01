#include "LeveledHero.h"
using namespace std;

template<class TCharacter>
int LeveledHero<TCharacter>::GetLevel()
{
	return _character.GetLevel() + 1;
}

template<class TCharacter>
double LeveledHero<TCharacter>::GetMaxHp()
{
	return _character.GetMaxHp() + Hp;
}

template<class TCharacter>
double LeveledHero<TCharacter>::GetMaxExp()
{
	return _character.GetMaxExp() + Exp;
}

template<class TCharacter>
double LeveledHero<TCharacter>::GetPower()
{
	return _character.GetPower() + Power;
}

template<class TCharacter>
double LeveledHero<TCharacter>::GetArmor()
{
	return _character.GetArmor() + Armor;
}

template<class TCharacter>
LeveledHero<TCharacter>::LeveledHero(ICharacterEntity character)
{
	new LeveledHero<TCharacter>(character);
}
