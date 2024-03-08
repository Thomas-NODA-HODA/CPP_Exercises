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

private:
};