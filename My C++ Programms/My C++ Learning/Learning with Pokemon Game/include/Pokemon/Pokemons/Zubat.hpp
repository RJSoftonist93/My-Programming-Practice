#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Zubat : public Pokemon
        {
        public:
            Zubat();
        private:
            void attack(Move selectedMove, Pokemon* target) override;
            void superSonic(Pokemon& target);
        };
    }
}