#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;
        Zubat::Zubat() : Pokemon("Zubat", PokemonType::Poison, 100, 20){}
        void Zubat::supersonic(Pokemon& target)
        {
            cout << name << " uses supersonic on " << target.GetName() << "!\n";
            target.takeDamage(20);
        }
    }
}