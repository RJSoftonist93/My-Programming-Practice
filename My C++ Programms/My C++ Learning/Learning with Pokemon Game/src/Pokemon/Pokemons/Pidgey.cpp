#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>
using namespace N_Utility;
using namespace N_Battle;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        BattleManager battleManager;
        using namespace std;
        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Normal, 100, {Move("GUST", 15)}) {}

        void Pidgey::attack(Move selectedMove, Pokemon* target)//This is just a reference — it doesn’t create a Pokemon object.
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "GUST")
            {
                //20% chance to blow the opponent away
                if (rand() % 100 < 20)
                {
                    cout << ".... and blew the opponent away!\n";
                    battleManager.updateBattleState();
                    Utility::WaitForEnter();
                }
            }
        }
    };
}