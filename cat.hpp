/*
 * =====================================================================================
 *
 *       Filename:  cat.hpp
 *
 *    Description: Header file for the cat class 
 *
 *        Version:  1.0
 *        Created:  02/01/13 20:43:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Robert Halliday (rh), rob_halliday_1@hotmail.com
 *        Company:  rphhpr
 *
 * =====================================================================================
 */

#include <iostream>

class Cat
{
    public:
        Cat (int initialAge);
        ~Cat();
        int GetAge() { return itsAge; }
        void SetAge (int age) { itsAge = age; }
        void Meow() { std::cout << "Meow.\n";}
    private:
        int itsAge;
};
