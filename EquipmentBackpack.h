#ifndef __CONSUMABLEBACKPACK_HPP__
#define __CONSUMABLEBACKPACK_HPP__
#include "Equipment.h"
#include "EquipStatus.h"
#include <unordered_map>
#include <vector>
#include <list>
#include <string>

class EquipmentBackpack
{
private:
	unordered_map<Equipment*, EquipStatus>* _equipments;
	EquipmentBackpack();
	~EquipmentBackpack();
public:
	bool AddItem(Equipment* equipment);
	bool RemoveItem(Equipment* equipment);
	bool Equip(Equipment* equipment);
	bool UnEquip(Equipment* equipment);
	bool ToggleEquipStatus(Equipment* equipment);
	int GetEquipmentCount();
	int GetEquippedEquipmentCount();
	int GetUnEquippedEquipmentCount();
	list<Equipment> GetEquipment();
	double GetExtraPowerFromEquippedEquipments();
	double GetExtraHpFromEquippedEquipments();
	double GetExtraArmorFromEquippedEquipments();
	string Info();
};

#endif