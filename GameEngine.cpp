#include "GameEngine.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "HeroWithInventory.h"
using namespace std;

void Start()
{
  cout << "Game started..." <<endl;
  auto hero = HeroWithInventory.From(new LeveledHero<Invoker>(new Invoker()), EquipmentBackpack.From(), ConsumableBackpack.From());
  MainMenu(hero);
}
  void MainMenu(IShoppableCharacter character);
  {
    auto store = new Store();
    auto battle = new Battle(BuildCharacterStrategies());
    auto winCount = 0;

    do {
      cout << "===== Main Menu =====" <<endl;
      cout << "1. Store" << endl;
      cout << "2. Inventory" <<endl;
      cout << "3. Fight" <<endl;
      cout <<"====================" <<endl;
      cout << "Your selection (0 to exit, 9 to show info): ";
      auto value;
      cin >> value;
      if (value == "0")
      return;
      if (value == "9")
      character.Info();
      if (value == "1" )
      StoreMenu(store, character);
      else if (value = "3") {
        auto winner = battle.Fight((ILevelableCharacter)character, CreateMonster(character.GetLevel()));
        cout << "+++++++++++ Winner is +++++++++++" <<endl;
        winner.Info();
        if (winner = character)
        winCount ++;
      }
    } while (true);
  }
  void StoreMenu(Store store, IShoppableCharacter character)
  {
    auto items = store.GetItems();
    do {
      auto count = 1;
      cout << "===== Store Menu =====" <<endl;
      for (auto &i : items)
      {
        cout << count + ":" + i.Info()<<endl;
        count ++;
      }
        auto value;
        cin >>value;
        if (value == "0")
        return;
        if (value == "9")
        {
          character.Info();
        }
        int intValue = int.Parse(value);
        if (intValue <= items.Count)
        {
          auto item = items[intValue-1];
          if (store.SellItem(item, character))
          {
            character.Info();
          }
          else{
            cout << "*** Not enough currency to purchase the item." << endl;
          }
        }
    while(true);
  }
}
  void InventoryMenu(IShoppableCharacter character)
  {
    do {
      cout << "===== Inventory Menu =====" << endl;
      cout << "1. Equipments" << endl;
      cout << "2. Consumables" <<endl;
      cout << "==========================" <<endl;
      cout << "Your selection (0 to back, 9 to show info): " <<endl;
      auto value;
      cin >> value;
      if (value == "0")
      return;
      if (value == "9")
      character.Info();
      if (value == "1")
      EquipmentMenu(character);
      else if (value == "2")
      ConsumableMenu(character);
    } while(true);
  }
  void EquipmentMenu(IShoppableCharacter character)
  {
    auto backpack = character.GetEquipmentBackpack();
    do {
      cout << "======= Equipment Menu ========" <<endl;
      backpack.Info();
      cout << "================================" <<endl;
      cout << "Your selection (0 to back, 9 to show info) :" <<endl;
      auto value;
      cin >>value;
      if (value == "0")
      return;
      if (value == "9")
      character.Info();
      int intValue = int.Parse(value);

      if (intValue <= backpack.GetEquipmentCount())
      {
        auto items = backpack.GetEquipments();
        auto item = items[intValue -1];
        character.ToggleEquipStatus(item);
        character.Info();
      }
    } while(true);
  }
  void ConsumableMenu(IShoppableCharacter character)
{
  auto backpack = character.GetConsumableBackpack();
  do {
    cout << "===== Consumable Menu =====" <<endl;
    backpack.Info();
    cout << "===========================" <<endl;
    cout <<"Your selection (0 to back, 9 to show info): " <<endl;
    auto value;
    cin >> value;
    if (value == "0")
    return;
    if (value == "9")
    character.Info();
    int intValue = int.Parse(value);
    if (intValue <= backpack.GetNumberOfConsumableType())
    {
      auto items;
      items= backpack.GetConsumables();
      auto item;
      item = items[intValue -1];
      character.UseConsumable(item);
      character.Info();
    }
  } while(true);
}
  static list<ICharacterStrategy> BuildCharacterStrategies() //??? const list?
  {
    auto list = new list<ICharacterStrategy>
    {
      new InvokerStrategy(),
      new GodzillaStrategy(),
    };
    return list<ICharacterStrategy>.Empty.AddRange(list);
  }
  static IBattlableCharacter:: CreateMonster(int heroLevel)
  {
    auto monsterFactory = FactoryProducer.GetFactory(heroLevel);
    auto monsterList = FactoryProducer.MonsterList;
    auto random = rand();
    auto randIndex = rand(0, FactoryProducer.MonsterList.Length);
    auto monsterType = monsterList[randIndex];
    return monsterFactory.GetMonster(monsterType);
  }

