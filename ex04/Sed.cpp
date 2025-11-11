#include "Sed.hpp"

/**
 * Generic Constructor statement with initializer list. Just have a debug statement here for testing
 */
Sed::Sed(std::string str1_param, std::string str2_param) : str1(str1_param), str2(str2_param) 
{
    std::cout << "//CONSTRUCTOR: Sed was passed " << str1_param << " " << str2_param << std::endl;
}

/**
 * Just a destructor i use for debugging.
 */
Sed::~Sed() 
{
    std::cout << "//DESTRUCTOR: Sed object destroyed" << std::endl;
}

std::string Sed::customReplace(std::string line) 
{
    std::string result;
    size_t position;
    size_t last;
    result = "";
    position = 0;
    last = 0;

    while ((position = line.find(str1, last)) != std::string::npos)
    {
        result = result + line.substr(last, position - last);
        result = result + str2;
        last = position + str1.length();
    }
    result = result + line.substr(last);
    return(result);
}