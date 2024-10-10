#include <iostream>
using namespace std;
string checkSpeed(float speed)
{
    if (speed <= 10)
        return "slow";
    if (speed <= 50)
        return "Average";
    if (speed <= 150)
        return "fast";
    if (speed <= 1000)
        return "UltraFast";
    return "Extremely Fast";
}
int main()
{
    float speed;
    cout << "Enter speed: ";
    cin >> speed;
    cout << checkSpeed(speed);
    return 0;
}