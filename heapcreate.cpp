/*
 * =====================================================================================
 *
 *       Filename:  heapcreate.cpp
 *
 *    Description:  Demonstrating adding objects to the heap
 *
 *        Version:  1.0
 *        Created:  03/01/13 20:20:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Robert Halliday (rh), rob_halliday_1@hotmail.com
 *        Company:  rphhpr
 *
 * =====================================================================================
 */

#include <iostream>

class SimpleCat
{
    public:
        SimpleCat();
        ~SimpleCat();
    private:
        int itsAge;
};

SimpleCat::SimpleCat()
{
    std::cout << "Constructor called." << std::endl;
    itsAge = 1;
}

SimpleCat::~SimpleCat()
{
    std::cout << "Destructor called." << std::endl;
}

int main()
{
    std::cout << "SimpleCat Frisky..." << std::endl;
    SimpleCat Frisky;

    std::cout << "SimpleCat *pRags = new SimpleCat..." << std::endl;
    SimpleCat * pRags = new SimpleCat;

    std::cout << "delete pRags..." << std::endl;
    delete pRags;

    std::cout << "Exiting, watch Frisky go..." << std::endl;
    return 0;
}
