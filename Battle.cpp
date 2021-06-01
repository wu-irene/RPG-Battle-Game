#include "Battle.h"
#include <string>
#include <list>
#include "ICharacterStrategy.h"
#include "IBattalableCharacter.h"
#include "ILevelableCharacter.h"
using namespace std;

Battle::Battle(list<ICharacterStrategy> characterStrategies)
{
  _characterStrategies = characterStrategies;
}

IBattlableCharacter Battle::Fight(ILevelableCharacter hero, IBattalableCharacter monster)
{
  cout << "==== GAME START ====" << endl;
  hero.Info();
  monster.Info();

  IBattlableCharacter currentPlayer = hero;
  int roundCount = 1;

  while (hero.GetCurrentHp() > 0 && monster.GetCurrentHp() >0 )
  {
    auto damage = _characterStrategies.Single(s -> s.CanAttack(currentPlayer)).Attack(currentPlayer);
    currentPlayer = SwapTurn(currentPlayer, hero, monster);
    auto damageTaken = _characterStrategies.Single(s-> s.CanDefense(currentPlayer)).Defense(currentPlayer,damage);
    currentPlayer.TakeDamage(damageTaken);
    cout << "+++++++++++++++ Rount " + roundCount + " ++++++++++++++++" << endl;
    hero.Info();
    monster.Info();
    roundCount ++;
  }
  if (hero.GetCurrentHp() <= 0)
  return monster;
  auto droppedItem = monster.DropItem();
  hero.AddCurrentExp(droppedItem.GetReward());
  return hero;
}

IBattlableCharacter Battle::SwapTurn (IBattlableCharacter currentPlayer, IBattlableCharacter hero, IBattlableCharacter monster)
{
  return currentPlayer == hero ? monster : hero;
}
