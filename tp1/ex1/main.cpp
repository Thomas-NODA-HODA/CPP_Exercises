#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Entre ton nom: ";

    //char name[20] = "";
    std::string name;
    std::cin >> name;
    std::cout << "Bonjour " << name << std::endl;

    return 0;
}
