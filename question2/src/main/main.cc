#include <iostream>
#include "src/lib/solution.h"
#include <array>
int main()
{
    //std::array<int,5>myarray;
    int Myarray[10][10];
    std::cout<<sizeof(Myarray)/sizeof(Myarray[0][0])<<std::endl;
    //std::cout<<"size of Myarray "<<myarray.size()<<"  "<<sizeof(Myarry)<<std::endl;



    return EXIT_SUCCESS;
}