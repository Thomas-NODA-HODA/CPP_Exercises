#pragma once

#include "Entity.hpp"
#include "Random.hpp"

class Trap : public Entity
{
public:
    Trap(int width, int height)
        : Entity(random_value(0, width), random_value(0, height))
    {}

    char get_representation() const override { return 'X'; }

    void update() override {}

private:
};