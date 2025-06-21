#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Caterpie : public Pokemon
        {
        private:
            void attack(Pokemon& target) override;
            void bugBite(Pokemon& target); //old function
        public:
            Caterpie();
        };
    }
}