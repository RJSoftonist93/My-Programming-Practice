#include "../../include/Pokemon/Pokemon.hpp"
#include <iostream>
using namespace std;

namespace N_Pokemon
{ 
// Default constructor
Pokemon::Pokemon() : name("Unknown"), type(PokemonType::Normal), health(50) {}

// Parameterized constructor
Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower) : name(p_name), type(p_type), health(p_maxHealth) {}

// Copy constructor
Pokemon::Pokemon(const Pokemon& other) : name(other.name), type(other.type), health(other.health) {}

// Destructor
Pokemon::~Pokemon() {
    // Destructor logic (if any) goes here
}

void Pokemon::attack(Pokemon &target) {
    //cout << name << " attacks with a powerful move!\n";
    int damage = attackPower;
    cout << name << " attack " << target.name << " for " << damage << " damage!\\n";
    target.takeDamage(damage);
}
void Pokemon::takeDamage(int damage)
{
    health -= damage;
    if (health < 0)
    {
        health = 0;
    }
}
void Pokemon::Heal()
{
    health = maxHealth;
}
bool Pokemon::isFainted() const
{
    return health <= 0;
}
}