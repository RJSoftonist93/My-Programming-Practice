#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include<iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        //Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, 10) {} //old code
        Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, 10) {}


        void Pikachu::attack(Pokemon& target)//This is just a reference — it doesn’t create a Pokemon object.
        {
            thunderShock(target);
        }

        void Pikachu::thunderShock(Pokemon& target)
        {
            cout << name << " uses Thunder Shock on " << target.GetName() << "!\n";
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