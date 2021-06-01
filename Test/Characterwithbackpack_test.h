TEST(CharacterWithBackpack,GivenEmptyEquipmentList_ShouldReturnCharacterBaseAttributes) {
     auto hero = new LeveledHero<Invoker>(new Invoker());
       auto equipmentBackpack = EquipmentBackpack.From();
       auto consumableBackpack = ConsumableBackpack.From();     
     auto character = HeroWithInventory.From(hero, equipmentBackpack, consumableBackpack);


  EXPECT_EQ(equipmentBackpack.GetEquipmentCount(),0);
  EXPECT_EQ(character.GetMaxHp(),hero.GetMaxHp());
EXPECT_EQ(hero.GetPower(), character.GetPower());
EXPECT_EQ(hero.GetArmor(), character.GetArmor());

}

TEST(CharacterWithBackpack,GivenOneEquipmentList_NotEquipped_ShouldReturnCharacterBaseAttributes) {
                auto hero = new LeveledHero<Invoker>(new Invoker());
                auto bloodthorn = new Bloodthorn();
                auto equipmentBackpack = EquipmentBackpack.From();
                auto consumableBackpack = ConsumableBackpack.From();
                equipmentBackpack.AddItem(bloodthorn);

                auto character = HeroWithInventory.From(hero, equipmentBackpack, consumableBackpack);


  EXPECT_EQ(equipmentBackpack.GetEquipmentCount(),1);
  EXPECT_EQ(hero.GetMaxHp(), character.GetMaxHp());
EXPECT_EQ(hero.GetPower(), character.GetPower());
EXPECT_EQ(hero.GetArmor(), character.GetArmor());

}

TEST(CharacterWithBackpack,GivenOneEquipment_Equipped_ShouldReturnCharacterBaseAttributesWithEquipmentAttribute) {
       auto hero = new LeveledHero<Invoker>(new Invoker());
      auto bloodthorn = new Bloodthorn();
      auto equipmentBackpack = EquipmentBackpack.From()
      auto consumableBackpack = ConsumableBackpack.From();
      equipmentBackpack.AddItem(bloodthorn);

         
       auto character = HeroWithInventory.From(hero, equipmentBackpack, consumableBackpack);
     character.Equip(bloodthorn);


    EXPECT_EQ(equipmentBackpack.GetEquipmentCount(),1);
    EXPECT_EQ(hero.GetMaxHp() + bloodthorn.GetHp(), character.GetMaxHp());
    EXPECT_EQ(hero.GetPower() + bloodthorn.GetPower(), character.GetPower());
    EXPECT_EQ(hero.GetArmor() + bloodthorn.GetArmor(), character.GetArmor());

}
TEST(CharacterWithBackpack,GivenLowHpInvoker_GivenOneTango_WhenUse_ShouldIncreaseCharacterCurrentHp) {
                auto hero = new LeveledHero<Invoker>(new Invoker());
                 auto equipmentBackpack = EquipmentBackpack.From();
                auto consumableBackpack = ConsumableBackpack.From();
                auto tango = new Tango();

                auto character = HeroWithInventory.From(hero, equipmentBackpack, consumableBackpack);
                character.TakeDamage(100);
                character.AddItem(tango);

                auto result = character.UseConsumable(tango);


  EXPECT_EQ(hero.GetMaxHp() - 100 + tango.GetHp(), character.GetCurrentHp());
  EXPECT_EQ(character.GetNumberOfConsumableType(),0);
}
