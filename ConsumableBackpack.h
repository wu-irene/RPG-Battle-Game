#ifndef __CONSUMABLEBACKPACK_HPP__
#define __CONSUMABLEBACKPACK_HPP__
#include "Consumable.h"
#include <unordered_map>
#include <vector>
#include <list>
#include <string>
using namespace std;

class ConsumableBackpack
{
private:
	unordered_map<Consumable*, int>* _consumables;
	ConsumableBackpack();
	~ConsumableBackpack();
public:
	bool AddConsumable(Consumable* consumable);
	bool RemoveConsumable(Consumable* consumable);
	bool DecrementConsumableCount(Consumable* consumable);
	int GetNumberOfConsumableType();
	int GetConsumableCount(Consumable* consumable);
	list<Consumable> GetConsumables();
	string Info();
};

#endif