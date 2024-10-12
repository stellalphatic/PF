#include <iostream>
using namespace std;
string decideActivity(string temp, string humidity)
{
    if (temp == "warm")
    {
        if (humidity == "dry")
            return "Play tennis";
        if (humidity == "humid")
            return "Swim";
    }
    if (temp == "cold")
    {
        if (humidity == "dry")
            return "Play BasketBall";
        if (humidity == "humid")
            return "Watch tv";
    }
}
int main()
{
    string temp, humidity;
    cout << "Enter the temperature (warm or cold): ";
    cin >> temp;
    cout << "Enter the humidity (dry or humid): ";
    cin >> humidity;
    cout << "Recommended activity: " << decideActivity(temp, humidity);

    return 0;
}