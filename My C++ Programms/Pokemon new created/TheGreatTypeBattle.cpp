//#include<iostream>
//using namespace std;
//
//enum class HealingItems
//{
//	Potion,
//	Elixir
//};
//
//enum class BattleItems
//{
//	Potion,
//	Elixir
//};
//
//int main()
//{
//	int PlayerChoiceForHealingItems, PlayerChoiceForBattleItems;
//
//	cout << "Young Trainer!\n";
//	cout << "You’ve been doing a fantastic job so far.\n";
//	cout << "But a new challenge awaits, one that even I am struggling with in the lab!\n";
//	cout << "Today, we’re dealing with a type confusion like no other!\n";
//	cout << "We need your help to solve this puzzle with the power of Enum Classes.\n";
//
//	cout << "You see the problem, don’t you?\n";
//	cout << "The same names are used for different purposes in different enums.\n";
//	cout << "The Potion from HealingItems heals,\n";
//	cout << "but the Potion from BattleItems boosts attack in battle!\n";
//	cout << "The system can’t tell them apart, and chaos ensues!\n";
//
//	cout << "Please Choose what you want your Pokemon to do with Healing Items?\n";
//	cout << "Select these - 1:Potion for healing! 2: Elixir for healing!: ";
//	cin >> PlayerChoiceForHealingItems;
//
//	switch (PlayerChoiceForHealingItems)
//	{
//	case 1:
//		cout << "Healing Potion used!Your Pokémon recovers HP!\n";
//		break;
//	case 2:
//		cout << "Healing Elixir Used! Your Pokemon recovers HP!\n";
//		break;
//	default:
//		cout << "Healing Potion used!Your Pokémon recovers HP!\n";
//		break;
//	} 
//
//	cout << "Please Select what you want your Pokemon to do with Battle Items?\n";
//	cout << "Choose these- 1: Potion for battle! 2: Elixir for battle!: ";
//	cin >> PlayerChoiceForBattleItems;
//
//	switch (PlayerChoiceForBattleItems)
//	{
//	case 1:
//		cout << "Battle Potion used! Your Pokémon's attack power rises!\n";
//		break;
//	case 2:
//		cout << "Battle Elixir used!Your Pokémon's attack power rises!\n";
//		break;
//	default:
//		cout << "Battle Potion used!Your Pokémon's attack power rises!\n";
//		break;
//	}
//
//	return 0;
//}