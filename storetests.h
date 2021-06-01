TEST(Store,GivenCharacter_WithEnoughCurrency_BuyEquipmentBloodthorn_CanBeBought) {
            auto bloodthorn = new Bloodthorn();
            auto equipmentBackpack = EquipmentBackpack.From();
            auto consumableBackpack = ConsumableBackpack.From();
            auto store = new Store();

            auto character = HeroWithInventory.From(
                new Invoker(),
                equipmentBackpack,
                consumableBackpack);

            auto result = store.SellItem(bloodthorn, character);


  EXPECT_EQ(2000 - bloodthorn.GetPrice(),character.GetCurrency());
  EXPECT_EQ(character.GetEquipmentCount(),1);
  EXPECT_EQ(character.GetNumberOfConsumableType(),0);
}

TEST(Store, GivenCharacter_WithLowCurrency_BuyEquipmentBloodthorn_CannotBeBought) {
            auto bloodthorn = new Bloodthorn();
            auto equipmentBackpack = EquipmentBackpack.From();
            auto consumableBackpack = ConsumableBackpack.From();
            auto store = new Store();
            auto initCurrency = 10;


              auto character = HeroWithInventory.From(
                new Invoker(),
                equipmentBackpack,
                consumableBackpack,
                initCurrency);

            auto result = store.SellItem(bloodthorn, character);


  EXPECT_EQ(character.GetCurrency(),initCurrency);
  EXPECT_EQ(character.GetEquipmentCount(),0);
  EXPECT_EQ(character.GetNumberOfConsumableType(),0);

}

TEST(Store, GivenCharacter_WithEnoughCurrency_BuyConsumableTango_CanBeBought()) {
          auto tango = new Tango();
           auto equipmentBackpack = EquipmentBackpack.From();
          auto consumableBackpack = ConsumableBackpack.From();
          auto store = new Store();


              auto character = HeroWithInventory.From(
                new Invoker(),
                equipmentBackpack,
                consumableBackpack);

            auto result = store.SellItem(tango, character);


  EXPECT_EQ(2000 - tango.GetPrice(),character.GetCurrency());
  EXPECT_EQ(character.GetEquipmentCount(),0);
  EXPECT_EQ(character.GetNumberOfConsumableType(),1);
  EXPECT_EQ(character.GetConsumableCount(tango),1);

}