#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> shoppingList;

    shoppingList.push_back("Apples");
    shoppingList.push_back("Milk");
    shoppingList.push_back("Bread");
    shoppingList.push_back("Eggs");

    cout << "The Second Item in List is: " << shoppingList[1] << endl;
    cout << "following is brock's complete shopping list:" << endl;

    for (int i = 0; i < shoppingList.size(); i++)
    {
        cout << i + 1 << "." << shoppingList[i] << endl;
    }

    return 0;
}
