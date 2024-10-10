#include <iostream>
using namespace std;
int main()
{
    string name;
    int wins, draws, losses;
    float charge;
    cout << "Enter the name of cricket team: ";
    cin >> name;
    cout << "Enter the number of wins: ";
    cin >> wins;
    cout << "Enter the number of draws: ";
    cin >> draws;
    cout << "Enter the number of losses: ";
    cin >> losses;
    cout << name << " has obtained " << 3 * wins + 1 * draws << " points in Asia Cup tournament";
}