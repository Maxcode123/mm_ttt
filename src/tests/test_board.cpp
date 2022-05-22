#include <assert.h>
#include <vector>
#include "../headers/board.h"
#include "../headers/over_iostream.h"

void test_add();
void test_construction();

int main() {
   test_add();
   std::cout << "Board test passed.\n";
}

void test_add() {
    Board b = Board();
    std::vector<Position*>* v = b.available_positions();
    int init_size = v->size();
    Position p = Position(1, 1);
    b.add_X(&p);
    assert(init_size == v->size() + 1);
    std::vector<Position*> X = b.get_X();
    assert(X.size() == 1);
}

void test_construction() {
    Board b = Board();
    for ()
}