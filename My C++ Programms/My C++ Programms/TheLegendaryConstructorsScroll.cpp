#include<iostream>
#include <string>
using namespace std;

//enum pokemonchoice
enum class PokemonChoice
{
	Charmander,
	Bulbasaur,
	Squirtle,
	Pikachu
};

enum class PokemonType
{
	Fire,
	Grass,
	Water,
	Electric,
	Normal
};

class Pokemon
{
	public:
		string name;
		PokemonType type;
		int health;

		Pokemon()
		{
			name = "Unknown";
			type = PokemonType::Normal;
			health = 50;
		}
		//parameterized constructor
		Pokemon(string p_name, PokemonType p_type, int p_health)
		{
			name = p_name;
			type = p_type;
			health = p_health;
		}

		//copy constructor
		Pokemon(const Pokemon& other)
		{
			name = other.name;
			type = other.type;
			health = other.health;
		}
		//Destructor
		~Pokemon()
		{
			cout << "data is deleted & related memory is free now\n";
		}
		void attack()
		{
			cout << name << "attack with a powerful move!\n";
		}
};

//player class
class Player
{
public:
	string name;
	Pokemon chosenPokemon;

	//Default constructor
	Player()
	{
		name = "Trainer";
		chosenPokemon = Pokemon();
	}

	//parameterized constructor
	Player(string p_name, Pokemon p_chosenPokemon)
	{
		name = p_name;
		chosenPokemon = p_chosenPokemon;
	}

	void choosePokemon(int choice)
	{
		switch ((PokemonChoice)choice)
		{
		case PokemonChoice::Charmander:
				chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
				break;
		case PokemonChoice::Bulbasaur:
			chosenPokemon = Pokemon("Bubasaur", PokemonType::Grass, 100);
			break;
		case PokemonChoice::Squirtle:
			chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
			break;
		default:
			chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
			break;
		}
		cout << "Player " << name << "chose " << chosenPokemon.name << "!\n";
	}
};
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
		cout << name << ":My name is Oak. People call me the Pokemon Professor!\n";
		cout << name << ": But enough about me. Let's talk about you!\n";
	}

	void offerPokemonChoices(Player& player)
	{
		cout << name << ": First tell me, what is your name?\t [Please Enter Your Name]\n";
		getline(cin, player.name);
		cout << name << ":Ah, " << player.name << "! What a fantastic name!\n";
		cout << name << ": You must be eager to start your adventure. But first, you will need a pokemon of your own!\n";

		//Presenting Pokemon choices
		cout << name << ": I have three Pokemon here with me. They're all quite feisty!\n";

		cout << name << ": Choose wisely...\n";
		cout << "1.Charmander - The fire type. A real hothead!\n";
		cout << "2.Bulbasaur - The grass type. Calm And collected!\n";
		cout << "3.Squirtle - The Water type. Cool as as a cucumber!\n";

		int choice;
		cout << name << ": So, which one will it be? Enter the number of your choice:";
		cin >> choice;

		player.choosePokemon(choice);
	}

	//main quest conversation method
	void explainMainQuest(Player& player)
	{
		cout << "Professor Oak-ay" << player.name << "!, I am about to explain you about your upcoming grand adventure.\n";
		cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
		cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League.\n";

		cout << "\n" << player.name << ": Wait... that sounds a lot like every other Pokemon game out there...\n";
		cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name << "! This is serious business!\n";
		cout << "\nProfessor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
		cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
		cout << "\n" << player.name << ": Sounds like a walk in the park... right?\n";
		cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n";


		cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";

		cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!\n";


		cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins...\n";

		cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
	}

};

int main()
{
	//pokemon & player objects
	Pokemon Pikachu("Charmander", PokemonType::Electric, 100); //parameterized constructor
	
	//main flow of the game
	ProfessorOak professor("Professor Oak");
	Player player("Rupesh", Pikachu);

	//Greet the player and then offer pokemon choice
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	//main quest explaination
	professor.explainMainQuest(player);

	//place from where the game loop will start
	cout << "\n[Placeholder for the Game Loop]\n";

	return 0;
}







//#include <iostream>
//#include <string>
//using namespace std;
//
//enum class PokemonChoice
//{
//    Charmandar,
//    Bulbasaur,
//    Squirtle,
//    Pikachu
//};
//enum class PokemonType
//{
//    Fire,
//    Water,
//    Air,
//    Electric
//};
//
//class Player
//{
//    string Player_Name;
//    PokemonChoice _pokemonChoice;
//    Player()//default constructor
//    {
//        cout << "Player Name is:" << Player_Name;
//    }
//
//    Player(string p_name, PokemonChoice p_chosenPokemon)
//    {
//        Player_Name = p_name;
//        _pokemonChoice = p_chosenPokemon;
//    }
//
//    Player(Player& _player)
//    {
//        _player.Player_Name;
//        _player._pokemonChoice;
//    }
//};
//
//class Pokemon
//{
//    string Pokemon_Name;
//    PokemonType _pokemonType;
//    int health;
//    Pokemon()
//    {
//        Pokemon_Name = "Pikachu";
//        _pokemonType = PokemonType::Electric;
//        health = 10;
//    }
//
//    Pokemon(string p_name, PokemonType p_type, int p_health)
//    {
//        Pokemon_Name = p_name;
//        _pokemonType = p_type;
//        health = p_health;
//    }
//
//    Pokemon(Pokemon& _pokemon)
//    {
//        _pokemon.Pokemon_Name;
//        _pokemon._pokemonType;
//        _pokemon.health;
//    }
//};
//
//int main()
//{
//
//}






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

////5.What will be the output of the following code snippet ?
//#include<iostream>
//using namespace std;
//
//int& getReference() {
//    int x = 10;
//    cout << "X: " << x << endl;
//    cout << "&X " << &x << endl;
//    //cout << "*x " << *x;
//    return x;
//
//    x++;
//}
//
//int main() {
//    int& a = getReference();
//    cout << a;
//    cout << "a: " << a << endl;
//    cout << "&a " << &a << endl;
//    //cout << "*a " << *a << endl;
//
//    return 0;
//}


//// Copy constructor
//Pokemon(const Pokemon& other) 
//{ //&other is class object or what? how it is accessing data members?
//    name = other.name; // which data members it is accessing?
//    type = other.type;
//    health = other.health;
//    cout << "A new Pokemon has been copied from " << other.name << "!\n";
//}
//
//
//
//getline(cin, player.name); // how it works?
//
//
//// Continue with the main flow of the game
//ProfessorOak professor("Professor Oak");
//Player player("Ash", charmander);
//
//// Greet the player and offer Pokemon choices
//professor.greetPlayer(player);
//professor.offerPokemonChoices(player); // here passing Player player("Ash", charmander); this one player object or what?
//
//
//
//Pokemon defaultPokemon; // Using default constructor
//Pokemon charmander("Charmander", PokemonType::FIRE, 100); // Using parameterized constructor 
////here how directly it is created like this charmander("Charmander", PokemonType::FIRE, 100);
//

