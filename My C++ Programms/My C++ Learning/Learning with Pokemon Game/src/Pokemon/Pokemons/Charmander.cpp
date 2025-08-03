
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

#include <iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;
        Charmander::Charmander() : Pokemon("Charmander", PokemonType::Fire, 100, {Move("BLAZING CHARGE", 10)}) {}

        void Charmander::attack(Move selectedMove, Pokemon* target) //This is just a reference — it doesn’t create a Pokemon object. It works if target is actually a Charmander, Caterpie, etc.
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "BLAZING CHARGE")
            {
                //recoil effect: Charmander takes recoil damage
                this->takeDamage(10); //fixed recoil damage
                cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
                Utility::WaitForEnter();
            }
        }
    }
}