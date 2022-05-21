#pragma once
#include <vector>
#include "position.h"

class Board
{
public:
    std::vector<Position*> X;
    std::vector<Position*> O;
    void add_X(Position* x);
    void add_O(Position* o);
    void random_position(Position* pos);
};