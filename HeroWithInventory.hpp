#ifndef __HEROWITHINVENTORY_HPP__
#define __HEROWITHINVENTORY_HPP__
#include <string>
using namespace std;


template <class TCharacter>
class HeroWithInventory : public ILevelableCharacter, IShoppableCharacter
{
private:
	IcharacterEntity _character;
	EquipmentBackpack _equipmentBackpack;
	ConsumableBackpack _consumableBackpack;
	double _currentHp;
	double _currentExp;
	double _currency;
public:
	HeroWithInventory();
	bool AddItem(Equipment equipment);
	bool RemoveItem(Equipment equipment);
	bool Equip(Equipment equipment);
	bool UnEquip(Equipment equipment);
	bool ToggleEquipStatus(Equipment equipment);
	int GetEquipmentCount();
	int GetEquippedEquipmentCount();
	int GetUnEquippedEquipmentCount();
	bool AddItem(Consumable consumable);
	bool RemoveItem(Cosumable consumable);
	bool UseConsumable(Consumable consumable);
	int GetConsumableCount(Consumable consumable);
	int GetNumberOfConsumableType();
	string GetName();
	int GetLevel();
	double GetMaxHp();
	double GetMaxExp();
	double GetPower();
	double GetArmor();
	double GetPrice();
	double GetCurrentHp();
	double GetCurrentExp();
	void AddCurrentExp(double exp);
	double GetCurrency();
	void AddCurrency(double currency);
	void SpendCurrency(double currency);
	void TakeDamage(double damageTaken);
	void SetHpCap();
	void LevelUpCharacter();
	string info();
	DroppableBackpack DropItem();
	EquipmentBackpack GetEquipmentBackpack();
	ConsumableBackpack GetConsumableBackpack();

};

#endif


