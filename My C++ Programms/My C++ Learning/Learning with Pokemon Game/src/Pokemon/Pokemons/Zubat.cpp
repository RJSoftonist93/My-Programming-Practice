#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;
        Zubat::Zubat() : Pokemon("Zubat", PokemonType::Poison, 100, {Move("LEECH LIFE", 10)}) {}

        void Zubat::attack(Move selectedMove, Pokemon* target)//This is just a reference — it doesn’t create a Pokemon object.
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "LEECH LIFE")
            {
                //Restore 50% of the damage dealt
                this->health += selectedMove.power * 0.5;

                //ensure health does not exceed maxhealth
                if (this->health > this->maxHealth)
                {
                    this->health = this->maxHealth;
                }
                cout << "... and regained health!\n";
                Utility::WaitForEnter();
            }
        }
    }
}