#pragma once
#include <vector>

struct RootNode;
struct ChildNode;
struct Node;

typedef struct Node 
{
    std::vector<ChildNode*> children;
    Node* parent;
} Node;

typedef struct RootNode: Node
{} RootNode;

typedef struct ChildNode: Node
{} ChildNode;
