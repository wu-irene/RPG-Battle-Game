TEST(Backpack,GivenBloodthorn_CanBeAdded) {
    auto bloodthorn = new Bloodthorn();
    auto backpack = EquipmentBackpack.From();

     auto result = backpack.AddItem(bloodthorn);
  EXPECT_EQ( IsTrue(result) ,true);
  EXPECT_EQ( backpack.GetEquipmentCount(),1);
}

TEST(Backpack,GivenBloodthorn_AlreadyExisted_CannotBeAdded) {
       auto bloodthorn = new Bloodthorn();
        auto backpack = EquipmentBackpack.From();
       auto result = backpack.AddItem(bloodthorn);
        auto result1 = backpack.AddItem(bloodthorn);
    EXPECT_EQ( IsTrue(result) ,true);
    EXPECT_EQ( IsTrue(result1) ,false);
  EXPECT_EQ( backpack.GetEquipmentCount(),1);
}

TEST(Backpack,GivenEmptyBackpack_CannotBeRemoved) {
           auto bloodthorn = new Bloodthorn();
           auto backpack = EquipmentBackpack.From();
            auto result = backpack.RemoveItem(bloodthorn);
    EXPECT_EQ( IsTrue(result) ,false);
  EXPECT_EQ( backpack.GetEquipmentCount(),0);
}


TEST(Backpack,GivenOneBloodthornInBackpack_CanBeRemoved) {
        auto bloodthorn = new Bloodthorn();
        auto backpack = EquipmentBackpack.From();
            backpack.AddItem(bloodthorn);

        auto result = backpack.RemoveItem(bloodthorn);

    EXPECT_EQ( IsTrue(result) ,true);
  EXPECT_EQ( backpack.GetEquipmentCount(),0);
}

TEST(Backpack,GivenBloodthornInBackPack_UnEquiped_CanBeEquipped) {
       auto bloodthorn = new Bloodthorn();
        auto backpack = EquipmentBackpack.From();

            backpack.AddItem(bloodthorn);

        auto result = backpack.Equip(bloodthorn);

    EXPECT_EQ( IsTrue(result) ,true);
  EXPECT_EQ(backpack.GetEquippedEquipmentCount(),1);
  EXPECT_EQ(backpack.GetUnEquippedEquipmentCount(),0);
}
