#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(First, ReturnHelloWorld) {
  Solution solution;
  std::vector<int>inputs {637,231,123,43,69,43,900,10,7,21,0,500};
  solution.VecRearrange(inputs);
  std::vector<int> actual = inputs ;
  std::vector<int>expected{43,21, 10, 7 ,0 ,43 ,900, 637 ,500 ,231 ,123, 69 };
  EXPECT_EQ(expected, actual);
}
TEST(Second, ReturnHelloWorld) {
  Solution solution;
  std::vector<int>inputs {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  solution.VecRearrange(inputs);
  std::vector<int> actual = inputs ;
  std::vector<int>expected{43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99 };
  EXPECT_EQ(expected, actual);
}


