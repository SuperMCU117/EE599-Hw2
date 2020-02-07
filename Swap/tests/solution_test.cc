#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FirstTest, ReturnHelloWorld) {
  Solution solution;
  int a=10,b=20;
  solution.Swap(a,b);
  int actual1 = a;
  int expected1 = 20;
  int actual = b;
  int expected = 10;
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
}

TEST(SecondTest, ReturnHelloWorld) {
  Solution solution;
  int a=13,b=9;
  solution.Swap(a,b);
  int actual1 = a;
  int expected1 = 9;
  int actual = b;
  int expected = 13;
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
}

TEST(ThirdTest, ReturnHelloWorld) {
  Solution solution;
  int a=0,b=0;
  solution.Swap(a,b);
  int actual1 = a;
  int expected1 = 0;
  int actual = b;
  int expected = 0;
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
}

TEST(ForthTest, ReturnHelloWorld) {
  Solution solution;
  int a=0,b=99999;
  solution.Swap(a,b);
  int actual1 = a;
  int expected1 = 99999;
  int actual = b;
  int expected = 0;
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
}