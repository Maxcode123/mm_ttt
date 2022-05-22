#pragma once
#include <vector>
#include <cstdlib>
#include "position.h"

class Board
{
public:
    Board() {init_positions();}
    void add_X(Position* x);
    void add_O(Position* o);
    void random_position(Position* pos);
    std::vector<Position*>* available_positions();
private:
    std::vector<Position*> X;
    std::vector<Position*> O;
    std::vector<Position*> empty_positions;
    void init_positions();
};
