#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 110, 
            {Move("VINE WHIP", 25),
            Move("TACKLE", 10)
            }){}

        void Bulbasaur::attack(Move selectedMove, Pokemon& target)
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "VINE WHIP")
            {
                //Chance for a second hit (50% chance)
                int secondHitChance = rand() % 2;

                if (secondHitChance == 1)
                {
                    Pokemon::attack(selectedMove, target);
                    cout << name << " hit again with a second " << selectedMove.name << "!\n";
                }
                else
                {
                    cout << target->GetName() << " dodged the second hit!\n";
                }
            }
        }

        //old code
        //Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Rock, 100, 10) {}

        //void Bulbasaur :: attack(Pokemon& target)//This is just a reference — it doesn’t create a Pokemon object.
        //{
        //    vineWhip(target);
        //}

        //void Bulbasaur::vineWhip(Pokemon& target) //old function
        //{
        //    cout << name << " uses Vine Whip on " << target.GetName() << "!\n";
        //    Utility::WaitForEnter();

        //    cout << "...\n";
        //    Utility::WaitForEnter();

        //    target.takeDamage(attackPower);

        //    if (target.isFainted())
        //    {
        //        cout << target.GetName() << " fainted!\n";
        //    }
        //    else
        //    {
        //        cout << target.GetName() << " has " << target.GetHealth() << " HP left.\n";
        //        Utility::WaitForEnter();
        //    }
        //}
    }
}