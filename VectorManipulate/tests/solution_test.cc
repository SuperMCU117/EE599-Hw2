#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::vector<int>a={1,2,3,4};
  std::vector<int>b={1,2,3,4};
  std::vector<int>c={1,2,3,4};
  std::vector<int>d={1,2,3,4};
  std::vector<int>e={1,2,3,4};
  std::vector<int>f={1,2,3,4};
  std::vector<int>g={1,2,3,4};
  std::vector<int>h={1,2,3,4};
  solution.RemoveDupWithSet(a);
  solution.RemoveDupWithoutSet(b);
  solution.ReverseVec(c);
  solution.KeepEven(d);
  std::vector<int> expected = {1,2,3,4};
  std::vector<int> reverse = {4,3,2,1};
  std::vector<int> RemoveOdd= {2,4};
  std::vector<int> Concatenating= {1,2,3,4,1,2,3,4};
  std::vector<int> Union= {1,2,3,4};
  EXPECT_EQ(expected, a);
  EXPECT_EQ(expected, b);
  EXPECT_EQ(reverse, c);
  EXPECT_EQ(RemoveOdd, d);
  EXPECT_EQ(Concatenating, solution.ConcatenateVec(e,f));
  EXPECT_EQ(Union, solution.FindUnion(g,h));
  
}


TEST(SecondTest, ReturnValue) {
  Solution solution;
  std::vector<int>a={1,2,2,4};
  std::vector<int>b={1,2,2,4};
  std::vector<int>c={1,2,2,4};
  std::vector<int>d={1,2,2,4};
  std::vector<int>e={1,2,2,4};
  std::vector<int>f={1,2,2,4};
  std::vector<int>g={1,2,2,4};
  std::vector<int>h={1,2,2,4};
  solution.RemoveDupWithSet(a);
  solution.RemoveDupWithoutSet(b);
  solution.ReverseVec(c);
  solution.KeepEven(d);
  std::vector<int> expected = {1,2,4};
  std::vector<int> reverse = {4,2,2,1};
  std::vector<int> RemoveOdd= {2,2,4};
  std::vector<int> Concatenating= {1,2,2,4,1,2,2,4};
  std::vector<int> Union= {1,2,4};
  EXPECT_EQ(expected, a);
  EXPECT_EQ(expected, b);
  EXPECT_EQ(reverse, c);
  EXPECT_EQ(RemoveOdd, d);
  EXPECT_EQ(Concatenating, solution.ConcatenateVec(e,f));
  EXPECT_EQ(Union, solution.FindUnion(g,h));
  
}


TEST(ThirdTest, ReturnHelloWorld) {
  Solution solution;
  std::vector<int>a={1,2,2,3};
  std::vector<int>b={1,2,2,3};
  std::vector<int>c={1,2,2,3};
  std::vector<int>d={1,2,2,3};
  std::vector<int>e={1,2,2,3};
  std::vector<int>f={3,5,6};
  std::vector<int>g={1,2,2,3};
  std::vector<int>h={3,4,5};
  solution.RemoveDupWithSet(a);
  solution.RemoveDupWithoutSet(b);
  solution.ReverseVec(c);
  solution.KeepEven(d);
  std::vector<int> expected = {1,2,3};
  std::vector<int> reverse = {3,2,2,1};
  std::vector<int> RemoveOdd= {2,2};
  std::vector<int> Concatenating= {1,2,2,3,3,5,6};
  std::vector<int> Union= {3};
  EXPECT_EQ(expected, a);
  EXPECT_EQ(expected, b);
  EXPECT_EQ(reverse, c);
  EXPECT_EQ(RemoveOdd, d);
  EXPECT_EQ(Concatenating, solution.ConcatenateVec(e,f));
  EXPECT_EQ(Union, solution.FindUnion(g,h));
  
}

TEST(ForthTest, ReturnHelloWorld) {
  Solution solution;
  std::vector<int>a={1,2,2,3,3,5};
  std::vector<int>b={1,2,2,3,3,5};
  std::vector<int>c={1,2,2,3,3,5};
  std::vector<int>d={1,2,2,3,3,5};
  std::vector<int>e={1,2,2,3,3,5};
  std::vector<int>f={1,2,3,3,5};
  std::vector<int>g={1,2,2,3};
  std::vector<int>h={3,4,5};
  solution.RemoveDupWithSet(a);
  solution.RemoveDupWithoutSet(b);
  solution.ReverseVec(c);
  solution.KeepEven(d);
  std::vector<int> expected = {1,2,3,5};
  std::vector<int> reverse = {5,3,3,2,2,1};
  std::vector<int> RemoveOdd= {2,2};
  std::vector<int> Concatenating= {1,2,2,3,3,5,1,2,3,3,5};
  std::vector<int> Union= {3};
  EXPECT_EQ(expected, a);
  EXPECT_EQ(expected, b);
  EXPECT_EQ(reverse, c);
  EXPECT_EQ(RemoveOdd, d);
  EXPECT_EQ(Concatenating, solution.ConcatenateVec(e,f));
  EXPECT_EQ(Union, solution.FindUnion(g,h));
  
}

