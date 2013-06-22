/*
 * =====================================================================================
 *
 *       Filename:  simpleinherit.cpp
 *
 *    Description:  Shows inheritance
 *
 *        Version:  1.0
 *        Created:  19/01/13 10:33:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Robert Halliday (rh), rob_halliday_1@hotmail.com
 *        Company:  rphhpr
 *
 * =====================================================================================
 */

#include <iostream>

enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
    public:
        // constructors
        Mammal():itsAge(2), itsWeight(5){}
        ~Mammal(){}

        // accessors
        int GetAge() const {return itsAge;}
        void SetAge(int age) {itsAge = age; }
        int GetWeight() const { return itsWeight; }
        void SetWeight(int weight) { itsWeight = weight; }

        // Other methods
        void Speak() const { std::cout << "Mammal sound!\n"; };
        void Sleep() const { std::cout << "shhh. I'm sleeping.\n"; }

    protected:
        int itsAge;
        int itsWeight;
};

class Dog : public Mammal
{
    public:
        // Constructors
        Dog():itsBreed(YORKIE){}
        ~Dog(){}

        // Accessors
        BREED GetBread() const { return itsBreed; }
        void SetBreed(BREED breed) { itsBreed = breed; }

        // Other methods
        void WagTail() {std::cout << "Tail wagging...\n"; }
        void BegForFood() {std::cout << "Begging for food...\n"; }

    private:
        BREED itsBreed;
};

int main()
{
    Dog fido;
    fido.Speak();
    fido.WagTail();
    std::cout << "Fido is " << fido.GetAge() << " years old\n";
    return 0;
}
