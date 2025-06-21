#include "../../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        Balbasaur::Balbasaur() : Pokemon("Balbasaur", PokemonType::Rock, 100, 10) {}

        void Balbasaur :: attack(Pokemon& target)
        {
            vineWhip(target);
        }

        void Balbasaur::vineWhip(Pokemon& target) //old function
        {
            cout << name << " uses Vine Whip on " << target.GetName() << "!\n";
            target.takeDamage(20);
        }
    }
}