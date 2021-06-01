#include "BasicMonsterFactory.h"

IBattalableCharacter BasicMonsterFactory::GetMonster(string type)
{
    switch (type)
    {
    case 'godzilla':
        return MonsterWithInventory.From(
            new LeveledMonster<Godzilla>(new Godzilla()));
    default:
        return nullptr;
    }
}
