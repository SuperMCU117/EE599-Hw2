#include <iostream>
#include "src/lib/solution.h"
#include <algorithm>

int main()
{
    Solution solution;
    std::vector<int>Val={1,2,2,3,3,5};
    std::vector<int>Val1={1,2,2,3,3,5};
    std::vector<int>Val2={1,2,2,3,3,5};
    std::vector<int>Val3={1,2,2,3,3,5};
    std::vector<int>Val4={1,2,2,3,3,5};
    std::vector<int>Val5={1,2,3,3,5};
    std::vector<int>Val6={1,2,2,3};
    std::vector<int>Val7={3,4,5};
//without using set
    std::cout<<"before: ";
    std::copy(Val1.begin(),Val1.end(),std::ostream_iterator<int>(std::cout," "));
    solution.RemoveDupWithoutSet(Val1);
    std::cout<<"after: ";
    std::copy(Val1.begin(),Val1.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;

//using set
    std::cout<<"before: ";
    std::copy(Val.begin(),Val.end(),std::ostream_iterator<int>(std::cout," "));
    solution.RemoveDupWithSet(Val);
    std::cout<<"after: ";
    std::copy(Val.begin(),Val.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;

// reverse vector
    std::cout<<"before: ";
    std::copy(Val2.begin(),Val2.end(),std::ostream_iterator<int>(std::cout," "));
    solution.ReverseVec(Val2);
    std::cout<<"after: ";
    std::copy(Val2.begin(),Val2.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;

// save even
    std::cout<<"before: ";
    std::copy(Val3.begin(),Val3.end(),std::ostream_iterator<int>(std::cout," "));
    solution.KeepEven(Val3);
    std::cout<<"after: ";
    std::copy(Val3.begin(),Val3.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;

//concatenate
    std::cout<<"before: [";
    std::copy(Val4.begin(),Val4.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<"],[";
    std::copy(Val5.begin(),Val5.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<"]";
    std::vector<int>result=solution.ConcatenateVec(Val4,Val5);
    std::cout<<"after: [";
    std::copy(result.begin(),result.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<"]"<<std::endl;

//Union
std::cout<<"before: [";
    std::copy(Val6.begin(),Val6.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<"],[";
    std::copy(Val7.begin(),Val7.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<"]";
    std::vector<int>result1=solution.FindUnion(Val6,Val7);
    std::cout<<"after: [";
    std::copy(result1.begin(),result1.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<"]"<<std::endl;



    return EXIT_SUCCESS;
}