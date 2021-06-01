#include "ConsumableBackpack.h"
#include "Consumable.h"
#include <unordered_map>

ConsumableBackpack::ConsumableBackpack()
{
	_consumables = new unordered_map<Consumable*, int>();
}

ConsumableBackpack::~ConsumableBackpack()
{
    delete _consumables;
}

bool ConsumableBackpack::AddConsumable(Consumable* consumable)
{
    if (_consumables->find(consumable) != _consumables->end())
        _consumables->at(consumable)++;
    else
        _consumables->insert(make_pair(consumable, 1));
    return true;
}

bool ConsumableBackpack::RemoveConsumable(Consumable* consumable)
{
    if (_consumables->find(consumable) == _consumables->end())
        return false;

    _consumables->erase(consumable);
    return true;
}

bool ConsumableBackpack::DecrementConsumableCount(Consumable* consumable)
{
    if (_consumables->find(consumable) == _consumables->end())
        return false;

    auto remainingCount = --_consumables->at(consumable);
    if (remainingCount <= 0)
        _consumables->erase(consumable);

    return true;
}

int ConsumableBackpack::GetNumberOfConsumableType()
{
    return _consumables->size();
}

int ConsumableBackpack::GetConsumableCount(Consumable* consumable)
{
    if (_consumables->find(consumable) == _consumables->end())
        return 0;

    return _consumables->at(consumable);
}

list<Consumable> ConsumableBackpack::GetConsumables()
{
    list<Consumable> keyList;
    for (unordered_map<Consumable, int>::iterator it = _consumables->begin(); it != _consumables->end(); ++it)
        keyList.push_back(it->first);

    return keyList;
}

string ConsumableBackpack::Info()
{
    int i = 1;
    string info = "-------- Consumables --------";
    for (unordered_map<Consumable, int>::iterator it = _consumables->begin(); it != _consumables->end(); ++it)
    {
        auto consumable = it->first;
        int count = it->second;

        info += i++ + ". " + consumable.Info() + " | " + to_string(count) + "\n";
    }

    return info;
}

