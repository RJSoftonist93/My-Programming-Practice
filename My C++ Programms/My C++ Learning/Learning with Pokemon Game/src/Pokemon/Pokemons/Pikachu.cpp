#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include<iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, {Move("THUNDER BOLT", 80)}) {}


        void Pikachu::attack(Move selectedMove, Pokemon* target)//This is just a reference — it doesn’t create a Pokemon object.
        {
            if (selectedMove.name == "THUNDER BOLT")
            {
                //80% chance to hit
                if (rand() % 100 < 80)
                {
                    Pokemon::attack(selectedMove, target);
                    cout << ".... and it hit successfully!\n";
                }
                else
                {
                    cout << ".... but it missed!\n";
                }
            }
            else
            {
                Pokemon::attack(selectedMove, target);
            }
            Utility::WaitForEnter();
        }
    }
}