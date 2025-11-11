#include "Zombie.hpp"
#include <unistd.h>

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << GREEN << "//CONSTRUCTOR: " << name << " was raised from the dead" << WHITE << std::endl;
}


Zombie::~Zombie() 
{
	std::cout << RED << "//DESTRUCTOR: " <<  name << " is destroyed" << WHITE <<std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}