#pragma once

#include "Card.hpp"

#include <vector>

class Player
{
public:
  Player(std::string name);
  static void deal_all_cards(Player &p1, Player &p2);

private:
  std::string _name;
  std::vector<Card> _cards;
  unsigned int _score;
};