#include <vector>
#include <cstdlib>
#include <algorithm>
#include <stdexcept>
#include "board.h"
#include "position.h"
#include "over_iostream.h"

void Board::add_X(Position* x) {
    X.push_back(x);
    clear_empty_position(x);
}

void Board::add_O(Position* o) {
    O.push_back(o);
    clear_empty_position(o);
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

void Board::clear_empty_position(Position* p) {
    int i = 0;
    for (Position* ep : empty_positions) {
        if (ep->equals(*p)) {
            empty_positions.erase(empty_positions.begin() + i);
            free(ep);
            return;
        }
        i++;
    }
    throw std::invalid_argument("in Board::clear_empty_position: " 
    "argument position not found in empty positions");
}