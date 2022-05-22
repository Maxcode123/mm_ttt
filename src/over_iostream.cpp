#include "over_iostream.h"
#include "position.h"
#include <iostream>

std::ostream& operator<<(std::ostream &s, const Position &position) {
    return s << "(" << position.x << ", " << position.y << ")";
}