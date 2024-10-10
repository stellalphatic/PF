#include <iostream>
bool IsSymmetrical(int);
using namespace std;
int main()
{
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;
    if (IsSymmetrical(number))
        cout << "The number is symmetrical" << endl;
    else
        cout << "The number is not symmetrical" << endl;
}

bool IsSymmetrical(int number)
{
    int digit3 = number % 10;
    int digit2 = (number / 10) % 10;
    int digit1 = number / 100;
    int reverse = (digit3 * 100) + (digit2 * 10) + digit3;
    if (reverse == number)
        return true;
    else
        return false;
}