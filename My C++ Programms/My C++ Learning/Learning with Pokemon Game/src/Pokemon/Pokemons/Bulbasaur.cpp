#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Rock, 100, 10) {}

        void Bulbasaur :: attack(Pokemon& target)//This is just a reference — it doesn’t create a Pokemon object.
        {
            vineWhip(target);
        }

        void Bulbasaur::vineWhip(Pokemon& target) //old function
        {
            cout << name << " uses Vine Whip on " << target.GetName() << "!\n";
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