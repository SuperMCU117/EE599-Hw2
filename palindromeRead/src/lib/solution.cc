#include "solution.h"
#include<iostream>

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

bool Solution::FindSimplePalindrome(std::string input){

  int length=0;
  bool flag = 1;
  length=input.length();
  char char_array[length+1];
  strcpy(char_array,input.c_str());
  for(int i=0;i<length;i++){
    if (char_array[i]!=char_array[length-i-1]){
      flag=0;
      break;
    }
  }
return flag;

}


bool Solution::FindApproxPalindrome(std::string input){
  int counter = 0, length = input.length();
  for (int i = 0; i < length; i++) 
    input[i] = tolower(input[i]); 
  while(counter<=length){
    if (!(input[counter] >= 'a' && input[length] <= 'z'))  counter++; 
    else if ( !(input[length] >= 'a' && input[length] <= 'z')) length--;
    else if (input[counter] == input[length]){
      counter++;
      length--;
    }
    else return false;
  }
  return true;

}

