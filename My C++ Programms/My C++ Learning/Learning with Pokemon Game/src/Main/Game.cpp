
#include <iostream>
#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../include/Pokemon/Pokemons/Zubat.hpp"

#include <string>
using namespace std;
using namespace N_Utility;
using namespace N_Battle;
using namespace N_Player;
using namespace N_Pokemon::N_Pokemons;

namespace N_Main
{
Game::Game() 
{
    //we are creating grass struct here as we have defined it Grass {Environment type, Pokemon list, Encounter rate}
    forestGrass = { "Forest",
        { 
        new Zubat(),
        new Pidgey(), 
        new Caterpie()
        },
        70}; 
    //forestGrass = { //old code
    //"Forest",
    //{Pokemon{"Zubat", PokemonType::Poison, 30, 20},
    //Pokemon{ "Pidgey", PokemonType::Normal, 40, 35},
    //Caterpie{"Caterpie", PokemonType::Bug, 40, 10}},
    //70
    //};
}
Game::~Game()
{
    delete(wildPokemon);
}

void Game::gameLoop(N_Player::Player& player)
{
    BattleManager battleManager;
    bool keepPlaying = true;
    int choice;

    while (keepPlaying) {
        // Clear console before showing options
        Utility::ClearConsole();

        // Display options to the player
        cout << "\nWhat would you like to do next, " << player.name << "?" << endl;
        cout << "1. Battle Wild Pokémon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokémon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        Utility::ClearInputBuffer(); // Clear the input buffer

        // Process the player's choice and display the corresponding message
        switch (choice) {
        case 1: {
            // Create a scope within case 1
            WildEncounterManager encounterManager;
            wildPokemon =
                encounterManager.getRandomPokemonFromGrass(forestGrass); //copy constructor used for creating wild pokemon
            battleManager.startBattle(player, wildPokemon);
            delete wildPokemon;
            wildPokemon = nullptr;
            //Pokemon encounteredPokemon =
            //    encounterManager.getRandomPokemonFromGrass(forestGrass);
            //cout << "A wild " << encounteredPokemon.name << " appeared!\n";
            break;
        }
        case 2: {
            cout << "You head to the PokeCenter" << endl;
            player.chosenPokemon->Heal(); //use arrow operator(->) is used to access pointer's object method(here Pokemon is Abstract class)
            cout << player.chosenPokemon->GetName() << "'s health is fully restored" << endl;
 /*           cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee "
                "break. Guess your Pokémon will have to tough it out for now!\n";*/
            break;
        }
        case 3: {
            cout << "You march up to the Gym, but it's closed for renovations. Seems "
                "like even Gym Leaders need a break!\n";
            break;
        }
        case 4: {
            cout << "You boldly step towards the Pokémon League... but the "
                "gatekeeper laughs and says, 'Maybe next time, champ!'\n";
            break;
        }
        case 5: {
            cout << "You try to quit, but Professor Oak's voice echoes: 'There's no "
                "quitting in Pokémon training!'\n";
            cout << "Are you sure you want to quit? (y/n): ";
            char quitChoice;
            cin >> quitChoice;
            if (quitChoice == 'y' || quitChoice == 'Y') {
                keepPlaying = false;
            }
            break;
        }
        default: {
            cout << "That's not a valid choice. Try again!\n";
            break;
        }
        }

        // Wait for Enter key before the screen is cleared and the menu is shown
        // again
        Utility::WaitForEnter();
    }

    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}
}