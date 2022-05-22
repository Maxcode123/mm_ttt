#include <vector>
#include "../board.h"
#include "../over_iostream.h"

int main() {
    Board b = Board();
    std::vector<Position*>* v = b.available_positions();
    std::cout << "size: " << v->size() << "\n";
    Position p = Position(2, 1);
    b.add_X(&p);
    std::cout << "size after add_X: " << v->size() << "\n";
    for (Position* p : *v) {std::cout << *p << "\n";};
}