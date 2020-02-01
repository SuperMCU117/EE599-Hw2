#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(CharChar, HandlesChar) {
  Solution solution;
  std::string actual = solution.Add("Hello","World");
  std::string expected = "HelloWorld";
  EXPECT_EQ(expected, actual);
}
TEST(INTINT, HandlesInt) {
  Solution solution;
  int actual = solution.Add(3,8);
  int expected = 11;
  EXPECT_EQ(expected, actual);
}
TEST(IntChar, HandlesMix1) {
  Solution solution;
  std::string actual = solution.Add(3,"World");
  std::string expected = "3World";
  EXPECT_EQ(expected, actual);
}
TEST(CharInt, HandlesMix2) {
  Solution solution;
  std::string actual = solution.Add("Hello",4);
  std::string expected = "Hello4";
  EXPECT_EQ(expected, actual);
}