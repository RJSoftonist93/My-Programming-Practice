#include "../../include/Battle/WildEncounterManager.hpp"
#include <cstdlib> // For rand()
#include <ctime>   // For time()

namespace N_Battle
{
WildEncounterManager::WildEncounterManager() {
    srand(time(0)); // Seed the random number generator
}

Pokemon* WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) { // wild pokemon is created from here so copy constructor is used
    int randomIndex = rand() % grass.WildPokemonList.size();
    return grass.WildPokemonList[randomIndex];
    //return grass.WildPokemonList[randomIndex]->clone(); //clone() in C++ is a common virtual function used with polymorphism to make deep copies of objects
}
}

//Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) 
//{
//    int randomIndex = rand() % grass.WildPokemonList.size();
//
//    Pokemon wildPokemon = grass.WildPokemonList[randomIndex];
//
//    return wildPokemon;
//}