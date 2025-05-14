#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"
namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Zubat : public Pokemon
        {
        private:
            Zubat();
            void supersonic(Pokemon& target);
        };
    }
}