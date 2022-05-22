#pragma once
#include <iostream>
#include "position.h"
#include "node.h"

std::ostream& operator<<(std::ostream &s, const Position &position);
std::ostream& operator<<(std::ostream &s, const ChildNode &n);