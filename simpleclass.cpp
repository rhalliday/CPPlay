/*
 * =====================================================================================
 *
 *       Filename:  simpleclass.cpp
 *
 *    Description:  Implementing the Methods of a simple Class. Demonstrates declaration
 *                  of a class and definition of class methods.
 *
 *        Version:  1.0
 *        Created:  02/01/13 16:42:28
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
        Cat(int initialAge);
        ~Cat();
        int GetAge();
        void SetAge (int age);
        void Meow();
    private:
        int itsAge;
};

// Cat constructor
Cat::Cat(int initialAge)
{
    itsAge = initialAge;
}

// Cat destructor
Cat::~Cat()
{

}

// GetAge, Public accessor function
// returns value of itsAge member
int Cat::GetAge()
{
    return itsAge;
}

// definition of SetAge, public accessor function
// sets itsAge member
void Cat::SetAge(int age)
{
    // set member variable its age to
    // value passed in by parameter age
    itsAge = age;
}

// definition of Meow method
// returns: void
// parameters: None
// action: prints "meow" to screen
void Cat::Meow()
{
    std::cout << "Meow.\n";
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

