#include <iostream>
#include "src/lib/solution.h"
#include<string>

int main()
{
    Solution solution ;
    std::string val="TEST";
    std::string val1="EE599";
    std::string val2="EE599";
    int Position1 =0, Position2=1;
    std::cout<<solution.Swapindex(val,Position1,Position2)<<std::endl;
    solution.Reverser(val1);
    std::cout<<val1<<std::endl;
    std::cout<<solution.ToLowerCase(val2)<<std::endl;






    return 0;
}