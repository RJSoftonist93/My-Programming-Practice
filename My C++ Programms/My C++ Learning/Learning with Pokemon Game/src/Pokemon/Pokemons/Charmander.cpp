
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

#include <iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;
        Charmander::Charmander() : Pokemon("Charmander", PokemonType::Fire, 100, 10) {}

        void Charmander::attack(Pokemon& target) //This is just a reference — it doesn’t create a Pokemon object. It works if target is actually a Charmander, Caterpie, etc.
        {
            flameThrower(target);
        }

        void Charmander::flameThrower(Pokemon& target)//old function
        {
            cout << name << " uses Flame Thrower on " << target.GetName() << "!\n";
            Utility::WaitForEnter();

            cout << "...\n";
            Utility::WaitForEnter();

            target.takeDamage(attackPower);

            if (target.isFainted())
            {
                cout << target.GetName() << " fainted!\n";
            }
            else
            {
                cout << target.GetName() << " has " << target.GetHealth() << " HP left.\n";
                Utility::WaitForEnter();
            }
        }
    }
}