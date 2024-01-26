#include "Card.hpp"

#include <iostream>

Card::Card(unsigned int value, std::string color) : _value{value}, _color{color} {};

void Card::print()
{
  std::cout << _value << " de " << _color << std::endl;
};