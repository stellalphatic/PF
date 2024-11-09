#include <iostream>
using namespace std;
int main()
{
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    float price[] = {60, 70, 40, 30};
    string userFruit;
    float quantity;
    cout << "Enter name of fruit: ";
    cin >> userFruit;
    cout << "Enter quantity in Kgs: ";
    cin >> quantity;
    int index = 0;
    while (fruit[index] != userFruit && index < 4)
    {
        index++;
    }
    if (index > 3)
        cout << "Fruit not available" << endl;
    else
        cout << "Total bill: " << price[index] * quantity;
    return 0;
}