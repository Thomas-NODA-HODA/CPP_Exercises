#pragma once

#include "Card.hpp"

#include <vector>

class Player
{
public:
  Player(std::string name);
  static void deal_all_cards(Player &p1, Player &p2);
  Card operator[](unsigned int index);
  static inline int turn_number = 1;
  static void play(Player &p1, Player &p2);
  int score() const;

private:
  std::string _name;
  std::vector<Card> _cards;
  unsigned int _score;
};