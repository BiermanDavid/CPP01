#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>

class Sed
{
	private:
		std::string str1;
        std::string str2;
	
	public:
		Sed(std::string str1_param, std::string str2_param);
		~Sed();
		std::string customReplace(std::string line);
};

#endif
