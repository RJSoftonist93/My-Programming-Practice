#include<iostream>
#include "limits"  // Include this header to use numeric_limit
#include <string>
#include "Pokemon.hpp"
#include "ProfessorOak.hpp"
#include "Game.hpp"
#include "Player.hpp"
using namespace std;

int main()
{
   
	//creating pokemon & player objects
	Pokemon Pikachu("Pikachu", PokemonType::Electric, 100); //parameterized constructor

	//main flow of the game
	ProfessorOak professor("Professor Oak");
	Player player("Rupesh", Pikachu);

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

