// Player.cpp
#include "Player.hpp"
#include "iostream"
#include "CodeOrganizationMainFile.cpp"
using namespace std;

Player::Player() {
    name = "Trainer";
    chosenPokemon = Pokemon::Pokemon(); // Using the default Pokemon constructor
}

Player::Player(string p_name, Pokemon p_chosenPokemon) {
    name = p_name;
    chosenPokemon = p_chosenPokemon;
}

void Player::choosePokemon(int choice) {
    switch ((PokemonChoice)choice) {
    case PokemonChoice::Charmander:
        chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
        break;
    case PokemonChoice::Bulbasaur:
        chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
        break;
    case PokemonChoice::Squirtle:
        chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
        break;
    default:
        chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
        break;
    }
    cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
    Utility::WaitForEnter(); // Wait for user to press Enter before proceeding
}