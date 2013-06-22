/*
 * =====================================================================================
 *
 *       Filename:  addressdemo.cpp
 *
 *    Description:  Demonstrating the address of operator and addresses of local variables
 *
 *        Version:  1.0
 *        Created:  02/01/13 20:56:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Robert Halliday (rh), rob_halliday_1@hotmail.com
 *        Company:  rphhpr
 *
 * =====================================================================================
 */

#include <iostream>

int main()
{
    unsigned short shortVar=5;
    unsigned long  longVar=665535;
    long sVar = -65535;

    std::cout << "shortVar:\t" << shortVar << "\tAddress of shortVar:\t" << &shortVar << "\n";
    std::cout << "longVar:\t" << longVar << "\tAddress of longVar:\t" << &longVar << "\n";
    std::cout << "sVar:\t\t" << sVar << "\tAddress of sVar:\t" << &sVar << "\n";

    return 0;
}

