#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;
        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, 15) {}
        void Caterpie::bugBite(Pokemon& target)
        {
            cout << name << " uses Bug Bite on " << target.GetName() << "!\n";
            target.takeDamage(20);
        }
    }
}