#include "Weapon.hpp"

Weapon::Weapon(std::string type_param) :type(type_param) 
{
    std::cout << "A " << RED << type << WHITE << " is visible on the weapon rack." << std::endl;
}

Weapon::~Weapon() 
{
    std::cout << RED << type << WHITE << " was destroyed." << std::endl;
}

void Weapon::setType(std::string newType) 
{
    std::cout << RED << type << WHITE << " was swapped with " << RED << newType << WHITE << std::endl;
    type = newType;
}

std::string Weapon::getType() 
{
    return (type);
}