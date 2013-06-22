/*
 * =====================================================================================
 *
 *       Filename:  passobjectsbyref.cpp
 *
 *    Description:  Passing pointers to objects
 *
 *        Version:  1.0
 *        Created:  04/01/13 21:30:12
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
        SimpleCat(SimpleCat&);
        ~SimpleCat();
};

SimpleCat::SimpleCat()
{
    std::cout << "SimpleCat constructor...\n";
}

SimpleCat::SimpleCat(SimpleCat&)
{
    std::cout << "SimpleCat copy constructor..\n";
}

SimpleCat::~SimpleCat()
{
    std::cout << "SimpleCat destructor...\n";
}

SimpleCat FunctionOne (SimpleCat theCat);
SimpleCat* FunctionTwo (SimpleCat *theCat);

int main()
{
    std::cout << "Making a cat..\n";
    SimpleCat Frisky;
    std::cout << "Calling FunctionOne...\n";
    FunctionOne(Frisky);
    std::cout << "Calling FunctionTwo...\n";
    FunctionTwo(&Frisky);
    return 0;
}

// FunctionOne, passes by value
SimpleCat FunctionOne(SimpleCat theCat)
{
    std::cout << "Function One. Returning...\n";
    return theCat;
}

//FunctionTwo, passes by reference
SimpleCat* FunctionTwo(SimpleCat *theCat)
{
    std::cout << "FunctionTwo returning...\n";
    return theCat;
}
