#ifndef _INVOKERSTARTEGY_
#define _INVOKERSTRATEGY_
#include "HeroWithInventory.h"
#include "LeveledHero.h"
#include "IBattalableCharacter.h"
#include "CharacterStrategy.h"
#include <stdlib.h>
using namespace std;

class InvokerStrategy : public CharacterStrategy, public HeroWithInventory, public LeveledHero, public Invoker
{
private:
  double _criticalHitPercentage = 10;
public:
  override double AttackInternal(IBattlableCharacter charater);
  override double DefenseInternal(IBattlableCharacter character, double damage);
};
#endif _INVOKERSTRATEGY_
