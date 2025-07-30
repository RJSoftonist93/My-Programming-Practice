#pragma once
#include <string>
#include <vector>
#include "../../include/Utility/Utility.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Move/Move.hpp"
using namespace std;
using namespace N_Move;
//#include "PokemonType.hpp" //instead of the full file we are using forward declaratiion
//enum PokemonType; //forward declaration
// 
    // abstract function is used in Pokemon class so Pokemon class is Abstract class now. 
    // no object of abstract class is createred. We can only create & use pointer object of abstract class
namespace N_Pokemon
{ 

    class Pokemon {
    public:
        vector<Move> moves; // Vector to hold moves

    protected:   //everything below is protected unless we add private: or public:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;


    public:  //everything below is public unless we add private: or protected:
        //following are setter for accessing protected members of Pokemon class
        string GetName()
        {
            return name;
        }
        PokemonType GetType()
        {
            return type;
        }
        int GetHealth()
        {
            return health;
        }
        int GetMaxHealth()
        {
            return maxHealth;
        }
        int GetAttackPower()
        {
            return attackPower;
        }

        // Default constructor
        Pokemon();

        // Parameterized constructor
        Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower);

        // Copy constructor
        Pokemon(const Pokemon& other);

        void takeDamage(int damage);
        bool isFainted() const;

        // Destructor
        ~Pokemon();

        // abstract function is used in Pokemon class so Pokemon class is Abstract class now. 
        // no object of abstract class is createred. We can only create & use pointer object of abstract class
        virtual void attack(Move selectedMove, Pokemon& target) = 0;
        void Heal();

        int selectMove();
        void useMove(Move selectedMove, Pokemon& target);
        //base implementation for selecting and using move
        void selectAndUseMove(Pokemon* target);
        void printAvailableMoves();
    };
}