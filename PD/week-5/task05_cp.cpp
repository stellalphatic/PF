#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string day, float quantity)
{
    if (!(day == "sunday" || day == "saturday"))
    {
        if (fruit == "banana")
            return 2.5 * quantity;
        if (fruit == "apple")
            return 1.2 * quantity;
        if (fruit == "orange")
            return 0.85 * quantity;
        if (fruit == "grapefruit")
            return 1.45 * quantity;
        if (fruit == "kiwi")
            return 2.7 * quantity;
        if (fruit == "pineapple")
            return 5.5 * quantity;
        if (fruit == "grapes")
            return 3.85 * quantity;
    }
    else
    {
        if (fruit == "banana")
            return 2.7 * quantity;
        if (fruit == "apple")
            return 1.25 * quantity;
        if (fruit == "orange")
            return 0.9 * quantity;
        if (fruit == "grapefruit")
            return 1.6 * quantity;
        if (fruit == "kiwi")
            return 3 * quantity;
        if (fruit == "pineapple")
            return 5.6 * quantity;
        if (fruit == "grapes")
            return 4.2 * quantity;
    }
}
int main()
{
    float quantity;
    string fruit, day;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week(e.g., sunday,monday): ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> quantity;
    cout << calculateFruitPrice(fruit, day, quantity);

    return 0;
}