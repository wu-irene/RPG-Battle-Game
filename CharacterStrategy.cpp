#include "CharacterStrategy.h"
#include "IBattalableCharacter.h"

using namespace std;


template<class TCharacter>
bool CharacterStrategy<TCharacter>::CanAttack(IBattalableCharacter character)
{
    return character = TCharacter;
}

template<class TCharacter>
 bool CharacterStrategy<TCharacter>::CanDefense(IBattalableCharacter character)
  {
    return character = TCharacter;
  }

template<class TCharacter>
double CharacterStrategy<TCharacter>::Attack(IBattalableCharacter character)
{
    return AttackInternal(character);
}

template<class TCharacter>
double CharacterStrategy<TCharacter>::Defense(IBattalableCharacter character, double damage)
{
    return DefenseInternal(character, damage);
}

