#pragma once
#include "Pokemon.hpp"
#include "Player.hpp"

class BattleManager
{
public:
    void startBattle(Player &player, Pokemon &wildPokemon);
private:
    void battle(Player &playerPokemon, Pokemon &wildPokemon);
    void handleBattleOutcome(Player &player, bool playerWon);
};