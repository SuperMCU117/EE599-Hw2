#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;

    std::string input1="aabbcc" , input2="ccddee";
    std::cout<<"Input: from = \""<<input1<<"\", to= \""<<input2<<"\""<<std::endl;
    std::cout<<"Output: ";
    solution.IfMappable(input1,input2);

    return EXIT_SUCCESS;
}