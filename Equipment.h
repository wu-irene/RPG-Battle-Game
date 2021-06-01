#ifndef __EQUIPMENT_HPP__
#define __EQUIPMENT_HPP__
#include <string>
using namespace std;
#include "Item.h"

class Equipment : public Item
{
protected:
    Equipment(string name) : Item(name) {}

public:

    virtual double GetHp() = 0;

    virtual double GetPower() = 0;

    virtual double GetArmor() = 0;

    string Info()
    {
        return GetName() + ": "
            + " Price " + to_string(GetPrice())
            + " Hp " + to_string(GetHp())
            + " Power " + to_string(GetPower())
            + " Armor " + to_string(GetArmor());
    }
};

#endif 