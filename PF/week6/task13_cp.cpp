#include <iostream>
using namespace std;
float lowestPrice(string period, float distance)
{
    if (distance >= 100)
        return 0.06 * distance;
    if (distance >= 20)
        return 0.09 * distance;
    if (period == "day")
        return 0.7 + 0.79 * distance;
    if (period == "night")
        return 0.7 + 0.9 * distance;
}
int main()
{
    float distance;
    string period;
    cout << "Enter the number of kilometers: ";
    cin >> distance;
    cout << "Enter the period of day(day/ night): ";
    cin >> period;

    cout << "Your lowest price for " << distance << " km is " << lowestPrice(period, distance);
    return 0;
}