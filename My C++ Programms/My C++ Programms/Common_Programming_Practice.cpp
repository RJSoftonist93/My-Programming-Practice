////5.What will be the output of the following code snippet ?
#include<iostream>
using namespace std;


//// call by reference
//int& getReference() {
//    int x = 10;
//    cout << "X: " << x << endl;
//    cout << "&X " << &x << endl;
//    //cout << "*x " << *x;
//    return x;
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