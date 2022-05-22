#pragma once
#include "node.h"
#include "board.h"

class MiniMax {
    MiniMax() {}
    RootNode* generate_tree(Board* b);
    void evaluate_nodes(RootNode* r);
};