#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  std::string PrintHelloWorld();
  void RemoveDupWithSet(std::vector<int>& input);
  void RemoveDupWithoutSet(std::vector<int>& input);
  void ReverseVec(std::vector<int>&input);
  void KeepEven(std::vector<int>&input);
  std::vector<int> ConcatenateVec(std::vector<int>&input1,std::vector<int>&input2);
  std::vector<int> FindUnion(std::vector<int>&input1,std::vector<int>&input2);

};


#endif