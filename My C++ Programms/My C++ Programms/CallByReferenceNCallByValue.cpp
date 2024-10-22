#include<iostream>
using namespace std;

// Method to cast a spell with the current magic level
void CastSpell(int MagicLevel)
{
	cout << "Casting spell with magic level: " << MagicLevel << endl;
}
// Method to brew the Elixir of Wisdom (call by reference)
void BrewElixir(int &MagicLevel)
{
	MagicLevel += 10;
	CastSpell(MagicLevel);
}
// Method to brew the Potion of Swiftness (call by value)
void BrewPotion(int MagicLevel)
{
	MagicLevel += 50;
	CastSpell(MagicLevel);
}

int main()
{
	int MagicLevel = 30;
	cout << "Initial magic level: " << MagicLevel << endl;

	BrewElixir(MagicLevel);
	BrewPotion(MagicLevel);

	cout << "Final Magic level: " << MagicLevel << endl;

	return 0;
}