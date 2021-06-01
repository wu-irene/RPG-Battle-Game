#ifndef _BATTLE_
#define _BATTLE_
#include "ILevelableCharacter.h"
#include "ICharacterStrategy.h"
#include "IBattalableCharacter.h"
#include <list>
#include <iostream>
using namespace std;

class Battle
{
private: 
  list<ICharacterStrategy> _characterStrategies;
   IBattalableCharacter SwapTurn(IBattalableCharacter currPlayer, IBattalableCharacter hero, IBattleableCharacter monster);
public:
  Battle(list<ICharacterStrategy> characterStrategies);
   IBattalableCharacter Fight(ILevelableCharacter hero, IBattalableCharacter monster);
  
};
#endif _BATTLE_
