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
        Weapon(std::string type_param);
        ~Weapon();
        void setType(std::string newType);
        std::string getType();
};

 #endif