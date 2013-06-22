/*
 * =====================================================================================
 *
 *       Filename:  func.cpp
 *
 *    Description:  Demonstration of using functions with arguments.
 *
 *        Version:  1.0
 *        Created:  27/12/12 22:20:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Robert Halliday (rh), rob_halliday_1@hotmail.com
 *        Company:  rphhpr
 *
 * =====================================================================================
 */

#include <iostream>

int Add (int x, int y)
{
    std::cout << "In Add(), recieved " << x << " and " << y << "\n";
    return (x+y);
}

int main()
{
    std::cout << "I'm in main()!\n";
    std::cout << "\nCalling Add()\n";
    std::cout << "The value returned is: " << Add(3,4);
    std::cout << "\nBack in main().\n";
    std::cout << "\nExiting...\n\n";
    return 0;
}
