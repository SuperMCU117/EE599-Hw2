#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(First, ReturnHelloWorld) {
  Solution solution;
  std::string input = "madam";
  std::string input1 = "madam";
  bool actual = solution.FindSimplePalindrome(input);

  bool actual1 = solution.FindApproxPalindrome(input1);
  EXPECT_EQ(true, actual);
  EXPECT_EQ(true, actual1);
  
}

TEST(Second, ReturnHelloWorld) {
  Solution solution;
  std::string input = "raccar";
  std::string input1 = "raccar";
  bool actual = solution.FindSimplePalindrome(input);

  bool actual1 = solution.FindApproxPalindrome(input1);
  EXPECT_EQ(true, actual);
  EXPECT_EQ(true, actual1);
  
}
TEST(Third, ReturnHelloWorld) {
  Solution solution;
  std::string input = "A man, a plan, a canal, Panama!";
  std::string input1 = "A man, a plan, a canal, Panama!";
  bool actual = solution.FindSimplePalindrome(input);

  bool actual1 = solution.FindApproxPalindrome(input1);
  EXPECT_EQ(false, actual);
  EXPECT_EQ(true, actual1);
  
}
TEST(Forth, ReturnHelloWorld) {
  Solution solution;
  std::string input = "Was it a car or a cat I saw?";
  std::string input1 = "Was it a car or a cat I saw?";
  bool actual = solution.FindSimplePalindrome(input);

  bool actual1 = solution.FindApproxPalindrome(input1);
  EXPECT_EQ(false, actual);
  EXPECT_EQ(true, actual1);
  
}
