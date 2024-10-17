#include <iostream>
using namespace std;
int calculatePrice(int money, int year)
{

    int amount;
    int age = 18;
    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            amount += 12000;
        }
        else
        {
            amount += 12000 + 50 * age;
        }
        age++;
    }
    return amount;
}
int main()
{
    int money, year;
    cout << "Enter money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;
    int amountNeeded = calculatePrice(money, year);
    if (amountNeeded > money)
    {
        cout << "He will need " << amountNeeded - money << " dollars to survive." << endl;
    }
    else
    {
        cout << "Yes! He will live a carefree life and will have " << money - amountNeeded << " dollars left." << endl;
    }

    return 0;
}