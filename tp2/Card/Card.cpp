#include "Card.hpp"

#include <iostream>

Card::Card(unsigned int value, const std::string color) : _value{value}, _color{color} {};

void Card::print() const
{
  std::cout << _value << " de " << _color << std::endl;
};