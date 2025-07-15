#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"


namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Pikachu : public Pokemon
        {
        public:
            Pikachu();
        private:
            void attack(Pokemon& target) override;
            void thunderShock(Pokemon& target);
        };
    }
}