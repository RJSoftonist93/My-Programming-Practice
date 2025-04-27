// Player.h
#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"
//#include "PokemonType.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Utility/Utility.hpp"
#include "iostream"

//#include "Pokemon.hpp"; // for c++ .h is better or .hpp is better
using namespace std;
//class Pokemon;

class Player {
public:
    string name;
    Pokemon chosenPokemon;

    Player(); // Default constructor
    Player(string p_name, Pokemon p_chosenPokemon); // Parameterized constructor

    void choosePokemon(int choice); // Method to choose a Pokemon
};