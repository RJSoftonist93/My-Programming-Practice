#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"


namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Pidgey : public Pokemon
        {
        public:
            Pidgey();
        private:
            void attack(Move selectedMove, Pokemon* target) override;
            void wingAttack(Pokemon& target);
        };
    }
}
