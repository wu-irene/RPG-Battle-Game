#include "LeveledCharacter.h"
using namespace std;


template<class TCharacter>
string LeveledCharacter<TCharacter>::GetName()
{
	return _character.GetName();
}

template<class TCharacter>
double LeveledCharacter<TCharacter>::GetPrice()
{
	return _character.GetPrice();
}

template<class TCharacter>
LeveledCharacter<TCharacter>::LeveledCharacter(ICharacterEntity character)
{
	_character = character;
}

template<class TCharacter>
string LeveledCharacter<TCharacter>::Info()
{
	return _character.Info();
}
