#pragma once
#include <string>
#include "PokemonType.hpp"
using namespace std;
//#include "PokemonType.hpp" //instead of the full file we are using forward declaratiion
//enum PokemonType; //forward declaration

namespace N_Pokemon
{ 
class Pokemon {
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

    void attack(Pokemon &target);
    void Heal();
};
}