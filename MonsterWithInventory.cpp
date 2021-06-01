#include "MonsterWithInventory.h"
#include "IBattalableCharacter.h"
#include "IEquipableCharacter.h"
using namespace std;

template<class TCharacter>
MonsterWithInventory<TCharacter>::MonsterWithInventory(TCharacter character, EquipmentBackpack equipmentBackpack)
{
    _character = character;
    _equipmentBackpack = equipmentBackpack;

    _currentHp = _character.GetMaxHp();
}

template<class TCharacter>
bool MonsterWithInventory<TCharacter>::AddItem(Equipment* equipment)
{
    return _equipmentBackpack.AddItem(equipment);
}

template<class TCharacter>
bool MonsterWithInventory<TCharacter>::RemoveItem(Equipment* equipment)
{
    return _equipmentBackpack.RemoveItem(equipment);
}

template<class TCharacter>
bool MonsterWithInventory<TCharacter>::Equip(Equipment* equipment)
{
    return _equipmentBackpack.Equip(equipment);
}

template<class TCharacter>
bool MonsterWithInventory<TCharacter>::UnEquip(Equipment* equipment)
{
    return _equipmentBackpack.UnEquip(equipment);
}

template<class TCharacter>
bool MonsterWithInventory<TCharacter>::ToggleEquipStatus(Equipment* equipment)
{
    return _equipmentBackpack.ToggleEquipStatus(equipment);
}

template<class TCharacter>
int MonsterWithInventory<TCharacter>::GetEquipmentCount()
{
    return _equipmentBackpack.GetEquipmentCount();
}

template<class TCharacter>
int MonsterWithInventory<TCharacter>::GetEquippedEquipmentCount()
{
    return _equipmentBackpack.GetEquippedEquipmentCount();
}

template<class TCharacter>
int MonsterWithInventory<TCharacter>::GetUnEquippedEquipmentCount()
{
    return _equipmentBackpack.GetUnEquippedEquipmentCount();
}

template<class TCharacter>
string MonsterWithInventory<TCharacter>::GetName()
{
    return _character.GetName();
}

template<class TCharacter>
int MonsterWithInventory<TCharacter>::GetLevel()
{
    return _character.GetLevel();
}

template<class TCharacter>
double MonsterWithInventory<TCharacter>::GetMaxHp()
{
    return _character.GetMaxHp() + _equipmentBackpack.GetExtraHpFromEquippedEquipments();
}

template<class TCharacter>
double MonsterWithInventory<TCharacter>::GetMaxExp()
{
    return _character.GetMaxExp();
}

template<class TCharacter>
double MonsterWithInventory<TCharacter>::GetPower()
{
    return _character.GetPower() + _equipmentBackpack.GetExtraPowerFromEquippedEquipments();
}

template<class TCharacter>
double MonsterWithInventory<TCharacter>::GetArmor()
{
    return _character.GetArmor() + _equipmentBackpack.GetExtraArmorFromEquippedEquipments();
}

template<class TCharacter>
double MonsterWithInventory<TCharacter>::GetPrice()
{
    auto equippedList = _equipmentBackpack.GetEquipments();

    double extraPrice = 0;
    equippedList.ForEach(e => extraPrice += e.GetPrice());

    return _character.GetPrice() + extraPrice;
}

template<class TCharacter>
double MonsterWithInventory<TCharacter>::GetCurrentHp()
{
    return _currentHp;
}

template<class TCharacter>
void MonsterWithInventory<TCharacter>::TakeDamage(double damageTaken)
{
    auto remainHp = _currentHp - damageTaken;
    _currentHp = remainHp < 0 ? 0 : remainHp;
}

template<class TCharacter>
string MonsterWithInventory<TCharacter>::Info()
{
    return "\n--------- " + _character.GetName() + " ---------\n" +
        " HP: ( " + _currentHp + "/" + GetMaxHp() + " )\n" +
        " Exp: " + GetMaxExp() + "\n" +
        " Power: " + GetPower() + " + " + _equipmentBackpack.GetExtraPowerFromEquippedEquipments() + "\n" +
        " Armor: " + GetArmor() + " + " + _equipmentBackpack.GetExtraArmorFromEquippedEquipments() + "\n" +
        _equipmentBackpack.Info();
}

template<class TCharacter>
DroppableBackpack MonsterWithInventory<TCharacter>::DropItem()
{
    return new DroppableBackpack(GetMaxExp());
}

template<class TCharacter>
EquipmentBackpack MonsterWithInventory<TCharacter>::GetEquipmentBackpack()
{
    return _equipmentBackpack;
}
