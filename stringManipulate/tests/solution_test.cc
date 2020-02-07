#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(First, ReturnHelloWorld) {
  Solution solution;
  int index1=1,index2=3;
  std::string input1 = "EE599";
  std::string input2 = "EE599";
  std::string actual = solution.Swapindex(input1,index1,index2);
  std::string expected = "E95E9";
  std::string actual1 = solution.ToLowerCase(input1);
  solution.Reverser(input2);
  std::string expected1 = "ee599";
  std::string expected2 ="995EE";
  std::string actual2=input2;

  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}

TEST(Second, ReturnHelloWorld) {
  Solution solution;
  int index1=0,index2=3;
  std::string input1 = "EE599!";
  std::string input2 = "EE599!";
  std::string actual = solution.Swapindex(input1,index1,index2);
  std::string expected = "9E5E9!";
  std::string actual1 = solution.ToLowerCase(input1);
  solution.Reverser(input2);
  std::string expected1 = "ee599!";
  std::string expected2 ="!995EE";
  std::string actual2=input2;

  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}


TEST(Third, ReturnHelloWorld) {
  Solution solution;
  int index1=0,index2=1;
  std::string input1 = "TEST";
  std::string input2 = "TEST";
  std::string actual = solution.Swapindex(input1,index1,index2);
  std::string expected = "ETST";
  std::string actual1 = solution.ToLowerCase(input1);
  solution.Reverser(input2);
  std::string expected1 = "test";
  std::string expected2 ="TSET";
  std::string actual2=input2;

  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}
