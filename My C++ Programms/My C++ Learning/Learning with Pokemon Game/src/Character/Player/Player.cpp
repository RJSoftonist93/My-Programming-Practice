// Player.cpp
#pragma once
#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/Pokemons/Zubat.hpp"

//#include "CodeOrganizationMainFile.cpp"
using namespace std;
using namespace N_Utility;
using namespace N_Pokemon::N_Pokemons;

namespace N_Player
{
Player::Player() {
    name = "Trainer";
    chosenPokemon = new N_Pokemon::N_Pokemons::Pikachu(); // Using the default Pokemon constructor
}

Player::Player(string p_name) {
    name = p_name;
}

//Player::Player(string p_name, Pokemon p_chosenPokemon) { //old code
//    name = p_name;
//    chosenPokemon = p_chosenPokemon;
//}

void Player::choosePokemon(int choice) {
    choice--; // actually case 1(first case start from 1 number) but here it is starting from 0 so if we enter 1 then it will second choice not first so decrease the choice by one.
    switch ((PokemonChoice)choice) {
    case PokemonChoice::Charmander:
        chosenPokemon = new Charmander();
        break;
    case PokemonChoice::Bulbasaur:
        chosenPokemon = new Bulbasaur();
        break;
    case PokemonChoice::Squirtle:
        chosenPokemon = new Squirtle();
        break;
    default:
        chosenPokemon = new Pikachu();
        break;
    }
    //case PokemonChoice::Charmander:
    //    chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100,10);
    //    break;
    //case PokemonChoice::Bulbasaur:
    //    chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100, 10);
    //    break;
    //case PokemonChoice::Squirtle:
    //    chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100, 10);
    //    break;
    //default:
    //    chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100, 10);
    //    break;
    //}
    cout << "Player " << name << " chose " << chosenPokemon->GetName() << endl;
    Utility::WaitForEnter(); // Wait for user to press Enter before proceeding
}
}