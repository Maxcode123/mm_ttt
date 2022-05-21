#include <assert.h>
#include <iostream>
#include "node.h"
#include "position.h"

void test_RootNode_constructor();

int main() {
    test_RootNode_constructor();
    std::cout << "Passed nodes tests.\n";
}

void test_RootNode_constructor() {
    RootNode n = RootNode();
    assert(n.parent == NULL);
    assert(n.board == NULL);
}

void test_ChildNode_constructor() {
    ChildNode n = ChildNode();
    assert(n.parent == NULL);
    assert(n.position == NULL);
    RootNode r = RootNode();
    n = ChildNode(&r);
    assert(n.parent == &r);
    assert(n.position = NULL);
    Position p = Position();
    n = ChildNode(&p);
    assert(n.parent == NULL);
    assert(n.position == &p);
    n = ChildNode(&r, &p);
    assert(n.parent == &r);
    assert(n.position == &p);
}