#include <iostream>
#include "src/lib/solution.h"
#include <array>
int main()
{
    //std::array<int,5>myarray;
    int Myarray[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    std::cout<<sizeof(Myarray)/sizeof(Myarray[0][0])<<std::endl;
    char Myarray1[3][3]={{'a','b','c'},{'e','f','g'},{'i','j','k'}};
    std::cout<<sizeof(Myarray1)/sizeof(Myarray1[0][0])<<std::endl;
    float Myarray2[3][3]={{1.1,2.2,3.3},{4.3,5.4,6.5},{7.7,8.6,9.5}};
    std::cout<<sizeof(Myarray2)/sizeof(Myarray2[0][0])<<std::endl;

    //std::cout<<"size of Myarray "<<myarray.size()<<"  "<<sizeof(Myarry)<<std::endl;



    return EXIT_SUCCESS;
}