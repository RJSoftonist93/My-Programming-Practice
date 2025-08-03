#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"


namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Caterpie : public Pokemon
        {
        private:
            void attack(Move selectedMove, Pokemon* target) override;
            void bugBite(Pokemon* target); //old function
        public:
            Caterpie();
        };
    }
}