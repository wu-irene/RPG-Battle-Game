#ifndef __CONSUMABLE_HPP__
#define __CONSUMABLE_HPP__
#include <string>
#include "Item.h"
using namespace std;

class Consumable : public Item
{
protected:
    Consumable(string name) : Item(name) {}

public:

    ~Consumable() {}

    virtual double GetHp() = 0;

    virtual double GetExp() = 0;

    string Info()
    {
        return GetName() + ": "
            + " Price " + to_string(GetPrice())
            + " Hp " + to_string(GetHp())
            + " Exp " + to_string(GetExp());
    }

};

#endif 