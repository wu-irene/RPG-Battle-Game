#include "EquipmentBackpack.h"
#include <unordered_map>
#include <iostream>

EquipmentBackpack::EquipmentBackpack()
{
    _equipments = new unordered_map<Equipment*, EquipStatus>();
}

EquipmentBackpack::~EquipmentBackpack()
{
    delete _equipments;
}

bool EquipmentBackpack::AddItem(Equipment* equipment)
{
    if (_equipments->find(equipment) != _equipments->end())
        return false;

    _equipments->insert(make_pair(equipment, EquipStatus::Off));
    return true;
}

bool EquipmentBackpack::RemoveItem(Equipment* equipment)
{
    if (_equipments->find(equipment) == _equipments->end())
        return false;

    _equipments->erase(equipment);
    return true;
}

bool EquipmentBackpack::Equip(Equipment* equipment)
{
    if (_equipments->find(equipment) == _equipments->end())
        return false;

    _equipments->at(equipment) = EquipStatus::On;
    return true;
}

bool EquipmentBackpack::UnEquip(Equipment* equipment)
{
    if (_equipments->find(equipment) == _equipments->end())
        return false;

    _equipments->at(equipment) = EquipStatus::Off;
    return true;
}

bool EquipmentBackpack::ToggleEquipStatus(Equipment* equipment)
{
    if (_equipments->find(equipment) == _equipments->end())
        return false;

    if (_equipments->at(equipment) == EquipStatus::On)
        _equipments->at(equipment) = EquipStatus::Off;
    else
        _equipments->at(equipment) = EquipStatus::On;
    return true;
}

int EquipmentBackpack::GetEquipmentCount()
{
    return _equipments->size();
}

int EquipmentBackpack::GetEquippedEquipmentCount()
{
    return 0;
}

int EquipmentBackpack::GetUnEquippedEquipmentCount()
{
    return 0;
}

list<Equipment> EquipmentBackpack::GetEquipment()
{
        list<Equipment> keyList;
    for (unordered_map<Equipment, int>::iterator it = _consumables->begin(); it != _consumables->end(); ++it)
        keyList.push_back(it->first);

    return keyList;
}


double EquipmentBackpack::GetExtraHpFromEquippedEquipments()
{
            double accumulatedHp = 0;
            for (unordered_map<Equipment*, EquipStatus>::iterator it = _equipments->begin(); it != _equipments->end(); ++it) {
                if (it->second == EquipStatus::On)
                    accumulatedHp += (it->first).GetHp();
            }
            return accumulatedHp;
}

double EquipmentBackpack::GetExtraPowerFromEquippedEquipments()
        {
            double accumulatedPower = 0;
            for (unordered_map<Equipment*, EquipStatus>::iterator it = _equipments->begin(); it != _equipments->end(); ++it) {
                if (it->second == EquipStatus::On)
                    accumulatedPower += (it->first).GetPower();
            }
            return accumulatedPower;
        }

double EquipmentBackpack::GetExtraArmorFromEquippedEquipments()
{
            double accumulatedArmor = 0;
            for (unordered_map<Equipment*, EquipStatus>::iterator it = _equipments->begin(); it != _equipments->end(); ++it) {
                if (it->second == EquipStatus::On)
                    accumulatedArmor += (it->first).GetArmor();
            }
            return accumulatedArmor;
}

string EquipmentBackpack::Info()
{
            int i = 1;
            string info = "--------- Equipments ---------\n";
             for (unordered_map<Equipment*, EquipStatus>::iterator it = _equipments->begin(); it != _equipments->end(); ++it)
    {
                auto equipment = it->first;
                int status = it->second;

                info += i++ + ". " + equipment.Info() + " | " + status.ToString() + "\n";
            }

            return info;
}

