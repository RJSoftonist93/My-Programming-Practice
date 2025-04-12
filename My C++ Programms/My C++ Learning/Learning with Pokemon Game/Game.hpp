#pragma once
#include "Grass.hpp"
#include "Utility.hpp"
#include "WildEncounterManager.hpp"

class Player;
class Game {

public:
    Game();
    void gameLoop(Player& player);
};

