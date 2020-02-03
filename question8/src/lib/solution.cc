#include "solution.h"
#include<algorithm>



void Solution::VecRearrange(std::vector<int>&inputs){

  sort(inputs.begin(),inputs.end());
  int temp=0;
  if (inputs.size()%2 == 0 ){
    temp = inputs.size()/2;
    reverse(inputs.begin(),inputs.begin()+temp-1);
    reverse(inputs.begin()+temp,inputs.end());
    return;
  }
  else{
    temp = (inputs.size()+1)/2;
    reverse(inputs.begin(),inputs.begin()+temp-1);
    reverse(inputs.begin()+temp+1,inputs.end());
    return;

  }
  

  




}



