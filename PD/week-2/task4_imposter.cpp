#include <iostream>
using namespace std;
int main()
{
    int imposter, player;
    cout << "Enter imposter Count: ";
    cin >> imposter;
    cout << "Enter Player Count: ";
    cin >> player;
    float chance = 100.0 * (imposter / (player * 1.0));

    cout << "Chance of being an imposter: " << chance << "%";
}