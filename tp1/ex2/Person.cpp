#include "Person.hpp"

Person::Person(std::string first_name, std::string surname){
    Person::first_name = first_name;
    Person::surname = surname;
};

std::string Person::get_first_name() {
    return Person::first_name;
};

std::string Person::get_surname() {
    return Person::surname;
};