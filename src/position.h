#pragma once

class Position {
public:
    int x;
    int y;
    Position(int a, int b): x{a}, y{b} {}
    Position(): x{0}, y{0} {}
};