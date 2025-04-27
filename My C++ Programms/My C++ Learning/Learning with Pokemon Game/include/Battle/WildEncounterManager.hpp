#pragma once
//#include "Pokemon.hpp"
#include "../../include/Pokemon/Grass.hpp"
//#include <vector>
using namespace std;

class WildEncounterManager {
public:
    // Default constructor
    WildEncounterManager();
    Pokemon getRandomPokemonFromGrass(const Grass& grassNew);
};