#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string input = "madam";
    std::string input1 ="A man, a plan, a canal, Panama!";
    if(solution.FindApproxPalindrome(input1)){
        std::cout<<"the string is a palindrome"<<std::endl;
    
    }
    else {
        std::cout<<"the string is not a palindrome"<<std::endl;
    }
    if(solution.FindSimplePalindrome(input)){
        std::cout<<"the string is a palindrome"<<std::endl;
    
    }
    else {
        std::cout<<"the string is not a palindrome"<<std::endl;
    }
    return EXIT_SUCCESS;
}