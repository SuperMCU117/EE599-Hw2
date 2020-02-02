#include "solution.h"
#include<iostream>
#include<set>
#include<vector>

void Solution::RemoveDupWithoutSet(std::vector<int>&input){
  if (input.size()==0) std::cout<<"input is null"<<std::endl;
  sort(input.begin(),input.end());
  input.erase(unique(input.begin(),input.end()),input.end());
  return;

}

void Solution::RemoveDupWithSet(std::vector<int>&input){
  if (input.size()==0) std::cout<<"input is null"<<std::endl;
  else{
    std::vector <int>result;
    //for (int n : input){
    std::set<int>Newset(input.begin(),input.end());
    std::set<int>::iterator itr;
    for(itr=Newset.begin();itr!=Newset.end();++itr){
      result.push_back(*itr);
    }
    int n=0;
    input=result;
    return;
  }
  return;
}

void Solution::ReverseVec(std::vector<int>&input){
  if (input.size()==0) std::cout<<"input is null"<<std::endl;
  else{

    std::vector <int>result;
    for(auto n : input){
      int temp=input.back();
      result.push_back(temp);

      input.pop_back();

    }
    input=result;

  }
  return;
}

void Solution::KeepEven(std::vector<int>&input){
  if (input.size()==0) std::cout<<"input is null"<<std::endl;
  else{
    std::vector<int>result;
    for (auto n: input){
      int temp =n;
      if(temp%2==0){
        result.push_back(temp);
      }

    }
  input=result;
  }
  return;
}

std::vector<int> Solution::ConcatenateVec(std::vector<int>&input1,std::vector<int>&input2){
  if (input1.size()==0||input2.size()==0) std::cout<<"input is null"<<std::endl;
  else{
    std::vector<int>result;
    for (auto n:input1){
      result.push_back(n);
    }
    for(auto m:input2){
      result.push_back(m);
    }
    return result;
  }
}

std::vector<int> Solution::FindUnion(std::vector<int>&input1,std::vector<int>&input2){
  if (input1.size()==0||input2.size()==0) std::cout<<"input is null"<<std::endl;
  else{
    std::vector<int>result;
    for (auto n:input1){
      for (auto m:input2){
        if(n==m) result.push_back(n);
      }
  }
  sort(result.begin(),result.end());
  result.erase(unique(result.begin(),result.end()),result.end());
  return result;
  }

}
