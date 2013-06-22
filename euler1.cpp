/*
 * =====================================================================================
 *
 *       Filename:  euler1.cpp
 *
 *    Description:  Implements the first problem of Project Euler and finds
 *                  the sum of the multiples of 3 and 5 below 1000
 *
 *        Version:  1.0
 *        Created:  03/05/13 21:55:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Robert Halliday (rh), rob_halliday_1@hotmail.com
 *        Company:  rphhpr
 *
 * =====================================================================================
 */

#include <iostream>

int sum_multiples(int multiple, int max_num)
{
    int start = multiple;
    int total = 0;
    while(start < max_num)
    {
        total += start;
        start += multiple;
    }
    return total;
}

int main()
{
    int result = sum_multiples(3, 1000) + sum_multiples(5, 1000);

    std::cout << "sum is: " << result << std::endl;

    return 0;
}
