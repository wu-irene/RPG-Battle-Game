#ifndef __IBATTLABLECHARACTER_HPP__
#define __IBATTLABLECHARACTER_HPP__
#include "ICharacterEntity.h"
using namespace std;

class IBattalableCharacter : ICharacterEntity
{
public: 
	~IBattalableCharacter() {};

	virtual double GetCurrentHp() = 0;

	virtual void TakeDamage(double damageTaken) = 0;

	virtual DroppableBackpack DropItem() = 0;

};

#endif
