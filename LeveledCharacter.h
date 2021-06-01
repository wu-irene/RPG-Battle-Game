#ifndef __LEVELEDCHARACTER_HPP__
#define __LEVELEDCHARACTER_HPP__
#include "ICharacterEntity.h"
#include <string>
using namespace std; 

template <class TCharacter>
class LeveledCharacter : public ICharacterEntity
{
private:
	ICharacterEntity _character;
public:
	 int GetLevel() = 0;
	 double GetMaxHp() = 0;
	 double GetMaxExp() = 0;
	 double GetPower() = 0;
	 double GetArmor() = 0;
	LeveledCharacter(ICharacterEntity character);
	string GetName();
	double GetPrice();
	string Info();

};

#endif
