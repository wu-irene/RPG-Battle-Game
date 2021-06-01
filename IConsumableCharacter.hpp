#ifndef __ICONSUMABLECHARACTER_HPP__
#define __ICONSUMABLECHARACTER_HPP__
#include "Consumable.h"
#include "ConsumableBackpack.h"
using namespace std;

class IConsumableCharacter
{
public:
    IConsumableCharacter() {}

    ~IConsumableCharacter() {}

    virtual bool AddItem(Consumable consumable) = 0;

    virtual bool RemoveItem(Consumable consumable) = 0;

    virtual bool UseConsumable(Consumable consumable) = 0;

    virtual ConsumableBackpack GetConsumableBackpack() = 0;

    virtual int GetNumberOfConsumableType() = 0;

    virtual int GetConsumableCount(Consumable consumable) = 0;
};

#endif
