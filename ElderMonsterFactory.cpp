#include "ElderMonsterFactory.h"

ElderMonsterFactory::ElderMonsterFactory()
{

};

IBattalableCharacter ElderMonsterFactory::GetMonster(string type)
{
    switch (type)
    {
    case "godzilla":
        return MonsterWithInventory.From(
            new LeveledMonster<Godzilla>(
                new LeveledMonster<Godzilla>(new Godzilla())),
            EquipmentBackpack.From());
    default:
        return null;
    }
}
