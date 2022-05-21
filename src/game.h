#pragma once
#include "agent.h"

class Game
{
public:
    void play();
    void play_round();
    Game(Agent a1, Agent a2) {
        agent_1 = a1;
        agent_2 = a2;
    }
private:
    Agent agent_1;
    Agent agent_2;
    bool endgame;
};