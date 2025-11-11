#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

/**
 * OK so they provided this main for testing. It should print an attack with Crude Spiked Club
 * followed by a second attack with "Some other type of club" whatever that means.
 * HumanA uses reference instead of pointer. Good if a relationship needs to persist
 * like a car NEEDS an engine and cant exist without it and that relationship shouldnt change.
 * But Human B doesnt have this, it uses a pointer so the weapon is optional.
 * very good if you need something like a person thay may or may not have a weapon
 * and that relationship to the weapon status COULD change at any time.
 */
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}
