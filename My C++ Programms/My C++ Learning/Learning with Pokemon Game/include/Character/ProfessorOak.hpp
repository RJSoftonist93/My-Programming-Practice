#include "../../include/Character/Player/Player.hpp"
#include<iostream>
#include <string>
using namespace std;
using namespace N_Player;

namespace N_Character
{ 
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
}