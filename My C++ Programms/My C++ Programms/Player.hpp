// Player.h
#pragma once
#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
#include "iostream"
#include <string>
//#include "Pokemon.hpp"; // for c++ .h is better or .hpp is better
using namespace std;

class Player {
public:
    string name;
    Pokemon chosenPokemon;

    Player(); // Default constructor
    Player(string p_name, Pokemon p_chosenPokemon); // Parameterized constructor

    void choosePokemon(int choice); // Method to choose a Pokemon
};