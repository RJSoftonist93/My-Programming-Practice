//#include<iostream>
//#include<string>
//using namespace std;
//
//// Enum classes for Pokémon types and names
//enum class PokemonType
//{
//	Fire, Water, Electric, Cyclone
//};
//
//enum class PokemonName
//{
//	Charmander, Bulbasaur, Squirtle, Pikachu
//};
//
//class Pokemon
//{
//public:
//	PokemonName name;  // Name of the Pokémon
//	PokemonType type;  // Type of the Pokémon
//	int health;		   // Health points of the Pokémon
//
//	// Constructor to initialize the Pokémon
//	Pokemon(PokemonName n, PokemonType t, int h) : name(n), type(t), health(h)
//	{}
//	void attack()
//	{
//		// Print the Pokémon's attack message
//		cout << getPokemonName(name) << " attack with a powerful move!" << endl;
//	}
//
//public:
//	// Helper method to get the string representation of the Pokémon name
//	string getPokemonName(PokemonName name)
//	{
//		switch (name)
//		{
//		case PokemonName::Charmander: return "Charmander";
//		case PokemonName::Bulbasaur: return "Bulbasaur";
//		case PokemonName::Squirtle: return "Squirtle";
//		default: return "Pikachu";
//		}
//	}
//};
//
//class Player
//{
//	public: 
//		string name;			// Name of the player
//		Pokemon* chosenPokemon;	// Pointer to the chosen Pokémon
//		// Constructor to initialize the player's name and set chosenPokemon to nullptr
//		Player(string n) : name(n), chosenPokemon(nullptr)
//		{}
//
//		// Method for the player to choose a Pokémon
//		void choosePokemon(int choice)
//		{
//			switch (choice)
//			{
//			case 1:
//				chosenPokemon = new Pokemon(PokemonName::Charmander, PokemonType::Fire, 100);
//				cout << "A calm choice! Bulbasaur is yours!" << endl;
//				break;
//			case 2:
//				chosenPokemon = new Pokemon(PokemonName::Bulbasaur, PokemonType::Water, 100);
//				cout << "A calm choice! Bulbasaur is yours!" << endl;
//				break;
//			case 3:
//				chosenPokemon = new Pokemon(PokemonName::Squirtle, PokemonType::Electric, 100);
//				cout << "A cool choice! Squirtle is yours!" << endl;
//				break;
//			default:
//				chosenPokemon = new Pokemon(PokemonName::Pikachu, PokemonType::Cyclone, 100);
//				cout << "\nProfessor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
//				cout << "Professor Oak: Just kidding! Let's go with Pikachu, the thunder cyclonical dragon in the making!\n";
//				break;
//			}
//		}
//};
//
//class ProfessorOak
//{
//	string name;
//public:
//	// Constructor to initialize the professor's name
//	ProfessorOak() : name("Professor Oak") {}
//
//	void greetPlayer(Player& player)
//	{
//		cout << "Hello there! Welcome to the world of Pokémon!" << endl;
//		cout << "My name is Oak. People call me the Pokémon Professor!" << endl;
//		cout << "But enough about me. Let's talk about you!" << endl;
//		cout << "First, tell me, what’s your name? ";
//		cin >> player.name; // Read the player's name
//		cout << "Ah, " << player.name << " !what a funtastic name!" << endl;
//	}
//
//	void offerPokemonChoices(Player& player)
//	{
//		cout << "I have three Pokémon here with me. They’re all quite feisty!" << endl;
//		cout << "1. Charmander - The fire type. A real hothead!" << endl;
//		cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
//		cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;
//		cout << "Enter your choice among 1 to 3: ";
//		int choice;
//		cin >> choice;
//		player.choosePokemon(choice); // Call the player's choosePokemon method with the choice
//	}
//};
//
//int main()
//{
//	Player player("");		// Create a player with an empty name
//	ProfessorOak professor;	// Create a Professor Oak object
//
//	professor.greetPlayer(player);			// Professor Oak greets the player
//	professor.offerPokemonChoices(player);	// Professor Oak offers Pokémon choices to the player
//
//	if (player.chosenPokemon)
//	{
//		// If the player has chosen a Pokémon, print a message
//		cout << player.chosenPokemon->getPokemonName(player.chosenPokemon->name) << " and you, "
//			<< player.name << ", are going to be the best of friends!" << endl;
//		cout << "your Journey begins now! Get ready to explore the vast world of Pokemon!" << endl;
//		player.chosenPokemon->attack(); // Call the chosen Pokémon's attack method
//	}
//	return 0;
//};