#pragma once

#include "Entity.hpp"
#include "Trap.hpp"

class Character : public Entity
{
public:
    Character()
        : Entity {}
    {}

    Character(int x, int y)
        : Entity(x, y)
    {}

    char get_representation() const override { return _representation; }

    void interact_with(Entity& entity)
    {
        const auto* trap = dynamic_cast<Trap*>(&entity);
        if (trap != nullptr)
        {
            --_life;
            if (_life < 1)
            {
                _representation = ' ';
                return;
            }
            _representation = 'o';
        }
    }

private:
    char _representation = 'O';
    int  _life           = 2;
};