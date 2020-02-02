#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    int x= 10;
    int y= 20;
    std::cout<<"Before: x="<<x<<", y="<<y<<", we call Swap(x,y); "<<std::endl;
    solution.Swap(x,y);
    std::cout<<"After: x="<<x<<", y="<<y<<std::endl;
    return 0;
}