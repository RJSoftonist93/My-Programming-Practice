// Player.cpp
#pragma once
#include "../../../include/Character/Player/Player.hpp"

//#include "CodeOrganizationMainFile.cpp"
using namespace std;
using namespace N_Utility;

namespace N_Player
{
Player::Player() {
    name = "Trainer";
    chosenPokemon = Pokemon(); // Using the default Pokemon constructor
}

Player::Player(string p_name, Pokemon p_chosenPokemon) {
    name = p_name;
    chosenPokemon = p_chosenPokemon;
}

void Player::choosePokemon(int choice) {
    choice--; // actually case 1(first case start from 1 number) but here it is starting from 0 so if we enter 1 then it will second choice not first so decrease the choice by one.
    switch ((PokemonChoice)choice) {
    case PokemonChoice::Charmander:
        chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100,10);
        break;
    case PokemonChoice::Bulbasaur:
        chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100, 10);
        break;
    case PokemonChoice::Squirtle:
        chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100, 10);
        break;
    default:
        chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100, 10);
        break;
    }
    cout << "Player " << name << " chose " << chosenPokemon.GetName() << endl;
    Utility::WaitForEnter(); // Wait for user to press Enter before proceeding
}
}