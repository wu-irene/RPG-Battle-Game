#include "GodzillaStrategy.h"
using namespace std;

override double AttackInternal(IBattlableCharacter character)
  {
    return character.GetPower();
  }
  override double DefenseInternal(IBattlableCharacter character, double damage)
  {
    return damage - character.GetArmor();
  }

  double GodzillaStrategy::AttackInternal(IBattalableCharacter character)
  {
      return character.GetPower();
  }

  double GodzillaStrategy::DefenseInternal(IBattalableCharacter character, double damage)
  {
      return damage - character.GetArmor();
  }
