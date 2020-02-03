#include "solution.h"
#include<map>
#include<string>
#include<iostream>

bool Solution::IfMappable(std::string First, std::string Second){
  std::map<char,char>MapAlphabet;
  sort(Second.begin(),Second.end());
  Second.erase(unique(Second.begin(),Second.end()),Second.end());
  sort(First.begin(),First.end());
  First.erase(unique(First.begin(),First.end()),First.end());
  if (Second.size()!=First.size()) {
    std::cout<<"{ }"<<std::endl;
    return false;
    
    }
  else{
    for(int i=0; i<Second.size(); i++){
      MapAlphabet[First[i]]=Second[i];
    }
    std::map<char,char>::iterator it;
    std::cout<<"{";
    for(it=MapAlphabet.begin();it!=MapAlphabet.end();it++){
      std::cout<<"("<<it->first<<"->"<<it->second<<")";
    }
    std::cout<<"}"<<std::endl;
    return true;

  }
  

  




}