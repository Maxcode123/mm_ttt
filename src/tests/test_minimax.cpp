#include "../headers/minimax.h"
#include "../headers/board.h"
#include "../headers/node.h"
#include "../headers/over_iostream.h"

int main() {
    Board b = Board();
    RootNode r = RootNode(&b);
    RootNode* r_ptr = &r;
    MiniMax mm = MiniMax();
    mm.create_children(r_ptr);
    for (ChildNode* c : r_ptr->children) std::cout << *c << "\n";
}