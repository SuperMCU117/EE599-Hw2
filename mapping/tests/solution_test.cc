#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(First, ReturnHelloWorld) {
  Solution solution;
  std::string First ="aabbcc";
  std::string Second="ccddee";
  bool actual = solution.IfMappable(First,Second);
  EXPECT_EQ(true, actual);
}

TEST(Second, ReturnHelloWorld) {
  Solution solution;
  std::string First ="extreme";
  std::string Second="egg";
  bool actual = solution.IfMappable(First,Second);
  EXPECT_EQ(false, actual);
}

TEST(Third, ReturnHelloWorld) {
  Solution solution;
  std::string First ="harder";
  std::string Second="waiter";
  bool actual = solution.IfMappable(First,Second);
  EXPECT_EQ(false, actual);
}

TEST(Forth, ReturnHelloWorld) {
  Solution solution;
  std::string First ="add";
  std::string Second="egg";
  bool actual = solution.IfMappable(First,Second);
  EXPECT_EQ(true, actual);
}