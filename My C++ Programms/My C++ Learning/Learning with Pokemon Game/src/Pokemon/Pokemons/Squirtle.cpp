#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, 10) {} //Squirtle() is default constructor, which is calling to the parameterized constructor. This concept is known as a constructor initializer list

        void Squirtle::attack(Pokemon& target)
        {
            waterSplash(target);
        }

        void Squirtle::waterSplash(Pokemon& target)
        {
            cout << name << " uses Water Splash on " << target.GetName() << "!\n";
            target.takeDamage(20);
        }
    }
}