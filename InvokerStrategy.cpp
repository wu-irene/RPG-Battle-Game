#include "InvokerStrategy.h"
using namespace std;

override double InvokerStrategy::AttackInternal(BattableCharacter charater)
  {
    return (rand(100) < _criticalHitPercentage) ? character.GetPower() * 1.5 : Character.GetPower();
  }
  override double InvokerStrategy::DefenseInternal(IBattableCharacter character, double damage)
  {
    return damage - character.GetArmor();
  }
