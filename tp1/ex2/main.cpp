#include <iostream>

#include "Person.hpp"

int main() {
    Person person = Person("Palluche", "La Faluche");
    //person.first_name = "Palluche";
    //person.surname = "La Faluche";

    std::cout << "La personne s'appelle " << person.get_first_name() << " " << person.get_surname() << std::endl;

    return 0;
}