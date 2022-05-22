#include <assert.h>
#include "../over_iostream.h"
#include "../position.h"

void test_Position_constructor();

int main() {
    test_Position_constructor();
    std::cout << "Passed Position tests.\n";
}

void test_Position_constructor() {
    Position pos = Position(2, 3);
    assert(pos.x == 2 && pos.y == 3);
    pos = Position();
    assert(pos.x == 0 && pos.y == 0);
}