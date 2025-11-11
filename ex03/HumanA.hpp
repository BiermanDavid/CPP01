#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include "Weapon.hpp"

/**
 * Make a Human class( A )
 * It needs a weapon as constructor for A
 * we shbould pass this as a reference instead of a copy. so we use Weapon& weapon so we dont create unnecessary copies.
 * since its passed as a reference we need to declare weapon& weapon instead of a pointer weapon* weapon, and also
 * instead of making a NEW weapon with Weapon newWeapon;.
 * since we want to get access to this weapon as a reference, we use weapon.getType instead of weapon->getType which is for pointer.
 * Also we have to add the weapon to the initializer list so that it is called as a parameter when we create the weapon. 
 * this basically auto assigns the Human A as having a weapon.
 */
class HumanA
{
	private:
		std::string name;
        Weapon& weapon;
	
	public:
		HumanA(std::string name_param, Weapon& weapon_param); 
		~HumanA();
        void attack();
};

#endif
