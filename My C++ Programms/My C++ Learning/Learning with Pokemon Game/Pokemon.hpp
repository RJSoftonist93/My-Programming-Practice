#pragma once
#include <string>
#include "PokemonType.hpp"
using namespace std;
//#include "PokemonType.hpp" //instead of the full file we are using forward declaratiion
//enum PokemonType; //forward declaration

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower;

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