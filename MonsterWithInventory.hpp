#ifndef __MONSTERWITHINVENTORY_HPP__
#define __MOSNTERWITHINVENTORY_HPP__
#include "IBattalableCharacter.h"
#include "IEquipableCharacter.h"
#include "EquipmentBackpack.h"
#include "DroppableBackpack.h"
#include "Equipment.h"
#include <string>
using namespace std;

template <class TCharacter>
class MonsterWithInventory : public IBattalableCharacter, IEquipableCharacter
{
private:
	TCharacter _character;
	EquipmentBackpack _equipmentBackpack;
	double _currentHp;
public:
	MonsterWithInventory(TCharacter character, EquipmentBackpack equipmentBackpack);
	bool AddItem(Equipment* equipment);
	bool RemoveItem(Equipment* equipment);
	bool Equip(Equipment* equipment);
	bool UnEquip(Equipment* equipment);
	bool ToggleEquipStatus(Equipment* equipment);
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
