#pragma once
#include <vector>
#include <cstdlib>
#include "position.h"

class Board
{
public:
    Board() {
        x_boundaries[0] = 0;
        x_boundaries[1] = 2;
        y_boundaries[0] = 0;
        y_boundaries[1] = 2;
        init_positions();
        }
    void add_X(Position* x);
    void add_O(Position* o);
    void random_position(Position* pos);
    std::vector<Position*>* available_positions();
private:
    int x_boundaries[2];
    int y_boundaries[2];
    std::vector<Position*> X;
    std::vector<Position*> O;
    std::vector<Position*> empty_positions;
    void init_positions();
    void clear_empty_position(Position *p);
    bool valid_position(Position* p);
    bool valid_x(int x);
    bool valid_y(int y);
};
