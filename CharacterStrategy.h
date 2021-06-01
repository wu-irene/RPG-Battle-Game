#define _CHARACTERSTRATEGY_
#include "ICharacterStrategy.h"
#include "IBattalableCharacter.h"
using namespace std;

template <class TCharacter>
class CharacterStrategy: public ICharacterStrategy
{
public:
     bool CanAttack(IBattalableCharacter character);
     bool CanDefense(IBattalableCharacter character);
     double Attack(IBattalableCharacter character);
     double Defense(IBattalableCharacter character, double damage);
     virtual double AttackInternal(IBattalableCharacter character) = 0;
     virtual double DefenseInternal(IBattalableCharacter character, double damage) = 0;
};

#endif _CHARACTERSTRATEGY_
