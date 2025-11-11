#include "Zombie.hpp"
#include <unistd.h>

void Ritual(void)
{
	std::cout << "You start a ritual to summon the dead..." << std::endl;
	sleep(2);
	Zombie* mj = newZombie("Michael Jackson");
	mj->announce();
	sleep(2);
	std::cout << "The ritual fails, Michael Jackson is too powerful!" << std::endl;
	sleep(2);
	safeDelete(mj);
}

/**
 * OK so i noticed that the zombie still exists in memory after deleting
 * delete destroys the zombie object and returns the memory to the heap
 * But the zombie is STILL accessible with the local variable if i call him. So we need to use
 * nullptr so that the pointer variable is cleared and cant be accessed anymore.
 * *& is used so we pass the name by reference. This function existed in main originally
 * and did not require this, but making this helper function allows me to reuse the functionality.
 */
void safeDelete(Zombie*& name)
{
	delete name;
	name = nullptr;
}

int main (void)
{
	Ritual();
	std::cout << "That didnt work, this time you attempt an weaker zombie..." << std::endl;
	sleep(2);
	std::string chump = "Elvis";
	randomChump(chump);
	sleep(2);
	std::cout << "Elvis Collapses from drug overdose... This one was WAY too weak...";

	return (0);
}