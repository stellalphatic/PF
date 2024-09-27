#include <iostream>
using namespace std;
void flowerShop(int, int, int);

int main()
{
    int redRose, whiteRose, tulip;
    cout << "Red Rose: ";
    cin >> redRose;
    cout << "White Rose: ";
    cin >> whiteRose;
    cout << "Tulips: ";
    cin >> tulip;
    flowerShop(redRose, whiteRose, tulip);
}

void flowerShop(int redRose, int whiteRose, int tulip)
{
    float total = 2 * redRose + 4.1 * whiteRose + 2.5 * tulip;
    if (total > 200)
    {
        cout << "Original Price:  $" << total << endl;
        cout << "Price after Discount: $" << total - (total * 0.2) << endl;
    }
    else
    {
        cout << "Original Price:  $" << total << endl;
        cout << "No Discount Applied" << endl;
    }
}