#include "solution.h"
#include <iostream>
#include <string>
std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::Add(int FirstValue, int SecondValue){
  int Ans=0;
  Ans=FirstValue+SecondValue;
  std::cout<<"input: ("<<FirstValue<<","<<SecondValue<<"). output:"<<Ans<<std::endl;
  return Ans;
}

std::string Solution::Add(std::string FirstChar, std::string SecondChar){
  std::string Ans;
  Ans=FirstChar+SecondChar;
  std::cout<<"input: ("<<FirstChar<<","<<SecondChar<<"). output:"<<Ans<<std::endl;
  return Ans;
}
std::string Solution::Add(int FirstValue, std::string SecondChar){
  std::string Ans;
  Ans = std::to_string(FirstValue)+SecondChar;
  std::cout<<"input: ("<<FirstValue<<","<<SecondChar<<"). output:"<<Ans<<std::endl;
  return Ans;
}
std::string Solution::Add(std::string FirstChar, int SecondValue){
  std::string Ans;
  Ans = FirstChar+std::to_string(SecondValue);
  std::cout<<"input: ("<<FirstChar<<","<<SecondValue<<"). output:"<<Ans<<std::endl;
  return Ans;
}


