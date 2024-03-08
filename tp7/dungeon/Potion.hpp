#pragma once

#include "Trap.hpp"

class Potion : public Trap
{
public:
    Potion(int width, int height)
        : Trap(width, height)
    {}

    char get_representation() const override { return '$'; }

private:
};