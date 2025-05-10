#pragma once
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
using namespace N_Pokemon;

namespace N_Player
{
    class Player;
}

namespace N_Main
{
class Game {
    Pokemon wildPokemon;
    Grass forestGrass;

public:
    Game();
    void gameLoop(N_Player::Player& player);
};
}

