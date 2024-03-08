#pragma once

#include "Entity.hpp"

class Item : public Entity
{
public:
    Item(int width, int height)
        : Entity(random_value(0, width), random_value(0, height))
    {}

    void update() {}

    void interact_with(const Entity& entity) {}

private:
};