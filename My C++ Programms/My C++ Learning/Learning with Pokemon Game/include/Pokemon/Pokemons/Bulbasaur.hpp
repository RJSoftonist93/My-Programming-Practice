#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Bulbasaur : public Pokemon
        {
        private://everything below is private unless we add protected: or public:
        
            //void vineWhip(Pokemon& target);//old function
        public://everything below is public unless we add protected: or private:
            Bulbasaur();
            void attack(Move selectedMove, Pokemon* target) override;
        };
    }
}