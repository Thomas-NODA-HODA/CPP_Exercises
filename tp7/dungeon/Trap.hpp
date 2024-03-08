#pragma once

#include "Item.hpp"
#include "Random.hpp"

class Trap : public Item
{
public:
    Trap(int width, int height)
        : Item(random_value(0, width), random_value(0, height))
    {}

    char get_representation() const override { return 'X'; }

    void interact_with(const Entity& entity) {}

private:
};