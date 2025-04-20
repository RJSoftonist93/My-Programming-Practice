#pragma once
#include "Grass.hpp"
#include "Utility.hpp"

class Player;
class Game {
    Pokemon wildPokemon;
    Grass forestGrass;
public:
    Game();
    void gameLoop(Player& player);
};

