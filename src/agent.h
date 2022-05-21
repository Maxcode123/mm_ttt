#pragma once
#include "board.h"

class Agent
{
protected:
    Board* gameboard;
};

class RandomAgent:protected Agent
{

};

class SmartAgent:protected Agent
{

};