#include <vector>
#include <cstdlib>
#include <algorithm>
#include <stdexcept>
#include "headers/board.h"
#include "headers/position.h"
#include "headers/over_iostream.h"

void Board::add_X(Position* x) {
    if (!valid_position(x)) {
        throw std::invalid_argument("in Board::add_X: invalid position.");
        }
    X.push_back(x);
    clear_empty_position(x);
}

void Board::add_O(Position* o) {
    if (!valid_position(o)) {
        throw std::invalid_argument("in Board::add_O: invalid position.");
        }
    O.push_back(o);
    clear_empty_position(o);
}

std::vector<Position*> Board::get_X() {
    return X;
}

std::vector<Position*> Board::get_O() {
    return O;
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

bool Board::valid_position(Position* p) {
    if (valid_x(p->x) && valid_y(p->y)) return true;
    return false;
}

bool Board::valid_x(int x) {
    if (x >= x_boundaries[0] && x <= x_boundaries[1]) return true;
    return false;
}

bool Board::valid_y(int y) {
    if (y >= y_boundaries[0] && y <= y_boundaries[1]) return true;
    return false;
}