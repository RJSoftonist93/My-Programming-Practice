
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;
        Charmander::Charmander() : Pokemon("Charmander", PokemonType::Fire, 100, 10) {}

        void Charmander::attack(Pokemon& target)
        {
            flameThrower(target);
        }

        void Charmander::flameThrower(Pokemon& target)//old function
        {
            cout << name << " uses Flame Thrower on " << target.GetName() << "!\n";
            target.takeDamage(20);
        }
    }
}