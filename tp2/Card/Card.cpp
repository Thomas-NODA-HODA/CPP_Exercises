#include "Card.hpp"

Card::Card(unsigned int value, std::string color);
_value{value}, _color{color}
{
}

std::string Card::print()
{
  return _value + " de " + _color;
}