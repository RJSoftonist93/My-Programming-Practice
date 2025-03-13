#include<string>
#include<vector>
using namespace std;

struct Grass
{
    string EnvironmentType; // Example: "Forest", "Cave", "Riverbank"
    vector<Pokemon> WildPokemonList; // List of wild Pokémon that live in this grass
    int EncounterRate; // Likelihood of encountering a wild Pokémon, out of 100
};