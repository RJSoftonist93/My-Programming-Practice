#include<iostream>
using namespace std;

int main()
{
	int UserChoice;

	cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
	cout << "You can choose one of the following Pokémon:\n";
	cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
	cout << "Which Pokémon would you like to choose? Enter the number: ";
	cin >> UserChoice;

	if (UserChoice == 1)
	{
		cout << "You selected Bulbasaur. Great choice!";
	}
	else if (UserChoice == 2)
	{
		cout << "You selected Charmander. Nice Selection!!";
	}
	else if (UserChoice == 3)
	{
		cout << "You selected Squirtle. Awesome!!!";
	}
	else
	{
		cout << "Your choice is invalid. Please start the game again!";
	}

	return 0;
}