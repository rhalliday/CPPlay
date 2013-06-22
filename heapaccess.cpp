/*
 * =====================================================================================
 *
 *       Filename:  heapaccess.cpp
 *
 *    Description:  Demonstrating indirect access
 *
 *        Version:  1.0
 *        Created:  03/01/13 20:28:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Robert Halliday (rh), rob_halliday_1@hotmail.com
 *        Company:  rphhpr
 *
 * =====================================================================================
 */

#include <iostream>
using std::endl;

class SimpleCat
{
    public:
        SimpleCat() { itsAge = 2; }
        ~SimpleCat() {}
        int GetAge() { return itsAge; }
        void SetAge(int age) { itsAge = age; }
    private:
        int itsAge;
};

int main()
{
    SimpleCat * Frisky = new SimpleCat;
    std::cout << "Frisky is " << Frisky->GetAge()
        << " years old" << endl;

    Frisky->SetAge(5);
    std::cout << "Frisky is " << Frisky->GetAge()
        << " years old" << endl;

    delete Frisky;
    return 0;
}
