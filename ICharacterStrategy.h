#ifndef _ICHARACTERSTRATEGY_
#define _ICHARACTERSTRATEGY_
#include "IBattalableCharacter.h"
#include "MonsterWithInventory.h"
#include "CharacterStrategy.h"

using namespace std;

class ICharacterStrategy
{
public:
    ICharacterStrategy() {}
    ~ICharacterStrategy() {}
    virtual bool CanAttack(IBattalableCharacter character) = 0;
    virtual bool CanDefense(IBattalableCharacter character) = 0;
    virtual double Attack(IBattalableCharacter character) = 0;
    virtual double Defense(IBattalableCharacter character, double damage) = 0;
};
#endif _ICHARACTERSTRATEGY_
