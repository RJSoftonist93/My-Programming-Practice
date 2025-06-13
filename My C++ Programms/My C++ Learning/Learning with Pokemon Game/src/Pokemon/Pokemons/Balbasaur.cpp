#include "../../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        Balbasaur::Balbasaur() : Pokemon("Balbasaur", PokemonType::Rock, 100, 10) {}

        void Balbasaur::vineWhip(Pokemon& target)
        {
            cout << name << " uses Vine Whip on " << target.GetName() << "!\n";
            target.takeDamage(20);
        }
    }
}