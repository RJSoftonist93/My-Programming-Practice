#pragma once
#include <string>
using namespace std;

namespace N_Move
{
    struct Move
    {
        string name;
        int power;

        Move(const string& moveName, int movePower)
        {
            name = moveName;
            power = movePower;
        }
    };
}