#pragma once

#include "Card.hpp"

#include <vector>

class Player
{
private:
  std::string _name;
  std::vector<Card> _cards;
  unsigned int _score;
};