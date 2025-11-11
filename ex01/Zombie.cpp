#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)	
{
    std::cout << GREEN << "Former U.S. President " << RED << name << GREEN << " was raised from the dead!" << WHITE << std::endl;
}
Zombie::~Zombie()	
{
    std::cout << GREEN << "You shot " << RED << name << GREEN << " in the head." << WHITE <<std::endl;
}
void Zombie::announce(void) 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
