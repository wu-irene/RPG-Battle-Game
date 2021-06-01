#ifndef _GODZILLASTRATEGY_
#define _GODZILLASTRATEGY_
#include "CharacterStrategy.h"
#include "MonsterWithInventory.h"
#include "LeveledMonster.h"
#include "Godzilla.h"
#include "IBattalableCharacter.h"
using namespace std;

class GodzillaStrategy : public Godzilla
{
public:
  double AttackInternal(IBattalableCharacter character);
  double DefenseInternal(IBattalableCharacter character, double damage);
};

#endif _GODZILLASTRATEGY_
