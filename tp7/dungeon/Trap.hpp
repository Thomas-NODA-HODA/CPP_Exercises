#pragma once

#include "Entity.hpp"

class Trap : public Entity
{
public:
    Trap(int width, int height)
        : Entity(width, height)
    {}

    char get_representation() const override { return 'X'; }

private:
};