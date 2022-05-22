#pragma once
#include "board.h"
#include "minimax.h"

class Agent
{
protected:
    Board* gameboard;
};

class RandomAgent:protected Agent
{};

class SmartAgent:protected Agent
{
public:
    void play();
    SmartAgent(Board* b, MiniMax* s) {
        gameboard = b;
        strategy = s;
    }
private:
    MiniMax* strategy;
    Position* find_optimal_play();
};