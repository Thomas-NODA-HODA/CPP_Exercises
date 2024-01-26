#include "Player.hpp"

#include <algorithm>
#include <random>

Player::Player(std::string name) : _name{name}, _cards{{}}, _score{0} {};

void Player::deal_all_cards(Player &p1, Player &p2)
{
  std::vector<Card> all_cards;
  for (int i = 1; i < 14; ++i)
  {
    all_cards.push_back(Card(i, "Pique"));
    all_cards.push_back(Card(i, "Trefle"));
    all_cards.push_back(Card(i, "Dame"));
    all_cards.push_back(Card(i, "Coeur"));
  }

  std::random_device rd;
  std::shuffle(all_cards.begin(), all_cards.end(), std::default_random_engine(rd()));

  int size = all_cards.size();
  for (int i = 0; i < size / 2; ++i)
  {
    p1._cards.push_back(all_cards[i]);
  }
  for (int i = size / 2; i < size; ++i)
  {
    p2._cards.push_back(all_cards[i]);
  }
};

Card Player::operator[](unsigned int index)
{
  return _cards[index];
}

void Player::play(Player &p1, Player &p2)
{
  if (p2[Player::turn_number] < p1[Player::turn_number])
  {
    std::cout << p1._name << " win" << std::endl;
    p1._score += 1;
  }
  else if (p1[Player::turn_number] < p2[Player::turn_number])
  {
    std::cout << p2._name << " win" << std::endl;
    p2._score += 1;
  }
  Player::turn_number += 1;
}

int Player::score() const
{
  return _score;
}