#include "ProfessorOak.hpp"
ProfessorOak::ProfessorOak(string p_name)
{
    name = p_name;
}

void ProfessorOak::greetPlayer(Player& player)
{
    cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
    Utility::WaitForEnter(); //wait Untill you press Enter key
    cout << name << ":My name is Oak. People call me the Pokemon Professor!\n";
    Utility::WaitForEnter(); //wait Untill you press Enter key
    cout << name << ": But enough about me. Let's talk about you!\n";
    Utility::WaitForEnter(); //wait Untill you press Enter key
}

void ProfessorOak::offerPokemonChoices(Player& player)
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
void ProfessorOak::explainMainQuest(Player& player)
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