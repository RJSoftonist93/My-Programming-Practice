#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Charmander : public Pokemon
        {
        private:
            void attack(Pokemon& target) override;
            void flameThrower(Pokemon& target);//old function
        public:
            Charmander();
        };
    }
}