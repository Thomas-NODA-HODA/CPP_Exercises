#pragma once

#include "Entity.hpp"

class Character : public Entity
{
public:
    Character()
        : Entity {}
    {}

    Character(int x, int y)
        : Entity(x, y)
    {}

    char get_representation() const override { return '0'; }

    void interact_with(const Entity& entity) {}

private:
};