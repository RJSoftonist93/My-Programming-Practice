#include <iostream>
#include "../../include/Pokemon/Pokemon.hpp"
using namespace std;
using namespace N_Utility;
using namespace N_Move;

namespace N_Pokemon
{ 
// Default constructor
Pokemon::Pokemon() : name("Unknown"), type(PokemonType::Water), maxHealth(100), health(50), attackPower(10) {}

// Parameterized constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_maxHealth, vector<Move> p_moves) 
    : name(p_name), type(p_type), maxHealth(p_maxHealth), health(p_maxHealth), moves(p_moves) {}

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

 void Pokemon::attack(Move selectedMove, Pokemon* target)
 {
     target->takeDamage(selectedMove.power);
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

void Pokemon::selectAndUseMove(Pokemon* target)
{
    printAvailableMoves();

    int choice = selectMove();
    Move selectedMove = moves[choice - 1];

    useMove(selectedMove, target);
}

void Pokemon::printAvailableMoves()
{
    cout << name << "'s available moves:\n";
    //list out all moves for the player to choose from
    for (size_t i = 0; i < moves.size(); ++i)
    {
        cout << i + 1 << ": " << moves[i].name << "(Power:" << moves[i].power << ")\n";
    }
}

int Pokemon::selectMove()
{
    //Ask the player to select a move
    int choice;
    cout << "Choose a move: ";
    cin >> choice;

    //Validate the choice
    while (choice < 1 || choice > static_cast <int>(moves.size()))
    {
        cout << "Invalid choice. Try again: ";
        cin >> choice;
    }
    return choice;
}

void Pokemon::useMove(Move selectedMove, Pokemon* target)
{
    cout << name << " used " << selectedMove.name << "!\n";
    attack(selectedMove, target);

    Utility::WaitForEnter();

    cout << "...\n";
    Utility::WaitForEnter();

    if (target->isFainted())
    {
        cout << target->GetName() << " fainted!\n";
    }
    else
    {
        cout << target->GetName() << " has " << target->GetHealth() << "HP left.\n";
    }
}
}