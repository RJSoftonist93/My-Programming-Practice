// Player.h
#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Utility/Utility.hpp"
#include "iostream"

//#include "Pokemon.hpp"; // for c++ .h is better or .hpp is better
using namespace std;
using namespace N_Pokemon;
//class Pokemon;
namespace N_Player
{
class Player {
public:
    string name;
    Pokemon* chosenPokemon;

    //Player(); // now no need of Default constructor
    Player(string p_name); // Parameterized constructor

    void choosePokemon(int choice); // Method to choose a Pokemon
};
}