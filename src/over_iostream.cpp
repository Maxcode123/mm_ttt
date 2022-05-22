#include "headers/over_iostream.h"
#include "headers/position.h"
#include "headers/node.h"

std::ostream& operator<<(std::ostream &s, const Position &position) {
    return s << "(" << position.x << ", " << position.y << ")";
}

std::ostream& operator<<(std::ostream &s, const ChildNode &n) {
    return s << "ChildNode with position " << *n.position;
}