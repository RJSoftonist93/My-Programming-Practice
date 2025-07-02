#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Rock, 100, 10) {}

        void Bulbasaur :: attack(Pokemon& target)
        {
            vineWhip(target);
        }

        void Bulbasaur::vineWhip(Pokemon& target) //old function
        {
            cout << name << " uses Vine Whip on " << target.GetName() << "!\n";
            target.takeDamage(20);
        }
    }
}