#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;
        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Normal, 100, 20) {}

        void Pidgey::attack(Pokemon& target)//This is just a reference — it doesn’t create a Pokemon object.
        {
            wingAttack(target);
        }

        void Pidgey::wingAttack(Pokemon& target)
        {
            cout << name << " uses Wing Attack on " << target.GetName() << "!\n";
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
    };
}