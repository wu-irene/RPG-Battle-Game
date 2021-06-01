#ifndef __STORE_HPP__
#define __STORE_HPP__
#include "IShoppableCharacter.h"
#include "Item.h"
#include "Equipment.h"
#include "Consumable.h"
#include <string>
#include <list>
#include "HeroWithInventory.h"
using namespace std;

class Store
{
private:
	list<Item> _itemList;
public:
	Store();
	list<Item> GetItems();
	bool SellItem(Item item, IShoppableCharacter buyer);
};

#endif