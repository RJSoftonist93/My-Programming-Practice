#pragma once
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"

//#include "Player.hpp"

#include<iostream>
#include "limits"  // Include this header to use numeric_limit
#include <string>
using namespace std;

//function to clear console
//void ClearConsole()
//{
//	//platform specific clear console command
//	#ifdef _WIN32
//		system("cls");
//	#else
//	(void)system("clear");
//	#endif
//}

//void WaitForEnter()
//{
//	cin.get(); //it will wait untill you press Enter key
//}

////enum pokemonchoice
//enum class PokemonChoice
//{
//	Charmander,
//	Bulbasaur,
//	Squirtle,
//	Pikachu
//};

//enum class PokemonType
//{
//	Fire,
//	Grass,
//	Water,
//	Electric,
//	Normal
//};

//class Pokemon
//{
//	public:
//		string name;
//		PokemonType type;
//		int health;
//
//		Pokemon()
//		{
//			name = "Unknown";
//			type = PokemonType::Normal;
//			health = 50;
//		}
//		//parameterized constructor
//		Pokemon(string p_name, PokemonType p_type, int p_health)
//		{
//			name = p_name;
//			type = p_type;
//			health = p_health;
//		}
//
//		//copy constructor
//		Pokemon(const Pokemon& other)
//		{
//			name = other.name;
//			type = other.type;
//			health = other.health;
//		}
//		//Destructor
//		~Pokemon()
//		{
//			cout << "data is deleted & related memory is free now\n";
//		}
//		void attack()
//		{
//			cout << name << "attack with a powerful move!\n";
//		}
//};


//player class
//class Player
//{
//public:
//	string name;
//	Pokemon chosenPokemon;
//
//	//Default constructor
//	Player()
//	{
//		name = "Trainer";
//		chosenPokemon = Pokemon();
//	}
//
//	//parameterized constructor
//	Player(string p_name, Pokemon p_chosenPokemon)
//	{
//		name = p_name;
//		chosenPokemon = p_chosenPokemon;
//	}
//
//	void choosePokemon(int choice)
//	{
//		switch ((PokemonChoice)choice)
//		{
//		case PokemonChoice::Charmander:
//				chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
//				break;
//		case PokemonChoice::Bulbasaur:
//			chosenPokemon = Pokemon("Bubasaur", PokemonType::Grass, 100);
//			break;
//		case PokemonChoice::Squirtle:
//			chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
//			break;
//		default:
//			chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
//			break;
//		}
//		cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
//		Utility::WaitForEnter(); //wait Untill you press Enter key
//	}
//};
//professor Oak class defination
class ProfessorOak
{
public:
	string name;
	//parameterized constructor
	ProfessorOak(string p_name)
	{
		name = p_name;
	}
	void greetPlayer(Player& player)
	{
		cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << name << ":My name is Oak. People call me the Pokemon Professor!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << name << ": But enough about me. Let's talk about you!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
	}

	void offerPokemonChoices(Player& player)
	{
		cout << name << ": First tell me, what is your name?\t [Please Enter Your Name]\n";
		getline(cin, player.name);
		cout << name << ":Ah, " << player.name << "! What a fantastic name!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << name << ": You must be eager to start your adventure. But first, you will need a pokemon of your own!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key

		//Presenting Pokemon choices
		cout << name << ": I have three Pokemon here with me. They're all quite feisty!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << name << ": Choose wisely...\n";
		cout << "1.Charmander - The fire type. A real hothead!\n";
		cout << "2.Bulbasaur - The grass type. Calm And collected!\n";
		cout << "3.Squirtle - The Water type. Cool as as a cucumber!\n";

		int choice;
		cout << name << ": So, which one will it be? Enter the number of your choice:";
		cin >> choice;

		player.choosePokemon(choice);
		Utility::WaitForEnter(); //wait Untill you press Enter key
	}

	//main quest conversation method
	void explainMainQuest(Player& player)
	{
		Utility::ClearConsole();
		cout << "Professor Oak-ay" << player.name << "!, I am about to explain you about your upcoming grand adventure.\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League.\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key

		cout << "\n" << player.name << ": Wait... that sounds a lot like every other Pokemon game out there...\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name << "! This is serious business!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << "\nProfessor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << "\n" << player.name << ": Sounds like a walk in the park... right?\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key

		cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key

		cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins...\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
		cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
		Utility::WaitForEnter(); //wait Untill you press Enter key
	}
};

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

