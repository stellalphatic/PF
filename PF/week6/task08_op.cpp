#include <iostream>
using namespace std;
float discount(string day, string month, float price)
{
    if (day == "sunday" && (month == "october" || month == "august" || month == "march"))
        return price * 0.9;
    else if (day == "monday" && (month == "november" || month == "december"))
        return price * 0.95;

    return price;
}
int main()
{
    string day, month;
    float price;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the price: ";
    cin >> price;
    cout << discount(day, month, price);

    return 0;
}