#pragma once

#include <string>

class Card
{
public:
  Card(unsigned int value, std::string color);
  void print();

private:
  unsigned int _value;
  std::string _color;
};