#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Balbasaur : public Pokemon
        {
        private://everything below is private unless we add protected: or public:
            void vineWhip(Pokemon& target);
        public://everything below is public unless we add protected: or private:
            Balbasaur();
        };
    }
}