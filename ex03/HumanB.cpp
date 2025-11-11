#include "HumanB.hpp"


/**
 * see notes on humanA.cpp
 * but also, definitely makes sense to put it elsewhere now that I see how clean the HPP looks
 * without all the function bodies. :)
 * Also first thing is simple Constructor Message.
 */
HumanB::HumanB(std::string name_param) : name(name_param) 
{
    std::cout << GREEN << name << WHITE << " enters the arena." << std::endl;
}

/**
 * Simple Destructor Message.
 */
HumanB::~HumanB()
{
    std::cout << GREEN << name << WHITE << " leaves the arena." << std::endl;
}

/**
 * OK so for this one we used nullptr just in case you wanna test with no weapon before attacking.
 * otherwise he swings nothing which is a problem. (if you didnt initialize any weapon before, 
 * then this is the only time that applies.)
 * Whats important here is that we access the weapon with weapon->getType() since we want a pointer
 * to the weapon and not a reference to it.
 */
void HumanB::attack() 
{
    if (weapon == nullptr)
    {
        std::cout << name << " does not have a weapon." << std::endl;
    }
    else
    {
        std::cout << GREEN << name << WHITE << " is using " << RED << weapon->getType() << WHITE << std::endl;
        std::cout << GREEN << name << WHITE << " attacks with their weapon " << RED << weapon->getType() << WHITE << std::endl;
    }
}

/**
 * Basically assign the memory address of the weapon parameter to the weapon pointer
 * so it takes whatever the current status of the existing weapon is. 
 */
void HumanB::setWeapon(Weapon& weapon_param) 
{
    weapon = &weapon_param;
}
