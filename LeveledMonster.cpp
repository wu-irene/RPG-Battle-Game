#include "LeveledMonster.h"


template<class TCharacter>
inline int LeveledMonster<TCharacter>::GetLevel()
{
	return _character.GetLevel() + 1;
}

template<class TCharacter>
double LeveledMonster<TCharacter>::GetMaxHp()
{
	return _character.GetMaxHp() + Hp;
}

template<class TCharacter>
double LeveledMonster<TCharacter>::GetMaxExp()
{
	return _character.GetMaxExp() + Exp;
}

template<class TCharacter>
double LeveledMonster<TCharacter>::GetPower()
{
	return _character.GetPower() + Power;
}

template<class TCharacter>
double LeveledMonster<TCharacter>::GetArmor()
{
	return _character.GetArmor() + Armor;
}

template<class TCharacter>
LeveledMonster<TCharacter>::LeveledMonster(ICharacterEntity character)
{
	_character = character;
}
