#pragma once

#include <string>

class Card
{
public:
  Card(unsigned int value, const std::string color);
  void print() const;
  bool operator==(Card card) const;

private:
  unsigned int _value;
  std::string _color;
};