#ifndef __MONSTERWITHINVENTORY_HPP__
#define __MOSNTERWITHINVENTORY_HPP__
#include <string>
using namespace std;

template <class TCharacter>
class MonsterWithInventory : public IBattlableCharacter, IEquipableCharacter
{
private:
	TCharacter _character;
	EquipmentBackpack _equipmentBackpack;
	double _currentHp;
public:
	MonsterWithInventory();
	bool AddItem(Equipment equipment);
	bool RemoveItem(Equipment equipment);
	bool Equip(Equipment equipment);
	bool UnEquip(Equipment equipment);
	bool ToggleEquipStatus(Equipment equipment);
	int GetEquipmentCount();
	int GetEquippedEquipmentCount();
	int GetUnEquippedEquipmentCount();
	string GetName();
	int GetLevel();
	double GetMaxHp();
	double GetMaxExp();
	double GetPower();
	double GetArmor();
	double GetPrice();
	double GetCurrentHp();
	void TakeDamage(double damageTaken);
	string Info();
	DroppableBackpack DropItem();
	EquipmentBackpack GetEquipmentBackpack();
};

#endif
