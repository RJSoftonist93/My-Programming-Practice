#include <iostream>
#include <string>
using namespace std;

enum class PokemonChoice
{
    Charmandar,
    Bulbasaur,
    Squirtle,
    Pikachu
};
enum class PokemonType
{
    Fire,
    Water,
    Air,
    Electric
};

class Player
{
    string Player_Name;
    PokemonChoice _pokemonChoice;
    Player()//default constructor
    {
        cout << "Player Name is:" << Player_Name;
    }

    Player(string p_name, PokemonChoice p_chosenPokemon)
    {
        Player_Name = p_name;
        _pokemonChoice = p_chosenPokemon;
    }

    Player(Player& _player)
    {
        _player.Player_Name;
        _player._pokemonChoice;
    }
};

class Pokemon
{
    string Pokemon_Name;
    PokemonType _pokemonType;
    int health;
    Pokemon()
    {
        Pokemon_Name = "Pikachu";
        _pokemonType = PokemonType::Electric;
        health = 10;
    }

    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        Pokemon_Name = p_name;
        _pokemonType = p_type;
        health = p_health;
    }

    Pokemon(Pokemon& _pokemon)
    {
        _pokemon.Pokemon_Name;
        _pokemon._pokemonType;
        _pokemon.health;
    }
};

int main()
{

}






//#include <iostream>
//#include <string>
//using namespace std;
//
//// Enumeration for Pokemon types
//enum PokemonType { ELECTRIC };
//
//// Player class
//class Player {
//public:
//    string name;
//    Pokemon chosenPokemon;
//
//    // Default constructor
//    Player() : name("Trainer"), chosenPokemon(Pokemon()) {}
//
//    // Parameterized constructor
//    Player(string p_name, Pokemon p_chosenPokemon)
//        : name(p_name), chosenPokemon(p_chosenPokemon) {}
//
//    // Copy constructor
//    Player(const Player& other)
//        : name(other.name), chosenPokemon(other.chosenPokemon) {}
//};
//
//
//// Pokemon class
//class Pokemon {
//public:
//    string name;
//    PokemonType type;
//    int health;
//
//    // Default constructor
//    Pokemon() : name("Pikachu"), type(ELECTRIC), health(10) {}
//
//    // Parameterized constructor
//    Pokemon(string p_name, PokemonType p_type, int p_health)
//        : name(p_name), type(p_type), health(p_health) {}
//
//    // Copy constructor
//    Pokemon(const Pokemon& other)
//        : name(other.name), type(other.type), health(other.health) {}
//};
//
//int main() {
//    // Using default constructors
//    Player defaultPlayer;
//    Pokemon defaultPokemon;
//
//    cout << "Default Player: " << defaultPlayer.name << " with Pokemon: "
//        << defaultPlayer.chosenPokemon.name << endl;
//    cout << "Default Pokemon: " << defaultPokemon.name << " of type: "
//        << defaultPokemon.type << " with health: " << defaultPokemon.health << endl;
//
//    // Using parameterized constructors
//    Pokemon customPokemon("Charmander", ELECTRIC, 20);
//    Player customPlayer("Ash", customPokemon);
//
//    cout << "Custom Player: " << customPlayer.name << " with Pokemon: "
//        << customPlayer.chosenPokemon.name << endl;
//    cout << "Custom Pokemon: " << customPokemon.name << " of type: "
//        << customPokemon.type << " with health: " << customPokemon.health << endl;
//
//    // Using copy constructors
//    Player copiedPlayer(customPlayer);
//    Pokemon copiedPokemon(customPokemon);
//
//    cout << "Copied Player: " << copiedPlayer.name << " with Pokemon: "
//        << copiedPlayer.chosenPokemon.name << endl;
//    cout << "Copied Pokemon: " << copiedPokemon.name << " of type: "
//        << copiedPokemon.type << " with health: " << copiedPokemon.health << endl;
//
//    return 0;
//}
