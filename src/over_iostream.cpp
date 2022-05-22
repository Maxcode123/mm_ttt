#include "headers/over_iostream.h"
#include "headers/position.h"

std::ostream& operator<<(std::ostream &s, const Position &position) {
    return s << "(" << position.x << ", " << position.y << ")";
}