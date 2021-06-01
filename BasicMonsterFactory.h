#ifndef __BASICMONSTERFACTORY_HPP__
#define __BASICMONSTERFACTORY_HPP__
#include "AbstractFactory.h"
#include "IBattalableCharacter.h"
#include "MonsterWithInventory.h"
#include "LeveledMonster.h"
#include "EquipmentBackpack.h"
#include "Godzilla.h"
#include <string>
using namespace std;

class BasicMonsterFactory : public AbstractFactory
{
public:
	BasicMonsterFactory() {}
	IBattalableCharacter GetMonster(string type);
};

#endif
