#include "HeroWithInventory.h"
#include "ILevelableCharacter.h"
#include "IShoppableCharacter.h"
#include "ICharacterEntity.h"
#include "Equipment.h"
#include "Consumable.h"
#include "EquipmentBackpack.h"
#include "ConsumableBackpack.h"
#include "DroppableBackpack.h"
#include <string>
using namespace std;

template<class TCharacter>
HeroWithInventory<TCharacter>::HeroWithInventory(ICharacterEntity character, EquipmentBackpack equipmentBackpack, ConsumableBackpack consumableBackpack, double initialCurrency)
{
	_character = character;
	_equipmentBackpack = equipmentBackpack;
	_consumableBackpack = consumableBackpack;

	_currentHp = _character.GetMaxHp();
	_currentExp = 0;
	_currency = initialCurrency;
}

template<class TCharacter>
bool HeroWithInventory<TCharacter>::AddItem(Equipment* equipment)
{
	return _equipmentBackpack.AddItem(equipment);
}

template<class TCharacter>
bool HeroWithInventory<TCharacter>::RemoveItem(Equipment* equipment)
{
	return _equipmentBackpack.RemoveItem(equipment);
}

template<class TCharacter>
bool HeroWithInventory<TCharacter>::Equip(Equipment* equipment)
{
	return _equipmentBackpack.Equip(equipment);
}

template<class TCharacter>
bool HeroWithInventory<TCharacter>::UnEquip(Equipment* equipment)
{
	return _equipmentBackpack.UnEquip(equipment);
}

template<class TCharacter>
bool HeroWithInventory<TCharacter>::ToggleEquipStatus(Equipment* equipment)
{
	return _equipmentBackpack.ToggleEquipStatus(equipment);
}

template<class TCharacter>
int HeroWithInventory<TCharacter>::GetEquipmentCount()
{
	return _equipmentBackpack.GetEquipmentCount();
}

template<class TCharacter>
int HeroWithInventory<TCharacter>::GetEquippedEquipmentCount()
{
	return _equipmentBackpack.GetEquippedEquipmentCount();
}

template<class TCharacter>
int HeroWithInventory<TCharacter>::GetUnEquippedEquipmentCount()
{
	return _equipmentBackpack.GetUnEquippedEquipmentCount();
}

template<class TCharacter>
bool HeroWithInventory<TCharacter>::AddConsumable(Consumable* consumable)
{
	return _consumableBackpack.AddConsumable(consumable);
}

template<class TCharacter>
bool HeroWithInventory<TCharacter>::RemoveConsumable(Consumable* consumable)
{
	return _consumableBackpack.RemoveConsumable(consumable);
}

template<class TCharacter>
bool HeroWithInventory<TCharacter>::UseConsumable(Consumable* consumable)
{
	if (!_consumableBackpack.DecrementConsumableCount(consumable))
		return false;

	_currentHp += consumable.GetHp();
	SetHpCap();
	AddCurrentExp(consumable.GetExp());

	return true;
}

template<class TCharacter>
int HeroWithInventory<TCharacter>::GetConsumableCount(Consumable* consumable)
{
	return _consumableBackpack.GetConsumableCount(consumable);
}

template<class TCharacter>
int HeroWithInventory<TCharacter>::GetNumberOfConsumableType()
{
	return _consumableBackpack.GetNumberOfConsumableType();
}

template<class TCharacter>
string HeroWithInventory<TCharacter>::GetName()
{
	return _character.GetName();
}

template<class TCharacter>
int HeroWithInventory<TCharacter>::GetLevel()
{
	return _character.GetLevel();
}

template<class TCharacter>
double HeroWithInventory<TCharacter>::GetMaxHp()
{
	return _character.GetMaxHp() + _equipmentBackpack.GetExtraHpFromEquippedEquipments();
}

template<class TCharacter>
double HeroWithInventory<TCharacter>::GetMaxExp()
{
	return _character.GetMaxExp();
}

template<class TCharacter>
double HeroWithInventory<TCharacter>::GetPower()
{
	return _character.GetPower() + _equipmentBackpack.GetExtraPowerFromEquippedEquipments();
}

template<class TCharacter>
double HeroWithInventory<TCharacter>::GetArmor()
{
	return _character.GetArmor() + _equipmentBackpack.GetExtraArmorFromEquippedEquipments();
}

template<class TCharacter>
double HeroWithInventory<TCharacter>::GetPrice()
{
	var equippedList = _equipmentBackpack.GetEquipments();

	double extraPrice = 0;
	equippedList.ForEach(e = > extraPrice += e.GetPrice());

	return _character.GetPrice() + extraPrice;
}

template<class TCharacter>
double HeroWithInventory<TCharacter>::GetCurrentHp()
{
	return _currentHp;
}

template<class TCharacter>
double HeroWithInventory<TCharacter>::GetCurrentExp()
{
	return _currentExp;
}

template<class TCharacter>
void HeroWithInventory<TCharacter>::AddCurrentExp(double exp)
{
	_currentExp += exp;
	LevelUpCharacter();
}

template<class TCharacter>
double HeroWithInventory<TCharacter>::GetCurrency()
{
	return _currency;
}

template<class TCharacter>
void HeroWithInventory<TCharacter>::AddCurrency(double currency)
{
	_currency += currency;
}

template<class TCharacter>
void HeroWithInventory<TCharacter>::SpendCurrency(double currency)
{
	_currency -= currency;
	if (_currency < 0)
		_currency = 0;
}

template<class TCharacter>
void HeroWithInventory<TCharacter>::TakeDamage(double damageTaken)
{
	var remainHp = _currentHp - damageTaken;
	_currentHp = remainHp < 0 ? 0 : remainHp;
}

template<class TCharacter>
void HeroWithInventory<TCharacter>::SetHpCap()
{
	if (_currentHp > GetMaxHp())
		_currentHp = GetMaxHp();
}

template<class TCharacter>
void HeroWithInventory<TCharacter>::LevelUpCharacter()
{
	if (_currentExp < GetMaxExp())
		return;

	_currentExp -= GetMaxExp();

	var leveledCharacter = new LeveledHero<TCharacter>(_character);
	_character = leveledCharacter;
}

template<class TCharacter>
string HeroWithInventory<TCharacter>::Info()
{
	return "\n--------- " + _character.GetName() + " ---------\n" +
		" Level: " + GetLevel() + "\n" +
		" HP: ( " + _currentHp + "/" + GetMaxHp() + " )\n" +
		" Exp: ( " + _currentExp + "/" + GetMaxExp() + " )\n" +
		" Currency: " + _currency + "\n" +
		" Power: " + GetPower() + " + " + _equipmentBackpack.GetExtraPowerFromEquippedEquipments() + "\n" +
		" Armor: " + GetArmor() + " + " + _equipmentBackpack.GetExtraArmorFromEquippedEquipments() + "\n" +
		_equipmentBackpack.Info() +
		_consumableBackpack.Info();
}

template<class TCharacter>
DroppableBackpack HeroWithInventory<TCharacter>::DropItem()
{
	return new DroppableBackpack(_currentExp);
}

template<class TCharacter>
EquipmentBackpack HeroWithInventory<TCharacter>::GetEquipmentBackpack()
{
	return _equipmentBackpack;
}

template<class TCharacter>
ConsumableBackpack HeroWithInventory<TCharacter>::GetConsumableBackpack()
{
	return _consumableBackpack;
}

