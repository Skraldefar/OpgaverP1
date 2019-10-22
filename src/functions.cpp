#include <iostream>
#include <string.h>


void outputName(std::string var)
{
    std::cout << "\nMy name is " << var << std::endl;
}

int main()
{
    std::string name;
    std::cout << "Input a name: ";
    std::cin >> name;
    outputName(name);
    
    return 0;
}


