#include "../../include/Pokemon/Pokemon.hpp"
#include <iostream>
using namespace std;

namespace N_Pokemon
{ 
// Default constructor
Pokemon::Pokemon() : name("Unknown"), type(PokemonType::Normal), health(50) {}

// Parameterized constructor
Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower) 
    : name(p_name), type(p_type), maxHealth(p_maxHealth), health(p_maxHealth), attackPower(p_attackPower) {}

// Copy constructor
Pokemon::Pokemon(const Pokemon& other) : 
    name(other.name), type(other.type), maxHealth(other.maxHealth),
    health(other.health), attackPower(other.attackPower)
{
    cout << "Copy Constructor Created Pokemon: " << name << " | HP: " << health << " | AP: " << attackPower << endl;
}

// Destructor
Pokemon::~Pokemon() {
    // Destructor logic (if any) goes here
}

void Pokemon::attack(Pokemon& target) {
}

//void Pokemon::attack(Pokemon &target) { //old function
//    //cout << name << " attacks with a powerful move!\n";
//    int damage = attackPower;
//    cout << name << " attack " << target.name << " for " << damage << " damage!" << endl;
//    target.takeDamage(damage);
//}
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
    return health <= 0; // this is similar to "bool result = health <= 0;" // result = true i.e. if health is 0 or less than 0 then isFainted will be true
}
}