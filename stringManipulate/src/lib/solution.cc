#include "solution.h"

std::string Solution::Swapindex(std::string input, int index1, int index2){
  auto temp = input[index1];
  input[index1]=input[index2];
  input [index2]=temp;
  return input;

}
void Solution::Reverser(std::string &input){
  int length = input.length();
  for (int i = 0; i < length/2 ; i++) {
    std::swap(input[i], input[length - i - 1]); 
    
  }
return;
}

std::string Solution::ToLowerCase(std::string input){
  for (int i=0;i<input.length();i++){
    input[i]= tolower(input[i]);
  }
  return input;
  


}


