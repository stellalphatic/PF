#include <iostream>
using namespace std;
void discountedPrice(string, int);
int main()
{
    string country;
    int price;
    cout << "Enter your Country\'s name: ";
    cin >> country;
    cout << "Enter Ticket Price in dollars: $";
    cin >> price;
    discountedPrice(country, price);
}

void discountedPrice(string country, int price)
{
    if (country == "Pakistan")
        cout << "Final ticket price after Discount: $" << price - (price * 0.05);
    else if (country == "Ireland")
        cout << "Final ticket price after Discount: $" << price - (price * 0.1);
    else if (country == "India")
        cout << "Final ticket price after Discount: $" << price - (price * 0.2);
    else if (country == "England")
        cout << "Final ticket price after Discount: $" << price - (price * 0.30);
    else if (country == "Canada")
        cout << "Final ticket price after Discount: $" << price - (price * 0.45);
}
