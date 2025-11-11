#include "Zombie.hpp"

/**
 * New will allocate the class variable onto the heap
 */
void randomChump(std::string name)
{
	Zombie chump(name);
	chump.announce();
}