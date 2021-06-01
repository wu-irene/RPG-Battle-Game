TEST(ConsumableBackpack,GivenEmptyBackpack_AddTango_CanBeAdded) {
         auto tango = new Tango();
         auto  backpack = ConsumableBackpack.From();

          
            backpack.AddConsumable(tango);


  EXPECT_EQ(backpack.GetNumberOfConsumableType(),1);
  EXPECT_EQ(backpack.GetConsumableCount(tango),1);
}

TEST(ConsumableBackpack, GivenExistingTangoInBackpack_AddTangos_CanBeAdded) {
           auto tango = new Tango();
           auto backpack = ConsumableBackpack.From();
            backpack.AddConsumable(tango);

            backpack.AddConsumable(tango);
            backpack.AddConsumable(tango);
            backpack.AddConsumable(tango);


  EXPECT_EQ(backpack.GetNumberOfConsumableType(),1);
  EXPECT_EQ(backpack.GetConsumableCount(tango),4);
}

TEST(ConsumableBackpack, GivenExistingTangoInBackpack_RemoveTango_CanBeRemoved) {
  auto tango = new Tango();
        auto backpack = ConsumableBackpack.From();
            backpack.AddConsumable(tango);

        auto result = backpack.RemoveConsumable(tango);


  EXPECT_EQ( backpack.GetNumberOfConsumableType(),0);
  EXPECT_EQ(backpack.GetConsumableCount(tango),0);

}
TEST(ConsumableBackpack, GivenNoTangoInBackpack_RemoveTango_CannotBeRemoved) {
  auto tango = new Tango();
        auto backpack = ConsumableBackpack.From();


   auto result = backpack.RemoveConsumable(tango);


  EXPECT_EQ(backpack.GetNumberOfConsumableType(),0);
  EXPECT_EQ( backpack.GetConsumableCount(tango),0);

}

TEST(ConsumableBackpack, GivenOneTangoInBackpack_DecreaseTango_ShouldBeRemoved) {
        auto  tango = new Tango();
           auto  backpack = ConsumableBackpack.From();
            backpack.AddConsumable(tango);


        auto result = backpack.DecrementConsumableCount(tango);


  EXPECT_EQ(backpack.GetNumberOfConsumableType(),0);
  EXPECT_EQ(backpack.GetConsumableCount(tango),0);

}
TEST(ConsumableBackpack, GivenMultipleTangoInBackpack_DecreaseTango_ShouldBeDecremented) {
    auto tango = new Tango();
        auto backpack = ConsumableBackpack.From();
            backpack.AddConsumable(tango);
            backpack.AddConsumable(tango);
            backpack.AddConsumable(tango);
            backpack.AddConsumable(tango);

        
     auto result = backpack.DecrementConsumableCount(tango);


  EXPECT_EQ(backpack.GetNumberOfConsumableType(),1);
  EXPECT_EQ(backpack.GetConsumableCount(tango),3);

}
