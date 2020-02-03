#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int>inputs{637,231,123,43,69,43,900,10,7,21,0,500};
    solution.VecRearrange(inputs);
    for (auto n: inputs){
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;

    return EXIT_SUCCESS;
}