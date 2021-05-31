#ifndef __ICONSUMABLECHARACTER_HPP__
#define __ICONSUMABLECHARACTER_HPP__
using namespace std;

class IConsumableCharacter
{
public:
    ~IConsumableCharacter() {}

	  virtual bool AddItem(Consumable consumable) = 0;

    virtual bool RemoveItem(Consumable consumable) = 0;

    virtual bool UseConsumable(Consumable consumable) = 0;

    virtual ConsumableBackpack GetConsumableBackpack() = 0;

    virtual int GetNumberOfConsumableType() = 0;

    virtual int GetConsumableCount(Consumable consumable) = 0;
};

#endif
