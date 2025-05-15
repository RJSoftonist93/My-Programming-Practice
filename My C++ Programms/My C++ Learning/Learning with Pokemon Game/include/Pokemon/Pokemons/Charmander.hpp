#pragma once
#include "../../../include/Pokemon/POkemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Charmander : public Pokemon
        {
        private:
            void flameThrower(Pokemon& target);
        public:
            Charmander();
        };
    }
}