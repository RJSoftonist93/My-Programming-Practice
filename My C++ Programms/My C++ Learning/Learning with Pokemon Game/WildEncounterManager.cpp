#include "WildEncounterManager.hpp"
#include <cstdlib> // For rand()
#include <ctime>   // For time()

WildEncounterManager::WildEncounterManager() {
    srand(time(0)); // Seed the random number generator
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
    int randomIndex = rand() % grass.WildPokemonList.size();
    return grass.WildPokemonList[randomIndex];
}

//Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) 
//{
//    int randomIndex = rand() % grass.WildPokemonList.size();
//
//    Pokemon wildPokemon = grass.WildPokemonList[randomIndex];
//
//    return wildPokemon;
//}