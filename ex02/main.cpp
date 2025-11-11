#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strptr = &str;
	std::string& strref = str;

	std::cout << "Address of String: " << &str << std::endl;
	std::cout << "Pointer Address: " << strptr << std::endl;
	std::cout << "Reference Address: " << &strref << std::endl;

	std::cout << "Data of String: " << str << std::endl;
	std::cout << "Data Pointer uses: " << *strptr << std::endl;
	std::cout << "Data Reference uses: " << strref << std::endl;

	return (0);
}