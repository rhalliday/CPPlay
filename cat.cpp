/*
 * =====================================================================================
 *
 *       Filename:  cat.cpp
 *
 *    Description:  Definition file for the cat class.
 *
 *        Version:  1.0
 *        Created:  02/01/13 20:47:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Robert Halliday (rh), rob_halliday_1@hotmail.com
 *        Company:  rphhpr
 *
 * =====================================================================================
 */

#include "cat.hpp"

Cat::Cat(int initialAge)
{
    itsAge = initialAge;
}

Cat::~Cat()
{
}

// create a cat, set its age, have it meow, tell us its age, then meow again.
int main()
{
    Cat Frisky(5);
    Frisky.Meow();
    std::cout << "Frisky is a cat who is ";
    std::cout << Frisky.GetAge() << " years old.\n";
    Frisky.Meow();
    Frisky.SetAge(7);
    std::cout << "Now Frisky is ";
    std::cout << Frisky.GetAge() << " years old.\n";
    return 0;
}

