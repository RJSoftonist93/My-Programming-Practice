#pragma once
//#include "Pokemon.hpp"
#include "Grass.hpp"
#include <vector>
using namespace std;
//#include "PokemonType.hpp" //instead of the full file we are using forward declaratiion
//enum PokemonType; //forward declaration
struct Grass;
class Pokemon;
class WildEncounterManager {
public:
    // Default constructor
    WildEncounterManager();
    Pokemon getRandomPokemonFromGrass(const Grass& grassNew);
};