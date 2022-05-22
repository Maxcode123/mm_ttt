#include <cstdlib>
#include <vector>
#include "headers/minimax.h"
#include "headers/node.h"
#include "headers/board.h"
#include "headers/over_iostream.h"

RootNode* MiniMax::generate_tree(Board* b) {
    RootNode temp = RootNode(b);
    RootNode* r = (RootNode*)malloc(sizeof(RootNode));
    r = &temp;
}

void MiniMax::create_children(RootNode* n) {
    root = n;
    std::vector<Position*> positions = n->board->available_positions();
    for (Position* pos : positions) create_child_node(n, pos);
    current_depth = 1;
}

void MiniMax::create_children(ChildNode* n) {
    if (n->parent->children.size() == 2) return; // reached leaves, exit recursion
    for (ChildNode* c : n->parent->children) {
        if (c == n) continue;
        create_child_node(n, c->position);
    }
    current_depth++;
    for (ChildNode* c : n->children) create_children(c);
}

void MiniMax::create_child_node(Node* parent, Position* pos) {
    ChildNode* child = (ChildNode*)malloc(sizeof(ChildNode));
    ChildNode temp = ChildNode(parent, pos);
    child->parent = temp.parent;
    child->position = temp.position;
    parent->children.push_back(child);
}