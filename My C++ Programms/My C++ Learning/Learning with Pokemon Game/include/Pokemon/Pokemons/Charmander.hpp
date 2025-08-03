#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Charmander : public Pokemon
        {
        private:
            void attack(Move selectedMove, Pokemon* target) override;
        public:
            Charmander();
        };
    }
}