#include "position.h"

bool Position::equals(Position position) {
    if (x == position.x && y == position.y) return true;
    return false;
}