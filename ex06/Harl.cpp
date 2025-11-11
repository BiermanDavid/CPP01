#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info ( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning ( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
    Harl say;
    int index = -1;
    
    if (level == "DEBUG")
        index = 0;
    else if (level == "INFO")
        index = 1;
    else if (level == "WARNING")
        index = 2;
    else if (level == "ERROR")
        index = 3;

    switch(index)
    {
        case 0:
            say.debug();
            break;
        case 1:
            say.info();
            break;
        case 2:
            say.warning();
            break;
        case 3:
            say.error();
            break;
        default:
            std::cout << "invalid argument" << std::endl;
            break;
    }
}
