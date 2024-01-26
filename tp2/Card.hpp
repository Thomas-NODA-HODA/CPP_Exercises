#pragma once

#include <string>
#include <iostream>

class Card
{
public:
  Card(unsigned int value, const std::string color);
  void print() const;
  bool operator==(Card card) const;
  bool operator<(Card card) const;
  unsigned int value() const;
  std::string color() const;

private:
  unsigned int _value;
  std::string _color;
};

std::ostream &operator<<(std::ostream &stream, Card card);