#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"


namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Squirtle : public Pokemon
        {
        private:
            void attack(Move selectedMove, Pokemon* target) override;
            void waterSplash(Pokemon& target);
        public:
            Squirtle();
        };
    }
}