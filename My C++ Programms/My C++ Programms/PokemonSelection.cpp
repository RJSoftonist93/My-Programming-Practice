//#include<iostream>
//using namespace std;
//
//int main()
//{
//    string Player_Name;
//    string Selected_Pokemon_Name;
//    int Players_Selected_Pokemon;
//
//    // Pokemon's introduction by the Professor Oak
//    cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
//    cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!\n";
//    cout << "Professor Oak: But enough about me. Let's talk about you!\n";
//
//    cout << "Pr.Oak: First of all tell me your good name.\n";
//    cin >> Player_Name;
//
//    cout << "Pr. Oak: Oh " << Player_Name;
//    cout << " Pr. Oak: You must be intersted to learn always. But First you need the pokemon of your Own!";
//
//    // Showing Pokemon choices
//    cout << "Professor Oak: I have three Pokemon here with me. They’re all "
//        "quite feisty!\n";
//    cout << "Professor Oak: Choose wisely...\n";
//    cout << "1. Charmander - The fire type. A real hothead!\n";
//    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
//    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
//
//    cout << "So what is Pokemon you want to choose? Please enter the number!:\n";
//    cin >> Players_Selected_Pokemon;
//
//    //Add the selected Pokemon based on player's input
//    switch (Players_Selected_Pokemon)
//    {
//    case 1:
//        Selected_Pokemon_Name = "Charmander";
//        cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
//        break;
//
//    case 2:
//        Selected_Pokemon_Name = "Bulbasaur";
//        cout << "Professor Oak: A fine choice! Bulbasaur is always ready to "
//            "grow on you!\n";
//        break;
//
//    case 3:
//        Selected_Pokemon_Name = "Squirtle";
//        cout << "Professor Oak: Splendid! Squirtle will keep you cool under "
//            "pressure!\n";
//        break;
//
//    default:
//        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose "
//            "for you...\n";
//        Selected_Pokemon_Name = "Pikachu"; // Default if no valid choice is made
//        cout << "Professor Oak: Just kidding! Let's go with Pikachu, the "
//            "surprise guest!\n";
//        break;
//    }
//
//
//    // conclusion of the first chapter
//    cout << "Professor Oak: " << Selected_Pokemon_Name << " and you, "
//        << Player_Name << ", are going to be the best of friends!\n";
//    cout << "Professor Oak: Your journey begins now! Get ready to explore "
//        "the vast world of Pokemon!\n";
//
//    return 0;
//}