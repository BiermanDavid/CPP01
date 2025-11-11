#include "HumanA.hpp"


/**
 * Originally i defined this inside my hpp but the subject required a .cpp. 
 * So apparently the standard is to put it here but use a scope resolution operator ::
 * to tell compiler "hey this belongs to this class"
 * Kind of lame standard tbh. I think it looked better in the .hpp but i guess if this 
 * ends up super robust, it makes sense to put it somewhere else so you can build on layers to it.
 * Like if we had HP related or other important member funcitons.
 */
HumanA::HumanA(std::string name_param, Weapon& weapon_param) : name(name_param), weapon(weapon_param) 
{
    std::cout << GREEN << name << WHITE << " enters the arena and grabs the " << RED << weapon.getType() << WHITE << std::endl;
}

/**
 * Simple Destructor message
 */
HumanA::~HumanA()
{
    std::cout << GREEN << name << WHITE << " leaves the arena." << std::endl;
}

/**
 * we access a reference to the weapon, not a pointer
 * so its weapon.getType instead of weapon->getType.
 */
void HumanA::attack() 
{
    std::cout << GREEN << name << WHITE << " attacks with their weapon " << RED << weapon.getType() << WHITE << std::endl;
}
