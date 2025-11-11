#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

const std::string DEBUG  = "\033[1;34m";
const std::string GREEN  = "\033[1;32m";
const std::string WHITE  = "\033[0m";
const std::string RED = "\033[31m";

/**
 * Make a weapon class
 * use a get type member funciton that returns ref to type
 * use a set type as well that passes the new value
 * put that in public for sure
 * Private needs to contain the weapon type which i guess will be a string maybe?
 */
class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type_param) :type(type_param) 
        {
            std::cout << "A " << RED << type << WHITE << " is visible on the weapon rack." << std::endl;
        }
        ~Weapon() {std::cout << type << " was destroyed." << std::endl;}
        void setType(std::string newType) 
        {
            std::cout << RED << type << WHITE << " was swapped with " << RED << newType << WHITE << std::endl;
            type = newType;
        }
        std::string getType() {return type;}
};

 #endif