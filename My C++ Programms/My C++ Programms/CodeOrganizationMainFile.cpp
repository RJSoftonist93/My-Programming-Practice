#pragma once
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "Player.hpp"
#include "ProfessorOak.hpp"

//#include "Player.hpp"

#include<iostream>
#include "limits"  // Include this header to use numeric_limit
#include <string>
using namespace std;




//function for handling main game loop
void gameLoop(Player &player)
{
	int choice;
	bool keepPlaying = true;

	while (keepPlaying)
	{
		//clear console before showing options
		Utility::ClearConsole();
		// Display options to the player
		cout << "\nWhat would you like to do next, " << player.name << "?\n";
		cout << "1. Battle Wild Pokémon\n";
		cout << "2. Visit PokeCenter\n";
		cout << "3. Challenge Gyms\n";
		cout << "4. Enter Pokémon League\n";
		cout << "5. Quit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		//clear newline character left in the buffer after cin >> choice
		cin.ignore(numeric_limits <streamsize>::max(),'\n');

		switch (choice)
		{
		case 1:
			cout << "You look around... but all the wild Pokémon are on "
				"vacation. Maybe try again later?\n";
			break;
		case 2:
			cout <<  "You head to the PokeCenter, but Nurse Joy is out on a coffee "
				"break. Guess your Pokémon will have to tough it out for now!\n";
			break;
		case 3:
			cout << "You march up to the Gym, but it's closed for renovations. "
				"Seems like even Gym Leaders need a break!\n";
			break;
		case 4:
			cout << "You boldly step towards the Pokémon League... but the "
				"gatekeeper laughs and says, 'Maybe next time, champ!'\n";
			break;
		case 5:
			cout << "You try to quit, but Professor Oak's voice echoes: "
				"'There's no quitting in Pokémon training!'\n";
			cout << "Are you sure you want to quit? (y/n): ";
			break;
			char quitChoice;
			cin >> quitChoice;
			if (quitChoice == 'y' || quitChoice == 'Y')
			{
				keepPlaying = false;
			}
			break;
		default:
			cout << "That's not a valid choice. Try again!\n";
			break;
		}
		//wait for enter key before the screen is cleared and the menu is shown again
		Utility::WaitForEnter();
	}
	cout << "Goodbye, " << player.name << "!Thanks for playing!\n";
}

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

	//place from where the main game loop will start
	gameLoop(player);

	return 0;
}

