#pragma once
#include <vector>
#include "position.h"

class Board
{
public:
    std::vector<Position*> X;
    std::vector<Position*> O;
};