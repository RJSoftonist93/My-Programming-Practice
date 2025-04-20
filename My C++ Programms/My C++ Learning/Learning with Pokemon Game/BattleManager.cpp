#pragma once
#include "BattleManager.hpp"
#include <iostream>
using namespace std;

    void BattleManager :: startBattle(Player &player, Pokemon &wildPokemon) //needed :: sign i.e. scope resolution operator to access data & methods from .hpp file
    {
        std::cout << "A wild " << wildPokemon.name << " appeared!\n";
        battle(player, wildPokemon);
    }

    void BattleManager::handleBattleOutcome(Player& player, bool playerWon)
    {
        if (playerWon)
        {
            cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokemon's health.\n";
        }
        else
        {
            cout << "Oh no!" << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
            Utility::WaitForEnter();
            cout << "Game Over.\n";
        }
    }

    void BattleManager :: battle(Player &playerPokemon, Pokemon& wildPokemon) 
    {
    while (!playerPokemon.chosenPokemon.isFainted() && !wildPokemon.isFainted())
    {
        playerPokemon.chosenPokemon.attack(wildPokemon); // Player attacks first

        if (!wildPokemon.isFainted()) {
            wildPokemon.attack(playerPokemon.chosenPokemon); // Wild Pokémon attacks back
        }

        Utility::WaitForEnter(); //Wait to show result of each turn
    }

    handleBattleOutcome(playerPokemon, playerPokemon.chosenPokemon.isFainted());
    }