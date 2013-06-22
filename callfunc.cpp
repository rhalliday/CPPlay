/*
 * =====================================================================================
 *
 *       Filename:  callfunc.cpp
 *
 *    Description:  Demonstration of how to call a function
 *
 *        Version:  1.0
 *        Created:  24/12/12 15:04:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Robert Halliday (rh), rob_halliday_1@hotmail.com
 *        Company:  rphhpr
 *
 * =====================================================================================
 */

#include <iostream>

// function Demonstrating a Call to a Function
// prints out a useful message
void DemonstrationFunction()
{
    std::cout << "In Demonstration Function\n";
}

// function main - prints out a message, then
// calls DemonstrationFunction, then prints out
// a second message.
int main()
{
    std::cout << "In main\n";
    DemonstrationFunction();
    std::cout << "Back in main\n";
    return 0;
}

