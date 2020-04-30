#include "../src/logic.hpp"

#include <gtest/gtest.h>

TEST(AddTest, 100)
{
  ASSERT_EQ(100, logic::add(50, 50));
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}