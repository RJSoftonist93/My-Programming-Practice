#pragma once
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Utility/Utility.hpp"

class Player;
class Game {
    Pokemon wildPokemon;
    Grass forestGrass;
public:
    Game();
    void gameLoop(Player& player);
};

