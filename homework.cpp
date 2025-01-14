/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector


int input1;
int input2;


void compare(double x, double y)
{
    if (x>y)
    {
        std::cout << "The first input is larger than the second input.\n";
    } else if (x<y)
    {
        std::cout << "The first input is smaller than the second input.\n";
    } else if (x==y)
    {
        std::cout << "Both inputs are equal.\n";
    }
}


int main()
{


    // Complete your homework here
    std::cout << "Enter 2 numbers:\n";
    std::cin >> input1 >> input2;
    compare(input1,input2);
    
    return 0;
}
