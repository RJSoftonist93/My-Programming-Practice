#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include <iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, 10) {} //Squirtle() is default constructor, which is calling to the parameterized constructor. This concept is known as a constructor initializer list

        void Squirtle::attack(Pokemon& target)//This is just a reference — it doesn’t create a Pokemon object.
        {
            waterSplash(target);
        }

        void Squirtle::waterSplash(Pokemon& target)
        {
            cout << name << " uses Water Splash on " << target.GetName() << "!\n";
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