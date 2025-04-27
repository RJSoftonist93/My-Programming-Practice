//logic of "../" - if the given path from this file 1 folder above then use "../" if path is 2 folder above then use "../../"
#pragma once
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Battle/BattleState.hpp"

class BattleManager
{
public:
    void startBattle(Player &player, Pokemon &wildPokemon);
private:
    BattleState battleState;
    //void battle(Player &playerPokemon, Pokemon &wildPokemon);
    //void handleBattleOutcome(Player& player, bool playerWon);
    void battle();
    void handleBattleOutcome();

    void updateBattleState();
};