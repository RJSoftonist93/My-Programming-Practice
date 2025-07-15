#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;
        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, 15) {}

        void Caterpie::attack(Pokemon& target)//This is just a reference — it doesn’t create a Pokemon object.
        {
            bugBite(target);
        }
        void Caterpie::bugBite(Pokemon& target)//old function
        {
            cout << name << " uses Bug Bite on " << target.GetName() << "!\n";
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