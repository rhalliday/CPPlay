/*
 * =====================================================================================
 *
 *       Filename:  factor.cpp
 *
 *    Description:  returning multiple values
 *
 *        Version:  1.0
 *        Created:  03/01/13 21:48:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Robert Halliday (rh), rob_halliday_1@hotmail.com
 *        Company:  rphhpr
 *
 * =====================================================================================
 */

#include <iostream>

enum ERR_CODE { SUCCESS, ERROR };

ERR_CODE Factor(int, int*, int*);

int main()
{
    int number, squared, cubed;
    ERR_CODE result;

    std::cout << "Enter a number (0 - 20): ";
    std::cin >> number;

    result = Factor(number, &squared, &cubed);

    if (result == SUCCESS)
    {
        std::cout << "number: " << number << "\n";
        std::cout << "square: " << squared << "\n";
        std::cout << "cubed: " << cubed << "\n";
    }
    else
        std::cout << "Error encountered!!\n";
    return 0;
}

ERR_CODE Factor(int n, int *pSquared, int *pCubed)
{
    if ( n > 20 )
        return ERROR;
    else
    {
        *pSquared = n*n;
        *pCubed = n*n*n;
        return SUCCESS;
    }
}
