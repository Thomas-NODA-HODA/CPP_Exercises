#include <iostream>
#include <vector>

#include "Person.hpp"

int main() {
    std::cout << "Nombre de personnes: ";
    int number;
    std::cin >> number;

    std::vector<Person> persons(number);

    std::string first_name;
    std::string surname;

    for(int i = 0; i < number; ++i) {
        std::cout << "Prenom: ";
        std::cin >> first_name;
        std::cout << "Nom: ";
        std::cin >> surname;

        Person person = Person{first_name, surname};

        persons.push_back(person);
    }
    
    std::cout << "Les personnes sont ";

    std::string separator = "";

    for(auto person : persons) {
        std::cout << separator << person.get_first_name() << " " << person.get_surname();
        separator = ", ";
    }

    std::cout << std::endl;

    return 0;
}