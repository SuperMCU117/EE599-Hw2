#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  std::string PrintHelloWorld();
  int Add(int FirstValue, int SecondValue);
  std::string Add(std::string FirstChar, std::string SecondChar);
  std::string Add(int FirstValue, std::string SecondChar);
  std::string Add(std::string FirstChar, int SecondValue);
};

#endif