#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

const std::string DEBUG  = "\033[1;34m";
const std::string GREEN  = "\033[1;32m";
const std::string WHITE  = "\033[0m";
const std::string RED = "\033[31m";

/**
 * use ~ tilde to automatically run if that object is destroyed. Good for debug and can only have one per class.
 * Announce is a member function that has access to the private name variable and also can be used on separate instances.
 * What that means is that each zombie owns its own unique Announce function.
 * string name : name(name) {}. The semicolon is an initializer list. It makes member variables called name with the parameter name.
 * we can add a function inbetween {} to lets say print a debug message. Since this is a CONSTRUCTOR, it will print whatever 
 * as soon as that object is created.
 */
class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
