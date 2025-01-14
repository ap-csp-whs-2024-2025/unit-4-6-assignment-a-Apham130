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

// In-Class Examples
// greet procedure

// goodbye procedure


// TODO: Create squareNum
void squareNum(double n)
{
    std::cout << "The square of " << n << " is " << n * n << ".\n";
}
// TODO: Create distance
void distance(double x, double y)
{
    double dist = abs(x-y);
    std::cout << "The distance between " << x << " and " << y << " is " << dist << ".\n";
}
// TODO: Create rollDice
void rollDice()
{
    int numRand = std::rand() % 6 + 1;
    std::cout << "You rolled a " << numRand << ".\n";
}
int main()
{
    // You can follow along with any code in class here
    std::srand(std::time(0));
    //double num;
    //std::cout << "Random number\n> ";
    //std::cin >> num;
    //squareNum(num);
    //double num1;
    //double num2;
    //std::cout << "2 random numbers\n> ";
    //std::cin >> num1;
    //std::cout << "> ";
    //std::cin >> num2;
    //distance(num1, num2);
    rollDice();
    rollDice();
    rollDice();
    rollDice();
    rollDice();
    rollDice();
    rollDice();
    rollDice();
    
    return 0;
}
