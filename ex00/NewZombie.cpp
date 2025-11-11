#include "Zombie.hpp"

/**
 * New will allocate the class variable onto the heap
 * create zombie, return name
 */
Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}