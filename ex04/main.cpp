#include "Sed.hpp"
#include <fstream>

/**
 * OK so we need argv1 to be a filename, argv2 and 3 are strings.
 * we need to open the filename and replace every occurance of string 1 with string 2
 */
int main(int argc, char *argv[])
{
    std::ifstream infile;
    std::ofstream outfile;
    std::string tofind;
    std::string toreplace;
    std::string line;
    std::string modified;
    std::string NewFileName;
    int index = 1;

    if (argc != 4)
    {
        std::cout << "Try ./sed <filename> <string1> <string2>" << std::endl;
        return (0);
    }
    
    infile.open(argv[1]);
    if (!infile.is_open())
    {
        std::cout << "//ERROR: File not found." << std::endl;
        return (0);
    }
    else
        std::cout << "file " << argv[1] << " was opened." << std::endl;

    //just making arguments into strings
    tofind = argv[2];
    toreplace = argv[3];
    NewFileName = std::string(argv[1]) + ".replaced";

    //we use outfile and infile so that we can modify strings without read, write open close etc. 
    outfile.open(NewFileName);
    
    //calling sed class to pass the find and replace strings. This creates an object that we can use to 
    //call our custom replace.
    Sed sed(tofind, toreplace);

    while (std::getline(infile, line))
    {
        std::cout << "//customReplace: Member function called on line " << index << std::endl;
        index++;
        modified = sed.customReplace(line);
        outfile << modified << std::endl;
    }

    infile.close();
    outfile.close();
    return(0);
}