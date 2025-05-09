#include<iostream>
#include <limits>  // Include this header to use numeric_limit
#include <string>
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Character/ProfessorOak.hpp"
#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
using namespace std;
using namespace N_Character;
using namespace N_Main;
using namespace N_Player;

int main()
{
   
	//creating pokemon & player objects
	Pokemon Pikachu("Pikachu", PokemonType::Electric, 100, 10); //parameterized constructor

	//main flow of the game
	ProfessorOak professor("Professor Oak");
    N_Player::Player player("Rupesh", Pikachu);

	//Greet the player and then offer pokemon choice
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	//main quest explaination
	professor.explainMainQuest(player);

    Game game;
	//place from where the main game loop will start
	game.gameLoop(player);

	return 0;
}

