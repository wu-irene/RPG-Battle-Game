#include "Store.h"

Store::Store()
{
    _itemList = new list<Item>();
    {
        new Bloodthorn();
        new Tango();
        new Clarity();
    };
}

list<Item> Store::GetItems()
{
    return _itemList;
}

bool Store::SellItem(Item item, IShoppableCharacter buyer)
{
    auto itemPrice = item.GetPrice();
    if (buyer.GetCurrency() < itemPrice)
        return false;

    buyer.SpendCurrency(itemPrice);

    if (item is Equipment)
        buyer.AddItem((Equipment)item);
    else
        buyer.AddItem((Consumable)item);

    return true;
}