#include <vector>
#include "../board.h"
#include "../over_iostream.h"

int main() {
    Board b = Board();
    std::vector<Position*>* v = b.available_positions();
    Position p = Position();
    b.add_X(&p);
    for (Position* p : *v) {std::cout << *p << "\n";};
}