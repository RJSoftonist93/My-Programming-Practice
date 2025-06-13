#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, 10) {}

        void Squirtle::waterSplash(Pokemon& target)
        {
            cout << name << " uses Water Splash on " << target.GetName() << "!\n";
            target.takeDamage(20);
        }
    }
}