#ifndef _GAMEENGINE_
#define _GAMEENGINE_
#include "IShoppableCharacter.h"
#include "HeroWithInventory.h"
#include "Battle.h"
#include "MonsterWithInventory.h"
#include "Godzilla.h"
#include "LeveledMonster.h"
#include "Store.h"
#include "FactoryProducer.h"
#include "LeveledHero.h"
#include "ILevelableCharacter.h"
#include "EquipmentBackpack.h"
#include "ConsumableBackpack.h"
#include "CharacterEntity.h"
#include "ElderMonsterFactory.h"
#include "AbstractFactory.h"
#include "LeveledCharacter.h"
#include "Item.h"
#include "ICharacterStrategy.h"
#include "InvokerStrategy.h"
#include "GodzillaStrategy.h"
#include "BasicMonsterFactory.h"
#include "IBattalableCharacter.h"
#include <string>
#include <iostream>
using namespace std;

class GameEngine
{
public: 
  void Start();
private:
  void MainMenu(IShoppableCharacter character);
  void StoreMenu(Store store, IShoppableCharacter character);
  void InventoryMenu(IShoppableCharacter character);
  void EquipmentMenu(IShoppableCharacter character);
  void ConsumableMenu(IShoppableCharacter character);
  list<ICharacterStrategy> BuildCharacterStrategies();
  IBattalableCharacter CreateMonster(int heroLevel);
  
};
#endif _GAMEENGINE_
