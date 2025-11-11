#include "Harl.hpp"


int main(int argc, char *argv[])
{
    Harl say;

    if (argc == 2)
    {
        say.complain(argv[1]);
    }

    return (0);
}