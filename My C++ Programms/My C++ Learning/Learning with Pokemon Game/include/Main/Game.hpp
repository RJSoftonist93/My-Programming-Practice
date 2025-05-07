#pragma once
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Pokemon/Pokemon.hpp"

namespace N_Player
{
    class Player;
}
//namespace N_Pokemon
//{
//
//}

namespace N_Main
{
class Game {
    N_Pokemon::Pokemon wildPokemon;
    N_Pokemon::Grass forestGrass;

public:
    Game();
    void gameLoop(N_Player::Player& player);
};
}

