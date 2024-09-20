#include <iostream>
using namespace std;
int main()
{
    float veg, fruit;
    int vegWeight, fruitWeight;
    cout << "Enter vegetable price per Kilogram ( in coins): ";
    cin >> veg;
    cout << "Enter fruit price per Kilogram ( in coins): ";
    cin >> fruit;
    cout << "Enter total kilograms of vegetables: ";
    cin >> vegWeight;
    cout << "Enter total kilograms of fruits: ";
    cin >> fruitWeight;

    cout << "Total earnings in Rupees (Rps): " << (veg * vegWeight + fruit * fruitWeight) / 1.94; // since 1 Rp =1.94 coins
}