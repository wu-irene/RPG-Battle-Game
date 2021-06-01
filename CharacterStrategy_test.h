TEST(CharacterStrategy ,GivenBaseInvoker_WithBloodthorn_ExpectedResult) {
            auto hero = new LeveledHero<Invoker>(new Invoker());
            auto equipmentBackpack = EquipmentBackpack.From();
           auto consumableBackpack = ConsumableBackpack.From();
            auto bloodthorn = new Bloodthorn();
           auto character = HeroWithInventory.From(hero, equipmentBackpack, consumableBackpack);
            character.AddItem(bloodthorn);
            character.Equip(bloodthorn);

            // test
            auto damage = TestHelper.BuildCharacterStrategies()
                    .Single(s => s.CanAttack(character))
                    .Attack(character);


  EXPECT_EQ(equipmentBackpack.GetEquipmentCount(),1);
  EXPECT_EQ(character.GetPower(), damage);
  EXPECT_EQ(hero.GetPower(), damage);

}

TEST(CharacterStrategy ,GivenBaseInvoker_WithNoEquipment_ExpectedResult) {
            auto hero = new LeveledHero<Invoker>(new Invoker());
            auto equipmentBackpack = EquipmentBackpack.From();
            auto consumableBackpack = ConsumableBackpack.From();
            auto character = HeroWithInventory.From(hero, equipmentBackpack, consumableBackpack);

            auto damage = TestHelper.BuildCharacterStrategies()
                    .Single(s => s.CanAttack(character))
                    .Attack(character)


  EXPECT_EQ(equipmentBackpack.GetEquipmentCount(),0);
  EXPECT_EQ(character.GetPower(), damage);

}