#ifndef __IBATTALABLECHARACTER_HPP__
#define __IBATTALABLECHARACTER_HPP__
#include "ICharacterEntity.h"
#include "DroppableBackpack.h"
using namespace std;

class IBattalableCharacter : public ICharacterEntity
{
public: 
	IBattalableCharacter() {}

	~IBattalableCharacter() {}

	virtual double GetCurrentHp() = 0;

	virtual void TakeDamage(double damageTaken) = 0;

	virtual DroppableBackpack DropItem() = 0;

};

#endif
