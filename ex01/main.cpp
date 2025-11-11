#include "Zombie.hpp"
#include <unistd.h>

/**
 * Literally just take the name from this name array list and pass that as the string for the new zombie thats created.
 * Can migrate all of the zombie horde logic into here so it happens within the function but they said the function for ZombieHorde
 * NEEDS to be prototyped this way. which is lame as hell.
 */
Zombie* zombieHorde( int N, std::string name)
{
    std::string names[] = {"null", 
                            "Jimmy Carter", 
                            "George H. W. Bush", 
                            "Ronald Raegan", 
                            "Gerald Ford", 
                            "Richard Nixon", 
                            "Lyndon Johnson", 
                            "Dwight Eisenhower", 
                            "Harry Truman", 
                            "Franklin Roosevelt", 
                            "Herbert Hoover",
                            "null"};
    name = names[N];
	return (new Zombie(name));
}

/**
 * Basic prompt we want to use multiple times. So I made a prompt wrapper function so the code is cleaner 
 * and doesnt repeat this for every input failure.
 */
void prompt(void)
{
    std::cout << RED << "You attempt to summon a HORDE of zombies..." << WHITE << std::endl;
    sleep(1);
    std::cout << RED << "think of a number between 1 and 10 to complete the ritual..." << WHITE << std::endl;
}

/**
 * OK so basically we just take the N number passed and call Zombie horde which returns N number of zombies.
 * we add this to the vector so we can track all of them and simultaniously delete OR announce later.
 */
void SpawnHorde(std::vector<Zombie*>& objects, int n, std::string name)
{
    while (n > 0)
    {
        Zombie* zed = zombieHorde(n, name);
        objects.push_back(zed);
        n--;
    }
}

/**
 * OK so we take user input for a number since I dont want to deal with making an inifinite number of random zombie names.
 * Do a simple try and catch to STOI the passed string and convert to an int.
 * Check if user is tryin to crash program with ctrl D by protecting getline.
 * take that users number. if it succeeds, pass that as the number of zombies they should spawn in Spawn Horde function.
 * On every Failure for bad input just recursively call HandleInputs again so program loops. Otherwise it will simply close
 * the program and then theyre gonna have to do ./zombie again which is annoying.
 */
void HandleInputs(std::vector<Zombie*>& objects)
{
    std::string input;
    std::string name;
    int n = 0;
    
    if (!std::getline(std::cin, input))
	{
		std::cout << GREEN << "//DEBUG Getline Failed Because User is naughty" << WHITE << std::endl;
        return ;
	}
    try
    {
        n = std::stoi(input);
        if (n >= 1 && n <= 10)
        {
            // std::cout << GREEN << "//DEBUG Number inside of range." << WHITE << std::endl;
            SpawnHorde(objects, n, name);
        }
        else
        {
            std::cout << RED << "The ritual fails..." << WHITE <<std::endl;
            sleep(1);
            prompt();
            HandleInputs(objects);
        }
    }
    catch(const std::exception& e)
    {
        // std::cout << "//CATCH: " << e.what() << std::endl;
        std::cout << RED << "The ritual fails..." << WHITE <<std::endl;
        prompt();
        HandleInputs(objects);
    }
}

/**
 * OK so we need to try out this vector thing so that we can simultaniously DELETE all the objects at once.
 * We call the prompt to tell user how to use the program.
 * Then I call my handle inputs. 
 * After that I have an objects Announce loop which will announce all existing Zombie Objects. If there are none,
 * then it simply exits and I do another prompt. 
 * After this prompt I use same vector logic to nuke all the objects which calls the destructor message in hpp.
 * If there are no objects, same logic as the announce so it simply exits safely.
 */
int main(void)
{
    std::vector<Zombie*> objects;
    prompt();
    HandleInputs(objects);

    for (auto obj : objects)
    {
        obj->announce();
    }

    sleep(2);
    std::cout << RED << "This was fun, but zombies are kind of lame..." << WHITE << std::endl;
    sleep(2);

    for (auto obj : objects)
    {
        delete obj;
    }
    return (0);
}

