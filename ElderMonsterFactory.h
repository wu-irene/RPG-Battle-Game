#ifndef _ELDERMONSTER_
#define _ELDERMONSTER_
#include "IBattalableCharacter.h"
#include "LeveledMonster.h"
#include "Godzilla.h"
#include "AbstractFactory.h"
#include "MonsterWithInventory.h"
#include "LeveledMonster.h"
#include "EquipmentBackpack.h"
#include <string>

using namespace std;
class ElderMonsterFactory : public AbstractFactory
{
    public:
        ElderMonsterFactory() {}
        IBattalableCharacter GetMonster(string type); 
};
#endif _ELDERMONSTER_ 
