#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;
        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, {Move("STICKY WEB", 10)}) {}

        void Caterpie::attack(Move selectedMove, Pokemon* target)//This is just a reference — it doesn’t create a Pokemon object.
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "STICKY WEB")
            {
                //Reduce the target's next attack damage(here for simplicity we are reducing by a fixed value)
                int reducedDamage = 5;
                target->takeDamage(reducedDamage);
                cout << target->GetName() << "'s next attack will be reduced by " << reducedDamage << " damage!";
                Utility::WaitForEnter();
            }
        }


    }
}