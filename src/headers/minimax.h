#pragma once
#include "node.h"
#include "board.h"

class MiniMax {
public:
    MiniMax(): current_depth{0}, root{NULL} {}
    RootNode* generate_tree(Board* b);
    void evaluate_nodes(RootNode* r);
    void create_children(RootNode* n);
private:
    void create_children(ChildNode* n);
    void create_child_node(Node* parent, Position* pos);
    int current_depth;
    RootNode* root;
};