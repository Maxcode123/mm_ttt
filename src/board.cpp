#include <vector>
#include <cstdlib>
#include "board.h"
#include "position.h"

void Board::add_X(Position* x) {
    X.push_back(x);
}

void Board::add_O(Position* o) {
    O.push_back(o);
}

void Board::random_position(Position* pos) {}

std::vector<Position*>* Board::available_positions() {
    return &empty_positions;
}

void Board::init_positions() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Position* pos_ptr = (Position*)malloc(sizeof(Position));
            pos_ptr->x = i;
            pos_ptr->y = j;
            empty_positions.push_back(pos_ptr);
        }
    }
}