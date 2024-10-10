#include <iostream>
using namespace std;
void evenOrOdd(int);
void calculatePayableAmount(string, int);
int main()
{
    string day;
    int amount;
    cout << "Enter the day of Purchase: ";
    cin >> day;
    cout << "Enter the Total Purchase Amount: ";
    cin >> amount;
    calculatePayableAmount(day, amount);
}

void calculatePayableAmount(string day, int amount)
{
    if (day == "sunday")
        cout << "Payable Amount: " << amount - (amount * 0.1);
    else
        cout << "Payable Amount: " << amount;
}