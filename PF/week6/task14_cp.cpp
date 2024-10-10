#include <iostream>
#include <string>
using namespace std;
string calculateCost(float budget, string category, int people)
{
    float VIP = 499.99;
    float normal = 249.99;

    if (people <= 4)
        budget = budget - 0.75 * budget;
    else if (people <= 9)
        budget = budget - 0.6 * budget;
    else if (people <= 24)
        budget = budget - 0.5 * budget;
    else if (people <= 49)
        budget = budget - 0.4 * budget;
    else if (people > 50)
        budget = budget - 0.25 * budget;

    if (category == "VIP")
    {
        if (budget - people * VIP >= 0)
            return "Yes! You have " + to_string(budget - people * VIP) + " leva left.";
        else
            return "Not enough money! You need " + to_string(people * VIP - budget) + " leva.";
    }
    if (category == "normal")
    {
        if (budget - people * normal >= 0)
            return "Yes! You have " + to_string(budget - people * normal) + " leva left.";
        else
            return "Not enough money! You need " + to_string(people * normal - budget) + " leva.";
    }
}
int main()
{
    float budget;
    string category;
    int people;
    cout << "Enter budget: ";
    cin >> budget;
    cout << "Enter category(VIP/Normal): ";
    cin >> category;
    cout << "Enter number of people in group: ";
    cin >> people;
    cout << calculateCost(budget, category, people);

    return 0;
}