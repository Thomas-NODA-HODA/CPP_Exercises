#include "Card.hpp"

#include <iostream>

Card::Card(unsigned int value, const std::string color) : _value{value}, _color{color} {};

void Card::print() const
{
  std::cout << _value << " de " << _color << std::endl;
};

bool Card::operator==(Card card) const
{
  return card._value == _value;
};

bool Card::operator<(Card card) const
{
  return _value < card._value;
};

unsigned int Card::value() const
{
  return _value;
}

std::string Card::color() const
{
  return _color;
}

std::ostream &operator<<(std::ostream &stream, Card card)
{
  stream << card.value() << " de " << card.color();
  return stream;
}