#pragma once
#include <vector>
#include "board.h"

struct ChildNode;

struct Node 
{
    std::vector<ChildNode*> children;
    Node* parent;
};

struct RootNode:Node
{
    Board* board;
    RootNode() {
        parent = NULL;
        board = NULL;
    }
    RootNode(Board* b) {
        parent = NULL;
        board = b;
    }
};

struct ChildNode:Node
{
    Position* position;
    ChildNode() {
        parent = NULL;
        position = NULL;
    }
    ChildNode(Node* p) {
        parent = p;
        position = NULL;
    }
    ChildNode(Position* pos) {
        parent = NULL;
        position = pos;
    }
    ChildNode(Node* p, Position* pos) {
        parent = p;
        position = pos;
    }
};
