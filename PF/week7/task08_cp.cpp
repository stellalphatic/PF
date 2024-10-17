#include <iostream>
using namespace std;
int calculateMoney(int age, int unitPrice)
{
    int firstAmount = 10;
    int totalAmount = 0;
    int toys = 0;
    for (int i = 1; i <= age; i++)
    {
        if (age % 2 == 0)
        {
            totalAmount += (firstAmount - 1);
            firstAmount += 10;
        }
        else
        {
            toys++;
        }
    }
    return totalAmount + toys * unitPrice;
}
int main()
{
    int age, price, unitPrice;
    cout << "Enter lily's age: ";
    cin >> age;
    cout << "Enter the price of the Washing Machine: ";
    cin >> price;
    cout << "Enter unit price of each toy: ";
    cin >> unitPrice;
    int total = calculateMoney(age, unitPrice);
    if (total >= price)
    {
        cout << "Yes! " << total - price;
    }
    else
    {
        cout << "No! " << price - total;
    }
    return 0;
}