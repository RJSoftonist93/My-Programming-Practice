#include "Player.hpp"
#include<iostream>
#include <string>
using namespace std;

//professor Oak class defination
class ProfessorOak
{
public:
    string name;
    //parameterized constructor
    ProfessorOak(string p_name);
 
    void greetPlayer(Player& player);

    void offerPokemonChoices(Player& player);


    //main quest conversation method
    void explainMainQuest(Player& player);
};