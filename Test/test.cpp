#include "gtest/gtest.h"
#include "CharacterStrategy_test.h"
#include "BackPack_test.h"
#include "Characterwithbackpack_test.h"
#include "consumablebackpack_test.h"
#include "storetests.h"

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
