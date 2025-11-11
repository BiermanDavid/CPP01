#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include "Weapon.hpp"

/**
 * Make a Human class( B )
 * It needs a weapon as constructor for A
 * B does not Always have a weapon... Whatever that means
 * ok i figured out what it means, since B is NOT required to have a weapon, we can create him without a passed weapon variable
 * BUT later we need to be able to get that weapon and use it so we need a pointer to it
 * and we call weapon->getType instead of weapon.getType so we can access the weapon by pointer, not via reference.
 * for setting a weapon, we manually declare that the weapon is the new weapon parameter. I.E "Some other type of club".
 */
class HumanB
{
	private:
		std::string name;
        Weapon* weapon = nullptr;
	
	public:
		HumanB(std::string name_param);
		~HumanB();
        void attack();
        void setWeapon(Weapon& weapon_param);

};

#endif
