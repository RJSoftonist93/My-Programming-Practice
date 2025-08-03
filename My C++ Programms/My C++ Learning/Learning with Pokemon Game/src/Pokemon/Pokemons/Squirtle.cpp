#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include <iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, {Move("RAPID SPIN", 5)}) {} //Squirtle() is default constructor, which is calling to the parameterized constructor. This concept is known as a constructor initializer list

        void Squirtle::attack(Move selectedMove, Pokemon* target)//This is just a reference — it doesn’t create a Pokemon object.
        {
            //Random number of hits between 2 & 5
            int hits = (rand() % 4) + 2;

            //split damage across hit
            for(int i = 0; i < hits; ++i)
            {
                Pokemon::attack(selectedMove, target);
            }
            cout << ".... and hit " << hits << " times!\\n";
            Utility::WaitForEnter();
        }
    }
}