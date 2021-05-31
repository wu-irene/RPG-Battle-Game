#ifndef __IEQUIPABLECHARACTER_HPP__
#define __IEQUIPABLECHARACTER_HPP__
using namespace std;

class IEquipableCharacter
{
public:
	  ~IEquipableCharacter() {}

    virtual bool AddItem(Equipment equipment) = 0;

    virtual bool RemoveItem(Equipment equipment) = 0;

    virtual bool Equip(Equipment equipment) = 0;

    virtual bool UnEquip(Equipment equipment) = 0;

    virtual bool ToggleEquipStatus(Equipment equipment) = 0;

    virtual EquipmentBackpack GetEquipmentBackpack() = 0;

    virtual int GetEquipmentCount() = 0;

    virtual int GetEquippedEquipmentCount() = 0;

    virtual int GetUnEquippedEquipmentCount() = 0;
};

#endif
