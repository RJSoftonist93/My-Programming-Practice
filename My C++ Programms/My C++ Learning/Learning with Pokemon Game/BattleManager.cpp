#pragma once
#include "BattleManager.hpp"
#include <iostream>
using namespace std;

    void BattleManager :: startBattle(Player &player, Pokemon &wildPokemon) //needed :: sign i.e. scope resolution operator to access data & methods from .hpp file
    {
        battleState.playerPokemon = &player.chosenPokemon;
        battleState.wildPokemon = &wildPokemon;
        battleState.playerTurn = true;
        battleState.battleOngoing = true;

        std::cout << "A wild " << wildPokemon.name << " appeared!\n";
        //battle(player, wildPokemon);
        battle();
    }

    //void BattleManager::handleBattleOutcome(Player& player, bool playerWon)
    void BattleManager::handleBattleOutcome()
    {
        if (battleState.playerPokemon -> isFainted())
        {
            //cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokemon's health.\n";
            cout << battleState.playerPokemon->name << "has fainted! You lose the battle.\\n";
        }
        else
        {
            cout << "You defeated the wild " << battleState.wildPokemon->name << "!\\n";
 /*           cout << "Oh no!" << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
            Utility::WaitForEnter();
            cout << "Game Over.\n";*/
        }
    }

    //void BattleManager :: battle(Player &playerPokemon, Pokemon& wildPokemon)
    void BattleManager :: battle()
    {
    while (battleState.battleOngoing)
    {
        //playerPokemon.chosenPokemon.attack(wildPokemon); // Player attacks first

        if (battleState.playerTurn) {
            //wildPokemon.attack(playerPokemon.chosenPokemon); // Wild Pokémon attacks back
            battleState.playerPokemon->attack(*battleState.wildPokemon);
        }
        else
        {
            battleState.wildPokemon->attack(*battleState.playerPokemon);
        }

        updateBattleState();

        battleState.playerTurn = !battleState.playerTurn;

        Utility::WaitForEnter(); //Wait to show result of each turn
    }

    //handleBattleOutcome(playerPokemon, playerPokemon.chosenPokemon.isFainted());
    handleBattleOutcome();
    }

    void BattleManager::updateBattleState()
    {
        if (battleState.playerPokemon -> isFainted())
        {
            battleState.battleOngoing = false;
        }
        else if (battleState.wildPokemon->isFainted())
        {
            battleState.battleOngoing = false;
        }
    }